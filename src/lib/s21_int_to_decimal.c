#include "../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int negative = 0;
  int error = 0;
  if (dst == NULL) {
    error = 1;
  }
  if (!error) {
    // Remove initial value
    for (int i = 0; i < 4; i++) {
      dst->bits[i] = 0;
    }
    if (src < 0) {
      negative = 1;
      src = -src;
    }
    // dst->bits[3] |= (negative << 31);
    s21_set_sign(dst, negative);
    dst->bits[0] = src;
  }
  return error;
}