#ifndef S21_TESTS_H
#define S21_TESTS_H

#include <check.h>

#include "../s21_decimal.h"

Suite *s21_test_init_dec_from_int(void);
Suite *s21_test_is_equal(void);
Suite *s21_test_is_not_equal(void);
Suite *s21_test_decimal2int(void);
Suite *s21_test_int2decimal(void);
Suite *s21_test_div(void);
Suite *s21_test_decimal2int(void);
Suite *s21_test_init_dec_from_int(void);
Suite *s21_test_float_to_decimal(void);
Suite *s21_test_decimal_to_float(void);
Suite *s21_test_floor(void);
Suite *s21_test_truncate(void);
Suite *s21_test_round(void);
Suite *s21_test_negate(void);

// generation tests
Suite *s21_test_is_less(void);
Suite *s21_test_add(void);
Suite *s21_test_sub(void);
Suite *s21_test_is_equal(void);
Suite *s21_test_mul(void);
Suite *s21_test_is_less_or_equal(void);
Suite *s21_test_is_greater(void);
Suite *s21_test_is_greater_or_equal(void);
Suite *s21_test_is_not_equal(void);

int s21_same_sign_or_zero(int a, int b);

#endif