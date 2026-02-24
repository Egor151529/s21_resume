#include <ctype.h>

#include "../s21_decimal.h"

#define MAX_VALUE 0xFFFFFFFF

// Функция для перевода массива из шести интов в децимал
void to_decimal(s21_decimal *result, S21_UINT32 src[6]) {
  for (int i = 0; i < 3; i++) {
    result->bits[i] = (int)src[i];
  }
}

// Добавление единички в массив из интов
// Применяется при банковской округлении,
// чтобы как раз добавить единицу, если округляется в большую сторону
int add_one(S21_UINT32 src[6]) {
  int flag_stop = 1;
  for (int i = 0; i < 6 && flag_stop; ++i) {
    S21_UINT32 prev = src[i];
    src[i] = prev + 1;
    if (src[i] != 0) flag_stop = 0;  // переноса дальше нет, успех
    // иначе был перенос «через 0», идём дальше
  }
  return flag_stop;  // вышли за 192 бита
}

/**
 * Выполняет банковское округление ("round half to even")
 * Алгоритм:
 *  1. Если остаток от деления (div) > 5 — всегда округляем вверх.
 *  2. Если div == 5:
 *      - и first_div == 0 (дальше нет цифр) или first_div == 11 (число делилось
 * впервые), то применяется банковское правило: — если число нечётное (src[0] %
 * 2 != 0) → прибавить 1; — если число чётное  (src[0] % 2 == 0) → оставить без
 * изменений.
 *      - иначе (если после 5 есть ещё цифры) — обычное округление вверх.
 *
 * Пример:
 *   12.5 -> 12
 *   13.5 -> 14
 */

int bank_rounding(S21_UINT32 src[6], unsigned long long div,
                  S21_UINT64 first_div) {
  int flag_error = 0;
  if (div > 5) {
    flag_error = add_one(src);
  } else if (div == 5 && (first_div == 0 || first_div == 11)) {
    if (src[0] % 2) flag_error = add_one(src);
  } else if (div == 5) {
    flag_error = add_one(src);
  }
  return flag_error;
}

// Функция для получения самого последнего символа десятичной записи числа
int drop_big_digit(S21_UINT32 src[6], int *result_exponent,
                   S21_UINT64 *first_div, int *big) {
  int flag_error = 0;
  int small = 0;
  S21_UINT64 last, div;
  // Если у массива занят хотя бы один из элементов с 3 по 5 - значит число
  // большое
  if ((src[5] || src[4] || src[3]) && (*big == 0)) *big = 1;
  last = src[5];
  div = last % 10;
  src[5] = (S21_UINT32)(last / 10);
  for (int i = 4; i >= 0; i--) {
    // Сцепление остаткая от более старшего разряда к младшему
    // N=src[0]+src[1]⋅2^32+src[2]⋅2^64+…+src[5]⋅2^160
    // S21_UINT64 cur = (rem << 32) | src[i];
    // S21_UINT64 div = cur / 10u;
    // rem = cur % 10u;
    // src[i] = (S21_UINT32)div;
    S21_UINT64 BASE = 1ULL << 32;
    last = (S21_UINT64)src[i] + (S21_UINT64)div * BASE;
    div = last % 10;
    src[i] = (S21_UINT32)(last / 10);
  }
  if (!src[5] && !src[4] && !src[3]) small = 1;

  // Когда число "очищается" от трех старших элементов (с 3 по 5)
  // Выставляется флаг, который говорит, что пора переходить к округлению.
  // Также число в целом могло не быть большим.
  // Для этого тоже нужна была проверка.
  int flag_stop = 0;
  if (*big && small && (*result_exponent <= 29)) {
    flag_stop = 1;
  } else if (*result_exponent == 29 && !(*big)) {
    flag_stop = 1;
  }
  if (!flag_stop && ((*first_div == 11) || (*first_div == 0))) {
    *first_div = div;
  } else if (flag_stop) {
    flag_error = bank_rounding(src, div, *first_div);
  }

  return flag_error;
}

// Вынес основную логику программы в отдельную функцию во время рефакторинга
void s21_mul_extention1(S21_UINT32 temp_result[6], S21_UINT32 temp_value_2,
                        int i, s21_decimal value_1,
                        S21_UINT64 *temp_upper_bits) {
  for (int j = 0; (j < 3); j++) {
    // Получить значение битов от первого значения
    S21_UINT32 temp_value_1 = value_1.bits[j];
    // Записать результат умножения в 64-битный инт
    S21_UINT64 temp_result_value = (S21_UINT64)temp_value_2 * temp_value_1;

    // Если при сложении элемента массива и результата умножения получается
    // больше 2^32 то провести перенос остатка в следующий порядок Остаток,
    // который нужно перенести записывается в temp_upper_bits
    if (((S21_UINT64)(temp_result[i + j]) + (S21_UINT32)temp_result_value) >
        MAX_VALUE) {
      S21_UINT64 temp_sum =
          (S21_UINT64)temp_result[i + j] + (S21_UINT32)temp_result_value;
      // Тут записывается результат суммы 32 битного результата умножения, если
      // он превышает 2^32
      *temp_upper_bits += (S21_UINT32)(temp_sum >> 32);
    }

    // Прибавить 32 бита от результата умножения
    temp_result[i + j] += (S21_UINT32)temp_result_value;
    // А тут записываются значения битов, которые идут после 32 первых бит
    *temp_upper_bits += (S21_UINT32)(temp_result_value >> 32);

    // Здесь уже начинается блок прибавки записанных битов более высого порядка
    // в элемент массив i + j + 1 порядка А также проверка, что не происходит
    // какого-либо теоретического переполнения в шестой элемент массива,
    // которого не существует, и до которого в теории невозможно добраться при
    // перемножении двух децимал чисел
    if (((S21_UINT64)temp_result[i + j + 1] + *temp_upper_bits) <= MAX_VALUE) {
      temp_result[i + j + 1] += *temp_upper_bits;
      *temp_upper_bits = 0;
    } else {
      S21_UINT64 check_carry = temp_result[i + j + 1] + *temp_upper_bits;
      temp_result[i + j + 1] = (S21_UINT32)(check_carry);
      *temp_upper_bits = (S21_UINT32)(check_carry >> 32);
    }
  }
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (!s21_is_correct_decimal(value_1) || !s21_is_correct_decimal(value_2) ||
      !result || !s21_is_correct_decimal(*result)) {
    return 1;
  } else if (s21_is_zero(value_1) || (s21_is_zero(value_2))) {
    *result = (s21_decimal){0};
    return 0;
  }
  int big = 0, flag_error = 0;
  S21_UINT32 temp_result[6] = {0};
  S21_UINT64 temp_upper_bits = 0;  // Биты от переполнения при умножении
  int result_sign = s21_get_sign(value_1) ^ s21_get_sign(value_2),
      result_exponent = s21_get_exponent(value_1) + s21_get_exponent(value_2);
  // Тут стартует первый массив, в котором берется значение бита из второго
  // децимал числа
  for (int i = 0; (i < 3); i++) {
    S21_UINT32 temp_value_2 = value_2.bits[i];
    s21_mul_extention1(temp_result, temp_value_2, i, value_1, &temp_upper_bits);
  }
  // Если число ни разу не придется делить на 10 из-за переполнения мантисс
  // при присутствии хотя бы какой-то десятичной части
  // то данная переменная так и останется равна 11
  S21_UINT64 first_div = 11;
  // Если хотя бы один из старший битов занят и есть хотя бы какая-то десятичная
  // часть то начинается отбрасывание десятичных цифр из числа и каждый раз
  // вычитается степень, так как мы постепенно смещаемся "вправо"
  while ((temp_result[5] || temp_result[4] || temp_result[3] ||
          result_exponent > 28) &&
         !flag_error) {
    if ((temp_result[5] || temp_result[4] || temp_result[3]) &&
        result_exponent == 0)
      flag_error = 1;
    if (!flag_error) {
      flag_error =
          drop_big_digit(temp_result, &result_exponent, &first_div, &big);
      result_exponent -= 1;
    }
  }
  // Если случилась ошибка, то выдать код ошибки в зависимости от знака числа
  // После чего обнулить результат
  if (flag_error) {
    flag_error = result_sign ? 2 : 1;
    *result = (s21_decimal){0};
  } else {
    // если ошибок нет, то перевести результат в децимал число
    // потом поставить бит степени десятичной дроби
    // и поставить нужный знак
    to_decimal(result, temp_result);
    s21_set_exponent(result, result_exponent);
    // s21_normalize(result, &result_exponent);
    if ((s21_is_zero(*result)) && (result->bits[3] >= 28)) {
      flag_error = 2;
      s21_set_sign(result, 0);
    } else if ((result->bits[0] == 0) && (result->bits[1] == 0) &&
               (result->bits[2] == 0)) {
      s21_set_sign(result, 0);
    } else
      s21_set_sign(result, result_sign);
  }
  return flag_error;
}
