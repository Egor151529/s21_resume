#include "../s21_decimal.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int sign_value_2 = s21_get_sign(value_2);
  if (sign_value_2 == 0)
    s21_set_sign(&value_2, 1);
  else
    s21_set_sign(&value_2, 0);
  // return s21_add_and_sub(value_1, value_2, result);
  return s21_add(value_1, value_2, result);
}
