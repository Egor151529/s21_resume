#include "../s21_decimal.h"

void s21_init_decimal_from_string(s21_decimal *dec, char *str) {
  char *p = str;
  int sign = 0;  // positive
  for (int i = 0; i < 4; i++) dec->bits[i] = 0;
  if (*p == '-') {
    sign = 1;
    p++;
  } else if (*p == '+')
    p++;
  while (*p == '0') p++;
  const char *dot = strchr(p, '.');
  int scale = 0;
  if (dot) scale = strlen(dot + 1);
  if (scale > 28) scale = 28;
  int len = strlen(p);
  char digit_buf[30];
  long unsigned int j = 0;
  for (int i = 0; i < len && j < sizeof(digit_buf) - 1; i++) {
    if (p[i] == '.') continue;
    digit_buf[j++] = p[i];
  }
  digit_buf[j] = '\0';
  S21_UINT32 low = 0, mid = 0, high = 0;
  for (long unsigned int i = 0; i < j; i++) {
    int digit = digit_buf[i] - '0';
    S21_UINT64 tmp_low = (S21_UINT64)low * 10 + digit;
    S21_UINT64 tmp_mid = (S21_UINT64)mid * 10;
    S21_UINT64 tmp_high = (S21_UINT64)high * 10;
    if (tmp_low >= UINT32_MAX + 1ULL) {
      tmp_mid += tmp_low >> 32;
      tmp_low &= 0xFFFFFFFF;
    }
    if (tmp_mid >= UINT32_MAX + 1ULL) {
      tmp_high += tmp_mid >> 32;
      tmp_mid &= 0xFFFFFFFF;
    }
    low = (S21_UINT32)tmp_low;
    mid = (S21_UINT32)tmp_mid;
    high = (S21_UINT32)tmp_high;
  }

  dec->bits[0] = low;
  dec->bits[1] = mid;
  dec->bits[2] = high;
  dec->bits[3] = (sign << 31) | (scale << 16);
}