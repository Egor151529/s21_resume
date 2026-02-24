#include "common.h"

void s21_int_to_hex_str(unsigned int value, char *hex_str) {
  sprintf(hex_str, "%08X", value);
}

void s21_decimal_to_string(s21_decimal value, char *decimal_string) {
  char hex_str[8];
  for (int i = 2; i >= 0; i--) {
    s21_int_to_hex_str(value.bits[i], hex_str);
    strcat(decimal_string, hex_str);
  }
}

void s21_remove_leading_zeros(char *str) {
  int len = strlen(str);
  int first_non_zero = 0;

  while (first_non_zero < len - 1 && str[first_non_zero] == '0') {
    first_non_zero++;
  }

  if (first_non_zero > 0) {
    int new_len = len - first_non_zero;
    for (int i = 0; i <= new_len; i++) {
      str[i] = str[i + first_non_zero];
    }
  }
}