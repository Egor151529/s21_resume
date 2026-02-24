#include "../s21_decimal.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int error = 0;
  int scale = s21_get_scale(src);
  int neg = s21_get_sign(src);
  if (!dst) {
    error = 1;
  }
  if (scale > 28) {
    error = 1;
  }

  double result = 0.0;
  for (int i = 0; i < 96 && !error; i++) {
    int idx = i / 32;  // src.bits[idx]
    int pos = i % 32;

    if ((src.bits[idx] >> pos) & 1) {
      result += pow(2, i);
    }
  }

  if (scale > 0 && !error) {
    result /= pow(10, scale);
  }
  if (neg && !error) {
    result = -result;
  }
  if (!error) {
    *dst = (float)result;
  }

  return error;
}