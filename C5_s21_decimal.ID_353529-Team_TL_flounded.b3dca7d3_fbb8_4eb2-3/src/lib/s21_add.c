#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int error_code = 0;
  if (!result) return 1;
  *result = (s21_decimal){{0, 0, 0, 0}};
  int sign1 = s21_get_sign(value_1), sign2 = s21_get_sign(value_2);
  s21_decimal v1 = value_1, v2 = value_2;
  s21_set_sign(&v1, 0);
  s21_set_sign(&v2, 0);
  int scale1 = s21_get_scale(v1), scale2 = s21_get_scale(v2);
  if (scale1 < scale2) {  // Normalize decimal
    while (scale1 < scale2) {
      if (s21_multiply_by_10(&v1)) {
        s21_divide_by_10_with_bank_rounding(&v2);
        scale2--;
      } else
        scale1++;
    }
  } else {
    while (scale2 < scale1) {
      if (s21_multiply_by_10(&v2)) {
        s21_divide_by_10_with_bank_rounding(&v1);
        scale1--;
      } else
        scale2++;
    }
  }
  int final_scale = scale1;
  s21_set_scale(&v1, final_scale);
  s21_set_scale(&v2, final_scale);
  if (sign1 == sign2) {
    if (s21_add_mantissas(v1, v2, result))
      error_code = sign1 ? 2 : 1;
    else
      s21_set_sign(result, sign1);
  } else {
    if (s21_is_mantissa_greater_or_equal(v1, v2)) {
      s21_sub_mantissas(v1, v2, result);
      s21_set_sign(result, sign1);
    } else {
      s21_sub_mantissas(v2, v1, result);
      s21_set_sign(result, sign2);
    }
  }
  if (!error_code)
    s21_set_scale(result, final_scale);
  else
    *result = (s21_decimal){{0, 0, 0, 0}};
  return error_code;
}
