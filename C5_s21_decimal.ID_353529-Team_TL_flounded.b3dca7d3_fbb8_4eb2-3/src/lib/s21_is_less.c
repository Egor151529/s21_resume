#include "../s21_decimal.h"

int s21_less(s21_decimal value_1, s21_decimal value_2);
int s21_check_decimal_value_zero(s21_decimal value);
void s21_is_less_42(s21_decimal only_int_value_1, s21_decimal only_int_value_2,
                    int *flag_less, int exponent_value_1, int exponent_value_2,
                    s21_decimal value_1, s21_decimal value_2);

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  int flag_less = 1, sign_value_1 = s21_get_sign(value_1),
      sign_value_2 = s21_get_sign(value_2),
      exponent_value_1 = s21_get_exponent(value_1),
      exponent_value_2 = s21_get_exponent(value_2);
  if (s21_check_decimal_value_zero(value_1) &&
      s21_check_decimal_value_zero(value_2)) {
    flag_less = 0;
  } else if (sign_value_1 == 1 && sign_value_2 == 0) {
    flag_less = 1;
  } else if (sign_value_1 == 0 && sign_value_2 == 1) {
    flag_less = 0;
  } else if (sign_value_1 == 0 && sign_value_2 == 0) {
    if (exponent_value_1 == exponent_value_2) {
      flag_less = s21_less(value_1, value_2);
    } else {  // Delete exponent and less
      s21_decimal only_int_value_1 = {0}, only_int_value_2 = {0};
      s21_truncate(value_1, &only_int_value_1);
      s21_truncate(value_2, &only_int_value_2);
      s21_is_less_42(only_int_value_1, only_int_value_2, &flag_less,
                     exponent_value_1, exponent_value_2, value_1, value_2);
    }
  } else if (sign_value_1 == 1 && sign_value_2 == 1) {
    s21_set_sign(&value_1, 0);
    s21_set_sign(&value_2, 0);
    flag_less = s21_is_less(value_2, value_1);
  }
  return flag_less;
}

void s21_is_less_42(s21_decimal only_int_value_1, s21_decimal only_int_value_2,
                    int *flag_less, int exponent_value_1, int exponent_value_2,
                    s21_decimal value_1, s21_decimal value_2) {
  if (s21_is_not_equal(only_int_value_1, only_int_value_2)) {
    *flag_less = s21_less(only_int_value_1, only_int_value_2);
  } else if (exponent_value_1 == 0 && exponent_value_2 != 0) {
    s21_decimal frac_part = {0};
    s21_truncate(value_2, &frac_part);
    s21_sub(value_2, frac_part, &frac_part);
    if (frac_part.bits[0] == 0 && frac_part.bits[1] == 0 &&
        frac_part.bits[2] == 0) {
      *flag_less = 0;
    } else {
      *flag_less = 1;
    }
  } else if (exponent_value_2 == 0 && exponent_value_1 != 0) {
    *flag_less = 0;
  } else if (exponent_value_1 > exponent_value_2) {
    if (s21_check_decimal_value_zero(value_2))
      *flag_less = 0;
    else {
      s21_set_exponent(&value_1, exponent_value_1 - exponent_value_2);
      s21_set_exponent(&value_2, 0);
      only_int_value_1 = (s21_decimal){{0, 0, 0, 0}};
      only_int_value_2 = (s21_decimal){{0, 0, 0, 0}};
      s21_truncate(value_1, &only_int_value_1);
      s21_truncate(value_2, &only_int_value_2);
      if (s21_is_not_equal(only_int_value_1, only_int_value_2))
        *flag_less = s21_less(only_int_value_1, only_int_value_2);
      else
        *flag_less = 0;
    }
  } else {
    if (s21_check_decimal_value_zero(value_1))
      *flag_less = 1;
    else {
      s21_set_exponent(&value_1, 0);
      s21_set_exponent(&value_2, exponent_value_2 - exponent_value_1);
      only_int_value_1 = (s21_decimal){{0, 0, 0, 0}};
      only_int_value_2 = (s21_decimal){{0, 0, 0, 0}};
      s21_truncate(value_1, &only_int_value_1);
      s21_truncate(value_2, &only_int_value_2);
      if (s21_is_not_equal(only_int_value_1, only_int_value_2))
        *flag_less = s21_less(only_int_value_1, only_int_value_2);
      else
        *flag_less = 1;
    }
  }
}

int s21_check_decimal_value_zero(s21_decimal value) {
  return value.bits[0] == 0 && value.bits[1] == 0 && value.bits[2] == 0;
}

int s21_less(s21_decimal value_1, s21_decimal value_2) {
  int flag_less = 1;
  if ((unsigned)value_1.bits[2] > (unsigned)value_2.bits[2]) {
    flag_less = 0;
  } else if ((unsigned)value_1.bits[2] == (unsigned)value_2.bits[2]) {
    if ((unsigned)value_1.bits[1] > (unsigned)value_2.bits[1]) {
      flag_less = 0;
    } else if ((unsigned)value_1.bits[1] == (unsigned)value_2.bits[1]) {
      if ((unsigned)value_1.bits[0] > (unsigned)value_2.bits[0]) {
        flag_less = 0;
      } else if ((unsigned)value_1.bits[0] == (unsigned)value_2.bits[0]) {
        flag_less = 0;
      }
    }
  }
  return flag_less;
}