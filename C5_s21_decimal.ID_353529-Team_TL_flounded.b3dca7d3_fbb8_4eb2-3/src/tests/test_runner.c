#include <string.h>

#include "s21_tests.h"

static Suite *s21_decimal_suite(void) {
  Suite *s = suite_create("s21_decimal");
  return s;
}

int main(void) {
  Suite *s = s21_decimal_suite();
  SRunner *sr = srunner_create(s);
  // Подключение всех Сьютов
  srunner_add_suite(sr, s21_test_init_dec_from_int());
  srunner_add_suite(sr, s21_test_is_equal());
  srunner_add_suite(sr, s21_test_is_not_equal());
  srunner_add_suite(sr, s21_test_decimal2int());
  srunner_add_suite(sr, s21_test_int2decimal());
  srunner_add_suite(sr, s21_test_div());

  // generation
  srunner_add_suite(sr, s21_test_is_less());
  srunner_add_suite(sr, s21_test_float_to_decimal());
  srunner_add_suite(sr, s21_test_decimal_to_float());
  srunner_add_suite(sr, s21_test_floor());
  srunner_add_suite(sr, s21_test_truncate());
  srunner_add_suite(sr, s21_test_round());
  srunner_add_suite(sr, s21_test_negate());
  srunner_add_suite(sr, s21_test_add());
  srunner_add_suite(sr, s21_test_sub());
  srunner_add_suite(sr, s21_test_is_equal());
  srunner_add_suite(sr, s21_test_mul());
  srunner_add_suite(sr, s21_test_is_less_or_equal());
  srunner_add_suite(sr, s21_test_is_greater());
  srunner_add_suite(sr, s21_test_is_greater_or_equal());
  srunner_add_suite(sr, s21_test_is_not_equal());

  srunner_run_all(sr, CK_NORMAL);
  int failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return failed == 0 ? 0 : 1;
}
