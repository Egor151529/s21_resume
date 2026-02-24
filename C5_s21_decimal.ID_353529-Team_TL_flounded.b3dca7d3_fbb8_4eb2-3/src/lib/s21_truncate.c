#include "../s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
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
      s21_decimal temp_val = value;

      // Basically unused, but needed for s21_div_mantissas
      s21_decimal remainder_dec;

      s21_set_scale(&temp_val, 0);
      s21_decimal ten = {{10, 0, 0, 0}};

      for (int i = 0; i < scale; i++) {
        s21_decimal quotient_tmp;
        s21_div_mantissas(temp_val, ten, &quotient_tmp, &remainder_dec);
        temp_val = quotient_tmp;
      }

      *result = temp_val;
      s21_set_sign(result, sign);
      s21_set_scale(result, 0);
    }
  }

  return error;
}
