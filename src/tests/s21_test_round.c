#include "s21_tests.h"

START_TEST(s21_round_test_positive_fraction_less_half) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "1.23");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "1");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_positive_fraction_half) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "1.25");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "1");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_positive_fraction_half_up) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "1.5");

  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "2");  // 2
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_positive_fraction_greater_half) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "1.75");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "2");  // 2
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_negative_fraction_less_half) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-1.23");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "-1");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_round_test_negative_fraction_half) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-1.25");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "-1");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_round_test_negative_fraction_half_down) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-1.5");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "-2");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_round_test_negative_fraction_greater_half) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-1.75");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "-2");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_round_test_positive_integer) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "5");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "5");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_negative_integer) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-10");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "-10");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_round_test_zero) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "0");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "0");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_large_positive_fraction) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "792281625142643375935439.5001");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "792281625142643375935440");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_large_positive_fraction_overflow) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "792281625142643375935439.5000000001");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "792281625142643375935440");
  ck_assert_int_eq(return_code, 1);
  ck_assert_int_eq(s21_is_equal(result, expected), 0);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_large_negative_fraction) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-792281625142643375935438.50001");

  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "-792281625142643375935439");

  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_round_test_small_positive_fraction) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "0.0000000000000000000000000001");
  s21_decimal result;
  int return_code = s21_round(value, &result);
  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "0");
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 0);
}
END_TEST

START_TEST(s21_round_test_small_negative_fraction) {
  s21_decimal value;
  s21_init_decimal_from_string(&value, "-0.0000000000000000000000000001");
  s21_decimal result;
  int return_code = s21_round(value, &result);

  // printf("0x%x\n", result.bits[0]);
  // printf("0x%x\n", result.bits[1]);
  // printf("0x%x\n", result.bits[2]);
  // printf("0x%x\n", result.bits[3]);

  s21_decimal expected;
  s21_init_decimal_from_string(&expected, "0");
  s21_set_sign(&expected, 1);
  ck_assert_int_eq(return_code, 0);
  ck_assert_int_eq(s21_is_equal(result, expected), 1);
  ck_assert_int_eq(s21_get_scale(result), 0);
  ck_assert_int_eq(s21_get_sign(result), 1);
}
END_TEST

START_TEST(s21_round_test_null_pointer) {
  s21_decimal value = {0};
  int return_code = s21_round(value, NULL);
  ck_assert_int_eq(return_code, 1);
}
END_TEST

Suite *s21_test_round(void) {
  Suite *s = suite_create("s21_test_round");
  TCase *tc_round = tcase_create("test_round");

  tcase_add_test(tc_round, s21_round_test_positive_fraction_less_half);
  tcase_add_test(tc_round, s21_round_test_positive_fraction_half);
  tcase_add_test(tc_round, s21_round_test_positive_fraction_half_up);
  tcase_add_test(tc_round, s21_round_test_positive_fraction_greater_half);
  tcase_add_test(tc_round, s21_round_test_negative_fraction_less_half);
  tcase_add_test(tc_round, s21_round_test_negative_fraction_half);
  tcase_add_test(tc_round, s21_round_test_negative_fraction_half_down);
  tcase_add_test(tc_round, s21_round_test_negative_fraction_greater_half);
  tcase_add_test(tc_round, s21_round_test_positive_integer);
  tcase_add_test(tc_round, s21_round_test_negative_integer);
  tcase_add_test(tc_round, s21_round_test_zero);
  tcase_add_test(tc_round, s21_round_test_large_positive_fraction);
  tcase_add_test(tc_round, s21_round_test_large_negative_fraction);
  tcase_add_test(tc_round, s21_round_test_small_positive_fraction);
  tcase_add_test(tc_round, s21_round_test_small_negative_fraction);
  tcase_add_test(tc_round, s21_round_test_null_pointer);
  tcase_add_test(tc_round, s21_round_test_large_positive_fraction_overflow);
  suite_add_tcase(s, tc_round);

  return s;
}
