#include "../s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  int error = 0;

  if (result == NULL) {
    error = 1;
  } else {
    // XOR
    value.bits[3] ^= (1 << 31);
    *result = value;
  }

  return error;
}