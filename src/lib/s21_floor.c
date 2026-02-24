#include "../s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  int error = 0;

  if (result == NULL) {
    error = 1;
  } else {
    for (int i = 0; i < 4; i++) {
      result->bits[i] = 0;
    }

    int sign = s21_get_sign(value);
    int scale = s21_get_scale(value);

    if (scale == 0) {
      *result = value;
    } else {
      s21_decimal temp_value = value;
      s21_decimal ten = {{10, 0, 0, 0}};
      s21_decimal remainder_dec;
      int fractional_part_exists = 0;

      for (int i = 0; i < scale; i++) {
        s21_decimal quotient_temp;
        s21_div_mantissas(temp_value, ten, &quotient_temp, &remainder_dec);
        temp_value = quotient_temp;
        // Убрал вложенность
        // if (!s21_is_zero(remainder_dec)) {
        //   fractional_part_exists = 1;
        // }
        fractional_part_exists = (!s21_is_zero(remainder_dec));
      }

      if (sign == 1 && fractional_part_exists == 1) {
        s21_decimal one = {{1, 0, 0, 0}};
        s21_add_mantissas(temp_value, one, &temp_value);
      }

      *result = temp_value;
      s21_set_scale(result, 0);  // floored always have scale = 0
      s21_set_sign(result, sign);
    }
  }

  return error;
}
