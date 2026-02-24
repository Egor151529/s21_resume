#include "../s21_decimal.h"

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  int flag_equally = 1;
  for (int i = 0; i < 4; i++)
    if ((unsigned)value_1.bits[i] != (unsigned)value_2.bits[i])
      flag_equally = 0;

  return flag_equally;
}