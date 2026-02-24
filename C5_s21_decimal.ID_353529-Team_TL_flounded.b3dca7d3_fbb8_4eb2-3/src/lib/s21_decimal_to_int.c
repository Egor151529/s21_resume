#include "../s21_decimal.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int error = 0;
  // int negative = (src.bits[3] >> 31) & 1;
  int negative = s21_get_sign(src);

  // Считаем переполнение за ошибку
  if (dst == NULL || src.bits[1] != 0 || src.bits[2] != 0) {
    error = 1;
  }

  if (!error) {
    // Биты [16-23) = 8 бит
    // 2^8 = 256
    // Делаем маску &, чтобы выделить только нужные 8 бит
    // int scale = (src.bits[3] >> 16) & 255;
    int scale = s21_get_scale(src);
    long long tmp = (unsigned int)src.bits[0] / pow(10, scale);
    if (tmp >= 2147483648LL) {
      *dst = -1;
      error = 1;  // Overflow
    } else {
      tmp = (negative) ? -tmp : tmp;
      *dst = (int)tmp;
    }
  }

  return error;
}