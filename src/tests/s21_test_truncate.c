#include "s21_tests.h"

START_TEST(s21_truncate_test_positive_fraction) {
  s21_decimal value;
  value.bits[0] = 123;
  value.bits[1] = 0;
  value.bits[2] = 0;
  value.bits[3] = 0;
  s21_set_scale(&value, 2);  // 1.23
  s21_decimal result;
  s21_truncate(value, &result);
  s21_decimal expected;
  expected.bits[0] = 1;
  expected.bits[1] = 0;
  expected.bits[2] = 0;
  expected.bits[3] = 0;

  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_truncate_test_negative_fraction) {
  s21_decimal value = {{123, 0, 0, 0}};
  s21_set_scale(&value, 2);  // 1.23
  s21_set_sign(&value, 1);   // -1.23
  s21_decimal result;
  s21_truncate(value, &result);
  s21_decimal expected = {{1, 0, 0, 0}};
  s21_set_sign(&expected, 1);  // -1
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_truncate_test_positive_integer) {
  s21_decimal value = {{5, 0, 0, 0}};
  s21_decimal result;
  s21_truncate(value, &result);
  s21_decimal expected = {{5, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_truncate_test_negative_integer) {
  s21_decimal value = {{5, 0, 0, 0}};
  s21_set_sign(&value, 1);  // -5
  s21_decimal result;
  s21_truncate(value, &result);
  s21_decimal expected = {{5, 0, 0, 0}};
  s21_set_sign(&expected, 1);  // -5
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_truncate_test_zero) {
  s21_decimal value = {{0, 0, 0, 0}};
  s21_decimal result;
  s21_truncate(value, &result);
  s21_decimal expected = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_truncate_test_large_positive_fraction) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "792281625142643375935439.50335");
  s21_decimal result;
  s21_truncate(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "792281625142643375935439");

  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_truncate_test_large_negative_fraction) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-792281625142643375935439.50335");
  s21_decimal result;
  s21_truncate(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "-792281625142643375935439");

  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_truncate_test_null_pointer) {
  s21_decimal value = {0};
  int result = s21_truncate(value, NULL);

  ck_assert_int_eq(result, 1);
}
END_TEST

Suite *s21_test_truncate(void) {
  Suite *s = suite_create("s21_test_truncate");
  TCase *tc_foor = tcase_create("test_truncate");

  tcase_add_test(tc_foor, s21_truncate_test_positive_fraction);
  tcase_add_test(tc_foor, s21_truncate_test_negative_fraction);
  tcase_add_test(tc_foor, s21_truncate_test_positive_integer);
  tcase_add_test(tc_foor, s21_truncate_test_negative_integer);
  tcase_add_test(tc_foor, s21_truncate_test_zero);
  tcase_add_test(tc_foor, s21_truncate_test_large_positive_fraction);
  tcase_add_test(tc_foor, s21_truncate_test_large_negative_fraction);
  tcase_add_test(tc_foor, s21_truncate_test_null_pointer);
  suite_add_tcase(s, tc_foor);

  return s;
}
