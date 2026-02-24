#include "s21_tests.h"

START_TEST(test_float_zero) {
  s21_decimal dec;
  float f = 0.0f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "0");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_positive_integer) {
  s21_decimal dec;
  float f = 1.0f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "1");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_negative_integer) {
  s21_decimal dec;
  float f = -1.0f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "-1");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_positive_fraction) {
  s21_decimal dec;
  float f = 123.45f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "123.45");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_negative_fraction) {
  s21_decimal dec;
  float f = -123.45f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "-123.45");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_positive_small_fraction) {
  s21_decimal dec;
  float f = 0.001f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "0.001");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_negative_small_fraction) {
  s21_decimal dec;
  float f = -0.001f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "-0.001");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_rounding_seven_digits) {
  s21_decimal dec;
  float f = 1.23456789f;  // More than 7 significant digits
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec,
                               "1.234568");  // Rounded to 7 significant digits
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_rounding_large_integer) {
  s21_decimal dec;
  float f = 123456789.0f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "123456800");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_rounding_large_integer_negative) {
  s21_decimal dec;
  float f = -123456789.0f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "-123456800");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_rounding_small_fraction) {
  s21_decimal dec;
  float f = 0.000000123456789f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 0);
  s21_decimal expected_dec;
  s21_init_decimal_from_string(&expected_dec, "0.0000001234568");
  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_small_fraction_error) {
  s21_decimal dec;
  float f = 0.0000000000000000000000000000000123456789f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

START_TEST(test_float_rounding_half_up_1) {
  s21_decimal dec;

  float f = 1.2345675f;

  int return_value = s21_from_float_to_decimal(f, &dec);

  ck_assert_int_eq(return_value, 0);

  s21_decimal expected_dec;

  s21_init_decimal_from_string(&expected_dec, "1.234568");

  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_rounding_half_up_2) {
  s21_decimal dec;

  float f = 1.2345674f;

  int return_value = s21_from_float_to_decimal(f, &dec);

  ck_assert_int_eq(return_value, 0);

  s21_decimal expected_dec;

  s21_init_decimal_from_string(&expected_dec, "1.234567");

  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_rounding_half_up_3) {
  s21_decimal dec;

  float f = 1.2345685f;

  int return_value = s21_from_float_to_decimal(f, &dec);

  ck_assert_int_eq(return_value, 0);

  s21_decimal expected_dec;

  s21_init_decimal_from_string(&expected_dec, "1.234568");

  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_rounding_half_up_4) {
  s21_decimal dec;

  float f = 1200000000.0f;

  int return_value = s21_from_float_to_decimal(f, &dec);

  ck_assert_int_eq(return_value, 0);

  s21_decimal expected_dec;

  s21_init_decimal_from_string(&expected_dec, "1200000000");

  ck_assert_int_eq(s21_is_equal(dec, expected_dec), 1);
}
END_TEST

START_TEST(test_float_large_positive_error) {
  s21_decimal dec;
  float f = 1e30f;  // Larger than max decimal
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

START_TEST(test_float_large_negative_error) {
  s21_decimal dec;
  float f = -1e30f;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

START_TEST(test_float_positive_infinity_error) {
  s21_decimal dec;
  float f = INFINITY;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

START_TEST(test_float_negative_infinity_error) {
  s21_decimal dec;
  float f = -INFINITY;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

START_TEST(test_float_nan_error) {
  s21_decimal dec;
  float f = NAN;
  int return_value = s21_from_float_to_decimal(f, &dec);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

START_TEST(test_float_null_dst) {
  float f = 1.0f;
  int return_value = s21_from_float_to_decimal(f, NULL);
  ck_assert_int_eq(return_value, 1);
}
END_TEST

Suite *s21_test_float_to_decimal(void) {
  Suite *s = suite_create("s21_test_float_to_decimal");

  TCase *tc_float_to_dec = tcase_create("float_to_dec");

  tcase_add_test(tc_float_to_dec, test_float_zero);
  tcase_add_test(tc_float_to_dec, test_float_positive_integer);
  tcase_add_test(tc_float_to_dec, test_float_negative_integer);
  tcase_add_test(tc_float_to_dec, test_float_positive_fraction);
  tcase_add_test(tc_float_to_dec, test_float_negative_fraction);
  tcase_add_test(tc_float_to_dec, test_float_positive_small_fraction);
  tcase_add_test(tc_float_to_dec, test_float_negative_small_fraction);
  tcase_add_test(tc_float_to_dec, test_float_rounding_seven_digits);
  tcase_add_test(tc_float_to_dec, test_float_rounding_large_integer);
  tcase_add_test(tc_float_to_dec, test_float_rounding_large_integer_negative);
  tcase_add_test(tc_float_to_dec, test_float_rounding_small_fraction);
  tcase_add_test(tc_float_to_dec, test_float_small_fraction_error);
  tcase_add_test(tc_float_to_dec, test_float_rounding_half_up_1);
  tcase_add_test(tc_float_to_dec, test_float_rounding_half_up_2);
  tcase_add_test(tc_float_to_dec, test_float_rounding_half_up_3);
  tcase_add_test(tc_float_to_dec, test_float_rounding_half_up_4);
  tcase_add_test(tc_float_to_dec, test_float_large_positive_error);
  tcase_add_test(tc_float_to_dec, test_float_large_negative_error);
  tcase_add_test(tc_float_to_dec, test_float_positive_infinity_error);
  tcase_add_test(tc_float_to_dec, test_float_negative_infinity_error);
  tcase_add_test(tc_float_to_dec, test_float_nan_error);
  tcase_add_test(tc_float_to_dec, test_float_null_dst);

  suite_add_tcase(s, tc_float_to_dec);

  return s;
}