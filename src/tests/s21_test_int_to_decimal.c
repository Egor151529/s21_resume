#include "s21_tests.h"

START_TEST(test_int2decimal_basic) {
  s21_decimal dec, ans;
  int val = 396548;
  char *val_s = "396548";
  s21_init_decimal_from_string(&ans, val_s);
  int res = s21_from_int_to_decimal(val, &dec);
  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
  ck_assert_int_eq(res, 0);
}
END_TEST

START_TEST(test_int2decimal_basic_negative) {
  s21_decimal dec, ans;
  int val = -396548;
  char *val_s = "-396548";
  s21_init_decimal_from_string(&ans, val_s);
  int res = s21_from_int_to_decimal(val, &dec);
  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
  ck_assert_int_eq(res, 0);
}
END_TEST

START_TEST(test_int2decimal_basic_null) {
  s21_decimal *dec = NULL;
  int val = -396548;
  int res = s21_from_int_to_decimal(val, dec);
  int res2 = s21_from_int_to_decimal(val, NULL);
  ck_assert_int_eq(res, 1);
  ck_assert_int_eq(res2, 1);
}
END_TEST

Suite *s21_test_int2decimal(void) {
  Suite *s = suite_create("s21_test_int2decimal");

  TCase *tc_i2d = tcase_create("int2decimal");
  tcase_add_test(tc_i2d, test_int2decimal_basic);
  tcase_add_test(tc_i2d, test_int2decimal_basic_negative);
  tcase_add_test(tc_i2d, test_int2decimal_basic_null);

  suite_add_tcase(s, tc_i2d);

  return s;
}