#include <string.h>

#include "s21_tests.h"

// Вспомогательный макрос для сравнения двух s21_decimal побитово
#define ck_assert_decimal_eq(d1, d2)            \
  ck_assert_int_eq((d1).bits[0], (d2).bits[0]); \
  ck_assert_int_eq((d1).bits[1], (d2).bits[1]); \
  ck_assert_int_eq((d1).bits[2], (d2).bits[2]); \
  ck_assert_int_eq((d1).bits[3], (d2).bits[3]);

START_TEST(div_simple) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "100");
  s21_init_decimal_from_string(&val2, "10");
  s21_init_decimal_from_string(&expected, "10");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_fractional_result) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "5");
  s21_init_decimal_from_string(&val2, "2");
  s21_init_decimal_from_string(&expected, "2.5");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_by_fraction) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "20");
  s21_init_decimal_from_string(&val2, "0.5");
  s21_init_decimal_from_string(&expected, "40");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_with_negative) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "-100");
  s21_init_decimal_from_string(&val2, "10");
  s21_init_decimal_from_string(&expected, "-10");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_both_negative) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "-100");
  s21_init_decimal_from_string(&val2, "-10");
  s21_init_decimal_from_string(&expected, "10");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_by_zero) {
  s21_decimal val1, val2, res;
  s21_init_decimal_from_string(&val1, "100");
  s21_init_decimal_from_string(&val2, "0");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 3);
}
END_TEST

START_TEST(div_zero_by_number) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "0");
  s21_init_decimal_from_string(&val2, "100");
  s21_init_decimal_from_string(&expected, "0");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_overflow_positive) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&val2, "0.5");
  s21_init_decimal_from_string(&expected, "0");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 1);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_overflow_negative) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&val2, "0.5");
  s21_init_decimal_from_string(&expected, "0");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 2);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_max_precision) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "1");
  s21_init_decimal_from_string(&val2, "3");
  s21_init_decimal_from_string(&expected, "0.3333333333333333333333333333");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_negative_scale_adjust) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "1000");
  s21_init_decimal_from_string(&val2, "0.01");
  s21_init_decimal_from_string(&expected, "100000");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

START_TEST(div_rounding_up) {
  s21_decimal val1, val2, res, expected;
  s21_init_decimal_from_string(&val1, "2");
  s21_init_decimal_from_string(&val2, "3");
  s21_init_decimal_from_string(&expected, "0.6666666666666666666666666667");
  int status = s21_div(val1, val2, &res);
  ck_assert_int_eq(status, 0);
  ck_assert_decimal_eq(res, expected);
}
END_TEST

Suite *s21_test_div(void) {
  Suite *s = suite_create("s21_test_div");
  TCase *tc = tcase_create("div_tests");

  tcase_add_test(tc, div_simple);
  tcase_add_test(tc, div_fractional_result);
  tcase_add_test(tc, div_by_fraction);
  tcase_add_test(tc, div_with_negative);
  tcase_add_test(tc, div_both_negative);
  tcase_add_test(tc, div_by_zero);
  tcase_add_test(tc, div_zero_by_number);
  tcase_add_test(tc, div_overflow_positive);
  tcase_add_test(tc, div_overflow_negative);
  tcase_add_test(tc, div_max_precision);
  tcase_add_test(tc, div_negative_scale_adjust);
  tcase_add_test(tc, div_rounding_up);

  suite_add_tcase(s, tc);
  return s;
}
