#include "s21_tests.h"

START_TEST(test_decimal_to_float_zero) {
  s21_decimal dec = {0};
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 0.0f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_null) {
  s21_decimal dec = {0};
  int return_code = s21_from_decimal_to_float(dec, NULL);
  ck_assert_int_eq(return_code, 1);
}
END_TEST

START_TEST(test_decimal_to_float_positive_integer) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "123");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 123.0f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_negative_integer) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "-123");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, -123.0f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_positive_decimal) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "123.45");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 123.45f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_negative_decimal) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "-123.45");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, -123.45f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_small_decimal) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "0.001");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 0.001f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_large_decimal) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "1234567.89");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 1234567.89f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_max_scale) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec,
                               "0.0000000000000000000000000001");  // 1e-28
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 1e-28f, 1e-30);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_too_small) {
  s21_decimal dec;
  dec.bits[0] = 1;
  dec.bits[1] = 0;
  dec.bits[2] = 0;
  dec.bits[3] = (29 << 16);  // Scale 29
  float result = 1.0f;       // Idk should it become 0.0f in case of error
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 1.0f, 1e-6);
  ck_assert_int_eq(return_code, 1);  // Error code 1 for too small
}
END_TEST

START_TEST(test_decimal_to_float_too_large) {
  s21_decimal dec;
  dec.bits[0] = 0xFFFFFFFF;
  dec.bits[1] = 0xFFFFFFFF;
  dec.bits[2] = 0xFFFFFFFF;
  dec.bits[3] = 0;
  float result = 0.0f;
  const float mx = 79228162514264337593543950335.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_int_eq(return_code, 0);
  ck_assert_float_eq_tol(mx, result, 1e-6);
}
END_TEST

START_TEST(test_decimal_to_float_rounding_up) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "1.2345678");  // Should round to 1.234568
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 1.234568f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_rounding_down) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "1.2345671");  // Should round to 1.234567
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 1.234567f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_rounding_half_up) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "1.2345675");  // Should round to 1.234568
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 1.234568f, 1e-6);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_max_value) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "79228162514264337593543950335");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, 7.922816251426434e+28f, 1e20);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

START_TEST(test_decimal_to_float_min_value) {
  s21_decimal dec;
  s21_init_decimal_from_string(&dec, "-79228162514264337593543950335");
  float result = 0.0f;
  int return_code = s21_from_decimal_to_float(dec, &result);
  ck_assert_float_eq_tol(result, -7.922816251426434e+28f, 1e20);
  ck_assert_int_eq(return_code, 0);
}
END_TEST

Suite *s21_test_decimal_to_float(void) {
  Suite *s = suite_create("s21_test_decimal_to_float");

  TCase *tc_dec_to_float = tcase_create("decimal_to_float");

  tcase_add_test(tc_dec_to_float, test_decimal_to_float_zero);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_null);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_positive_integer);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_negative_integer);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_positive_decimal);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_negative_decimal);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_small_decimal);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_large_decimal);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_max_scale);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_too_small);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_too_large);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_rounding_up);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_rounding_down);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_rounding_half_up);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_max_value);
  tcase_add_test(tc_dec_to_float, test_decimal_to_float_min_value);

  suite_add_tcase(s, tc_dec_to_float);

  return s;
}