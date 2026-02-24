#include "s21_tests.h"

START_TEST(test_decimal2int_basic) {
  s21_decimal dec;
  int ans, test, result;
  s21_init_decimal_from_string(&dec, "5000");
  ans = 5000;
  result = s21_from_decimal_to_int(dec, &test);

  ck_assert_int_eq(ans, test);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(test_decimal2int_basic_negative) {
  s21_decimal dec;
  int ans, test, result;
  s21_init_decimal_from_string(&dec, "-5000");
  ans = -5000;
  result = s21_from_decimal_to_int(dec, &test);

  ck_assert_int_eq(ans, test);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(test_decimal2int_overflow) {
  s21_decimal dec;
  int test, result;
  s21_init_decimal_from_string(&dec, "500000000000000");
  // ans = INT32_MAX;
  result = s21_from_decimal_to_int(dec, &test);
  // См. функцию
  // ck_assert_int_eq(ans, test);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(test_decimal2int_overflow2) {
  s21_decimal dec;
  int test, result;
  s21_init_decimal_from_string(&dec, "2147483649");
  // ans = INT32_MAX;
  result = s21_from_decimal_to_int(dec, &test);
  // См. функцию
  // ck_assert_int_eq(ans, test);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(test_decimal2int_max) {
  s21_decimal dec;
  int ans, test, result;
  s21_init_decimal_from_string(&dec, "2147483647");

  ans = INT32_MAX;

  result = s21_from_decimal_to_int(dec, &test);
  ck_assert_int_eq(ans, test);
  ck_assert_int_eq(result, 0);
}
END_TEST

Suite *s21_test_decimal2int(void) {
  Suite *s = suite_create("s21_test_decimal2int");

  TCase *tc_decimal2int = tcase_create("decimal2int");
  tcase_add_test(tc_decimal2int, test_decimal2int_basic);
  tcase_add_test(tc_decimal2int, test_decimal2int_basic_negative);
  tcase_add_test(tc_decimal2int, test_decimal2int_overflow);
  tcase_add_test(tc_decimal2int, test_decimal2int_overflow2);
  tcase_add_test(tc_decimal2int, test_decimal2int_max);

  suite_add_tcase(s, tc_decimal2int);

  return s;
}
