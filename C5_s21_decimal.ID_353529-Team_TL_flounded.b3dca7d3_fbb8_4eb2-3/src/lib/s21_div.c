#include <stdio.h>

#include "../s21_decimal.h"

int s21_div_core(s21_decimal v1, s21_decimal v2, s21_decimal *result,
                 int *final_scale) {
  int status = 0;
  int scale1 = s21_get_scale(v1);
  int scale2 = s21_get_scale(v2);
  int res_scale = scale1 - scale2;

  s21_decimal remainder;
  s21_div_mantissas(v1, v2, result, &remainder);

  s21_decimal temp_quotient = {{0, 0, 0, 0}};

  while (!s21_is_zero(remainder)) {
    s21_decimal temp_res = *result;
    if (res_scale >= 28 || s21_multiply_by_10(&temp_res)) {
      s21_multiply_by_10(&remainder);
      s21_div_mantissas(remainder, v2, &temp_quotient, &remainder);
      s21_decimal five = {{5, 0, 0, 0}};
      if (s21_is_greater(temp_quotient, five) ||
          (s21_is_equal(temp_quotient, five) && s21_get_bit(*result, 0))) {
        s21_decimal one = {{1, 0, 0, 0}};
        s21_add_mantissas(*result, one, result);
      }
      break;
    }
    *result = temp_res;
    s21_multiply_by_10(&remainder);
    s21_div_mantissas(remainder, v2, &temp_quotient, &remainder);
    s21_add_mantissas(*result, temp_quotient, result);
    res_scale++;
  }

  while (res_scale < 0) {
    if (s21_multiply_by_10(result)) {
      status = 1;
      break;
    }
    res_scale++;
  }

  if (status == 0) {
    *final_scale = res_scale;
  }

  return status;
}

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  if (result == NULL) return 1;

  int status = 0;
  for (int i = 0; i < 4; i++) result->bits[i] = 0;

  if (s21_is_zero(value_2)) {
    status = 3;
  } else {
    int sign = s21_get_sign(value_1) != s21_get_sign(value_2);
    s21_set_sign(&value_1, 0);
    s21_set_sign(&value_2, 0);

    int final_scale = 0;
    int core_status = s21_div_core(value_1, value_2, result, &final_scale);

    if (core_status == 0) {
      s21_set_scale(result, final_scale);
      s21_set_sign(result, sign);
    } else {
      status = (sign == 0) ? 1 : 2;
    }
  }

  if (status != 0) {
    for (int i = 0; i < 4; i++) result->bits[i] = 0;
  }

  return status;
}