#include "../common/common.h"
#include "s21_tests.h"

START_TEST(test_negate_positive_integer) {
  s21_decimal value = {0}, result = {0};
  s21_init_decimal_from_string(&value, "123");
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 123);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
}
END_TEST

START_TEST(test_negate_negative_integer) {
  s21_decimal value = {0}, result = {0};
  s21_init_decimal_from_string(&value, "-123");
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 123);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
  ck_assert_int_eq(s21_get_scale(result), 0);
}
END_TEST

START_TEST(test_negate_positive_decimal) {
  s21_decimal value = {0}, result = {0};
  s21_init_decimal_from_string(&value, "123.45");
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 12345);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
  ck_assert_int_eq(s21_get_scale(result), 2);
}
END_TEST

START_TEST(test_negate_negative_decimal) {
  s21_decimal value = {0}, result = {0};
  s21_init_decimal_from_string(&value, "-123.45");
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 12345);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
  ck_assert_int_eq(s21_get_scale(result), 2);
}
END_TEST

START_TEST(test_negate_zero) {
  s21_decimal value = {0}, result = {0};
  s21_init_decimal_from_string(&value, "0");
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 0);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_scale(result), 0);
}
END_TEST

START_TEST(test_negate_max_positive) {
  s21_decimal value = {0}, result = {0};
  value.bits[0] = 0x7FFFFFFF;
  value.bits[1] = 0x7FFFFFFF;
  value.bits[2] = 0x7FFFFFFF;
  s21_set_sign(&value, 0);
  s21_set_scale(&value, 0);
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 0x7FFFFFFF);
  ck_assert_uint_eq(result.bits[1], 0x7FFFFFFF);
  ck_assert_uint_eq(result.bits[2], 0x7FFFFFFF);
  ck_assert_int_eq(s21_get_sign(result), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
}
END_TEST

START_TEST(test_negate_min_negative) {
  s21_decimal value = {0}, result = {0};
  value.bits[0] = 0x7FFFFFFF;
  value.bits[1] = 0x7FFFFFFF;
  value.bits[2] = 0x7FFFFFFF;
  s21_set_sign(&value, 1);
  s21_set_scale(&value, 0);
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 0x7FFFFFFF);
  ck_assert_uint_eq(result.bits[1], 0x7FFFFFFF);
  ck_assert_uint_eq(result.bits[2], 0x7FFFFFFF);
  ck_assert_int_eq(s21_get_sign(result), 0);
  ck_assert_int_eq(s21_get_scale(result), 0);
}
END_TEST

START_TEST(test_negate_small_positive_decimal) {
  s21_decimal value = {0}, result = {0};
  s21_init_decimal_from_string(&value, "0.0001");
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 1);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
  ck_assert_int_eq(s21_get_scale(result), 4);
}
END_TEST

START_TEST(test_negate_small_negative_decimal) {
  s21_decimal value = {0}, result = {0};
  s21_init_decimal_from_string(&value, "-0.0001");
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 1);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
  ck_assert_int_eq(s21_get_scale(result), 4);
}
END_TEST

START_TEST(test_negate_max_scale_positive) {
  s21_decimal value = {0}, result = {0};
  value.bits[0] = 1;
  value.bits[1] = 0;
  value.bits[2] = 0;
  s21_set_sign(&value, 0);
  s21_set_scale(&value, 28);
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 1);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
  ck_assert_int_eq(s21_get_scale(result), 28);
}
END_TEST

START_TEST(test_negate_max_scale_negative) {
  s21_decimal value = {0}, result = {0};
  value.bits[0] = 1;
  value.bits[1] = 0;
  value.bits[2] = 0;
  s21_set_sign(&value, 1);
  s21_set_scale(&value, 28);
  int status = s21_negate(value, &result);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq(result.bits[0], 1);
  ck_assert_uint_eq(result.bits[1], 0);
  ck_assert_uint_eq(result.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
  ck_assert_int_eq(s21_get_scale(result), 28);
}
END_TEST

START_TEST(test_negate_null) {
  s21_decimal value = {0};
  value.bits[0] = 1;
  value.bits[1] = 0;
  value.bits[2] = 0;
  s21_set_sign(&value, 1);
  s21_set_scale(&value, 28);
  int status = s21_negate(value, NULL);
  ck_assert_int_eq(status, 1);
}
END_TEST

Suite *s21_test_negate(void) {
  Suite *s = suite_create("s21_test_negate");
  TCase *tc_negate = tcase_create("test_negate");

  tcase_add_test(tc_negate, test_negate_positive_integer);
  tcase_add_test(tc_negate, test_negate_negative_integer);
  tcase_add_test(tc_negate, test_negate_positive_decimal);
  tcase_add_test(tc_negate, test_negate_negative_decimal);
  tcase_add_test(tc_negate, test_negate_zero);
  tcase_add_test(tc_negate, test_negate_max_positive);
  tcase_add_test(tc_negate, test_negate_min_negative);
  tcase_add_test(tc_negate, test_negate_small_positive_decimal);
  tcase_add_test(tc_negate, test_negate_small_negative_decimal);
  tcase_add_test(tc_negate, test_negate_max_scale_positive);
  tcase_add_test(tc_negate, test_negate_max_scale_negative);
  tcase_add_test(tc_negate, test_negate_null);

  suite_add_tcase(s, tc_negate);

  return s;
}