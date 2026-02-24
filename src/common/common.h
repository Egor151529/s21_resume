#ifndef BIT_OPERATION_H
#define BIT_OPERATION_H

#include <string.h>

#include "../s21_decimal.h"

int s21_get_sign(s21_decimal value);
void s21_set_sign(s21_decimal *value, int sign);
int s21_get_exponent(s21_decimal value);
void s21_set_exponent(s21_decimal *value, int exponent);
int s21_is_correct_decimal(s21_decimal value);
int s21_add_mantissas(s21_decimal value_1, s21_decimal value_2,
                      s21_decimal *result);
int s21_multiply_by_10(s21_decimal *d);
int s21_is_mantissa_greater_or_equal(s21_decimal d1, s21_decimal d2);
void s21_sub_mantissas(s21_decimal d1, s21_decimal d2, s21_decimal *res);
void s21_div_mantissas(s21_decimal dividend, s21_decimal divisor,
                       s21_decimal *quotient, s21_decimal *remainder);
int s21_get_bit(s21_decimal d, int pos);
void s21_set_bit(s21_decimal *d, int pos, int bit);
int s21_get_scale(s21_decimal d);
void s21_set_scale(s21_decimal *d, int scale);
int s21_is_zero(s21_decimal d);
int s21_shift_left(s21_decimal *d, int shift);
void s21_divide_by_10_with_bank_rounding(s21_decimal *d);

void s21_int_to_hex_str(unsigned int value, char *hex_str);
void s21_decimal_to_string(s21_decimal value, char *decimal_string);
void s21_remove_leading_zeros(char *str);

#endif