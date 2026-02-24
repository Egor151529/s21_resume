#include <math.h>

#include "../s21_decimal.h"

static void s21_parse_exponent(char *src, char *dst, char *exp_pos) {
  int scale = atoi(exp_pos + 1);  // +10 or -7
  char *p = src;
  char only_nums[8];
  // char result_str[50];
  (dst)[0] = '\0';
  int k = 0;
  int is_neg = 0;
  if (*p == '-') {
    p++;
    is_neg = 1;
  }
  while (*p != *exp_pos) {
    if (*p != '.') {
      only_nums[k] = *p;
      k++;
    }
    p++;
  }
  only_nums[k] = '\0';
  if (is_neg) {
    strcat((dst), "-");
  }
  if (scale > 0) {
    strcat((dst), only_nums);
    for (int i = 0; i < scale - (int)strlen(only_nums) + 1; i++) {
      strcat((dst), "0");
    }

  } else {
    scale = -scale;
    strcat((dst), "0.");
    for (int i = 0; i < scale - 1; i++) {
      strcat((dst), "0");
    }
    strcat((dst), only_nums);
  }
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int error = 0;
  char str[50];
  const double max_val = 79228162514264337593543950335.0;
  if (!dst) {
    error = 1;
  } else {
    // Initialize decimal to 0 in case of error
    for (int i = 0; i < 4; i++) {
      dst->bits[i] = 0;
    }

    if (isinf(src) || isnan(src)) {
      error = 1;  // Too large or infinity/NaN
    } else if (fabs(src) != 0 && fabs(src) < 1e-28) {
      error = 1;                       // Too small
    } else if (fabs(src) > max_val) {  // Max decimal value
      error = 1;                       // Too large
    }
  }

  if (!error) {
    // Кабуто костыли с этим sprintf
    // Мб перепишу
    sprintf(str, "%.7g", src);
    // 1.231231e+10 -> 123 123 100 00
    // 1.234568e-07 -> 0.000 000 123 456 8
    char *exp_pos = strchr(str, 'e');
    if (exp_pos) {
      char result_str[50];
      s21_parse_exponent(str, result_str, exp_pos);
      s21_init_decimal_from_string(dst, result_str);
    } else {
      s21_init_decimal_from_string(dst, str);
    }
  }

  return error;
}
