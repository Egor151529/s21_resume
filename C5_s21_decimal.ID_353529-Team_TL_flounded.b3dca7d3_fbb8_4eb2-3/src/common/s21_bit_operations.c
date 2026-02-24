#include "common.h"

int s21_get_sign(s21_decimal value) { return (value.bits[3] >> 31) & 1; }

void s21_set_sign(s21_decimal *value, int sign) {
  if (sign) {
    // Установка отрицательного знака (бит 31 = 1)
    value->bits[3] |= (1 << 31);
  } else {
    // Установка положительного знака (бит 31 = 0)
    value->bits[3] &= ~(1 << 31);
  }
}

int s21_get_exponent(s21_decimal value) { return (value.bits[3] >> 16) & 0xFF; }

void s21_set_exponent(s21_decimal *value, int exponent) {
  value->bits[3] &= ~(0xFF << 16);
  value->bits[3] |= (exponent << 16);
}

int s21_is_correct_decimal(s21_decimal value) {
  int error = 1;
  // Биты 0-15 должны быть 0
  if (value.bits[3] & 0xFFFF) error = 0;

  // Биты 24-30 должны быть 0
  if (value.bits[3] & (0x7F << 24)) error = 0;

  // Exponent должен быть в диапазоне 0-28
  int exponent = s21_get_scale(value);
  if (exponent < 0 || exponent > 28) error = 0;

  return error;
}

/**
 * @brief Вспомогательная функция для деления на 10 с банковским округлением
 * @param d Число для деления на 10 с округлением
 */
void s21_divide_by_10_with_bank_rounding(s21_decimal *d) {
  s21_decimal ten = {{10, 0, 0, 0}};
  s21_decimal quotient, remainder_dec;

  s21_div_mantissas(*d, ten, &quotient, &remainder_dec);

  int remainder = remainder_dec.bits[0];

  if (remainder > 5 || (remainder == 5 && (quotient.bits[0] & 1))) {
    s21_decimal one = {{1, 0, 0, 0}};
    s21_add_mantissas(quotient, one, &quotient);
  }
  *d = quotient;
}

/**
 * @brief Складывает мантиссы двух s21_decimal.
 * @param value_1 Первое слагаемое.
 * @param value_2 Второе слагаемое.
 * @param result Указатель для сохранения результата.
 * @return 0 в случае успеха, 1 в случае переполнения.
 */
int s21_add_mantissas(s21_decimal value_1, s21_decimal value_2,
                      s21_decimal *result) {
  int status = 0;
  if (result != NULL) {
    unsigned long long carry = 0;
    for (int i = 0; i < 3; i++) {
      carry += (unsigned long long)(unsigned int)value_1.bits[i] +
               (unsigned int)value_2.bits[i];
      result->bits[i] = carry & 0xFFFFFFFF;
      carry >>= 32;
    }
    if (carry > 0) status = 1;
  } else {
    status = 1;
  }
  return status;
}

/**
 * @brief Умножает мантиссу s21_decimal на 10.
 * @param d Указатель на s21_decimal для изменения.
 * @return 0 в случае успеха, 1 в случае переполнения.
 */
int s21_multiply_by_10(s21_decimal *d) {
  int status = 0;
  if (d != NULL) {
    s21_decimal temp1 = *d;
    s21_decimal temp2 = *d;
    int st1 = s21_shift_left(&temp1, 1);  // *2
    int st2 = s21_shift_left(&temp2, 3);  // *8
    if (st1 || st2 || s21_add_mantissas(temp1, temp2, d)) {
      status = 1;
    }
  } else {
    status = 1;
  }
  return status;
}

/**
 * @brief Сравнивает мантиссы: d1 >= d2.
 * @return 1 если d1 >= d2, иначе 0.
 */
int s21_is_mantissa_greater_or_equal(s21_decimal d1, s21_decimal d2) {
  int result = 1;
  int found = 0;
  for (int i = 2; i >= 0 && !found; i--) {
    if ((unsigned)d1.bits[i] > (unsigned)d2.bits[i]) {
      result = 1;
      found = 1;
    }
    if ((unsigned)d1.bits[i] < (unsigned)d2.bits[i]) {
      result = 0;
      found = 1;
    }
  }
  return result;
}

/**
 * @brief Вычитает мантиссы (d1 - d2). Считается, что d1 >= d2.
 * @param res Указатель для сохранения результата.
 */
void s21_sub_mantissas(s21_decimal d1, s21_decimal d2, s21_decimal *res) {
  if (res != NULL) {
    unsigned long long borrow = 0;
    for (int i = 0; i < 3; i++) {
      unsigned long long val1 = (unsigned int)d1.bits[i];
      unsigned long long val2 = (unsigned int)d2.bits[i];
      unsigned long long diff = val1 - val2 - borrow;
      res->bits[i] = diff & 0xFFFFFFFF;
      borrow = (diff >> 63) & 1;
    }
  }
}

/**
 * @brief Выполняет целочисленное деление мантисс.
 * @param dividend Делимое.
 * @param divisor Делитель.
 * @param quotient Указатель для частного.
 * @param remainder Указатель для остатка.
 */
void s21_div_mantissas(s21_decimal dividend, s21_decimal divisor,
                       s21_decimal *quotient, s21_decimal *remainder) {
  if (quotient != NULL && remainder != NULL && !s21_is_zero(divisor)) {
    for (int i = 0; i < 4; i++) quotient->bits[i] = 0;
    for (int i = 0; i < 4; i++) remainder->bits[i] = 0;

    for (int i = 95; i >= 0; i--) {
      s21_shift_left(remainder, 1);

      if (s21_get_bit(dividend, i)) {
        s21_set_bit(remainder, 0, 1);
      }

      if (s21_is_mantissa_greater_or_equal(*remainder, divisor)) {
        s21_sub_mantissas(*remainder, divisor, remainder);
        s21_set_bit(quotient, i, 1);
      }
    }
  } else {
    if (quotient) {
      for (int i = 0; i < 4; i++) quotient->bits[i] = 0;
    }
    if (remainder) {
      for (int i = 0; i < 4; i++) remainder->bits[i] = 0;
    }
  }
}

/**
 * @brief Получает значение бита из 96-битной мантиссы.
 * @param d s21_decimal, из которого получается бит.
 * @param pos Позиция бита (0-95).
 * @return Значение бита (0 или 1).
 */
int s21_get_bit(s21_decimal d, int pos) {
  int result = 0;
  if (pos >= 0 && pos <= 95) {
    int bit_index = pos / 32;
    int bit_offset = pos % 32;
    result = (d.bits[bit_index] >> bit_offset) & 1;
  }
  return result;
}

/**
 * @brief Устанавливает значение бита в 96-битной мантиссе.
 * @param d Указатель на s21_decimal для изменения(нам ведь можно применять
 * указатели???).
 * @param pos Позиция бита (0-95).
 * @param bit Значение бита для установки (0 или 1).
 */
void s21_set_bit(s21_decimal *d, int pos, int bit) {
  if (d != NULL && pos >= 0 && pos <= 95) {
    int bit_index = pos / 32;
    int bit_offset = pos % 32;
    if (bit == 1) {
      d->bits[bit_index] |= (1 << bit_offset);
    } else {
      d->bits[bit_index] &= ~(1 << bit_offset);
    }
  }
}

/**
 * @brief Получает коэффициент масштабирования (scale).
 * @param d s21_decimal, из которого получается scale.
 * @return Значение scale (0-28).
 */
int s21_get_scale(s21_decimal d) {
  return ((unsigned int)d.bits[3] >> 16) & 0xFF;
}

/**
 * @brief Устанавливает коэффициент масштабирования (scale).
 * @param d Указатель на s21_decimal для изменения.
 * @param scale Значение scale для установки.
 */
void s21_set_scale(s21_decimal *d, int scale) {
  if (d != NULL) {
    d->bits[3] &= ~(0xFF << 16);
    d->bits[3] |= (scale << 16);
  }
}

/**
 * @brief Проверяет, равна ли мантисса s21_decimal нулю.
 * @param d s21_decimal для проверки.
 * @return 1 если мантисса равна нулю, иначе 0.
 */
int s21_is_zero(s21_decimal d) {
  return d.bits[0] == 0 && d.bits[1] == 0 && d.bits[2] == 0;
}

/**
 * @brief Сдвигает 96-битную мантиссу влево.
 * @param d Указатель на s21_decimal для изменения.
 * @param shift Количество битов для сдвига.
 * @return 0 в случае успеха, 1 в случае переполнения.
 */
int s21_shift_left(s21_decimal *d, int shift) {
  int status = 0;
  if (d != NULL) {
    for (int i = 0; i < shift; i++) {
      int bit95 = s21_get_bit(*d, 95);
      if (bit95 == 1) status = 1;

      unsigned int carry1 = s21_get_bit(*d, 63);
      unsigned int carry2 = s21_get_bit(*d, 31);

      d->bits[2] <<= 1;
      d->bits[1] <<= 1;
      d->bits[0] <<= 1;

      if (carry1) s21_set_bit(d, 64, 1);
      if (carry2) s21_set_bit(d, 32, 1);
    }
  } else {
    status = 1;
  }
  return status;
}