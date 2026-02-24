#include "../s21_decimal.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  int error = 0;

  if (result == NULL) {
    error = 1;
  } else {
    for (int i = 0; i < 4; i++) {
      result->bits[i] = 0;
    }
    int sign = s21_get_sign(value);

    s21_decimal half = {{5, 0, 0, 0}};
    s21_set_scale(&half, 1);

    s21_decimal tmp;
    int internal_error = 0;

    // Negative
    if (sign) {
      internal_error = s21_sub(value, half, &tmp);
      if (internal_error == 0) {
        internal_error = s21_truncate(tmp, result);
      }
    } else {
      internal_error = s21_add(value, half, &tmp);
      if (internal_error == 0) {
        internal_error = s21_floor(tmp, result);
      }
    }

    if (internal_error != 0) {
      error = 1;
      for (int i = 0; i < 4; i++) {
        result->bits[i] = 0;
      }
    }
  }
  return error;
}