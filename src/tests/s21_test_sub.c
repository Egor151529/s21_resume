#include "s21_tests.h"

START_TEST(test_1) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_2) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_3) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1720333499");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2574633796);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_4) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_5) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_6) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2458391065");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1836576230);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_7) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_8) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_9) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3004562116");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_10) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_11) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_12) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1220634125");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_13) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3839917187");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_14) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_15) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_16) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4089101339");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_17) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_18) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_19) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1353705517");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2941261778);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_20) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_21) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_22) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1983062181");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2311905114);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_23) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_24) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_25) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2526540042");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1768427253);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_26) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_27) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_28) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3354861656");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 940105639);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_29) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_30) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_31) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "982433348");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3312533947);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_32) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_33) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_34) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "39941569");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 39941568);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_35) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_36) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_37) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3488093598");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3488093597);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_38) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "779397769");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 779397768);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_39) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_40) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_41) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "522204166");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 522204165);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_42) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_43) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_44) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3739060299");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3739060298);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_45) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_46) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_47) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4237162780");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4237162779);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_48) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "26053677");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 26053676);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_49) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_50) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_51) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1043949010");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1043949009);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_52) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_53) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_54) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "181731589");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 181731589);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_55) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_56) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_57) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2169249800");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2169249800);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_58) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_59) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_60) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1161675617");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1161675617);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_61) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2318899166");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2318899166);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_62) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_63) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_64) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "72574318");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4222392977);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_65) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_66) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_67) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2229842742");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_68) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_69) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_70) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1510941208");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_71) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_72) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_73) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "73016687");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_74) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_75) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_76) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4257814957");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 37152338);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_77) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_78) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_79) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3331491698");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 963475597);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_80) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_81) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_82) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2088013012");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2206954283);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_83) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_84) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_85) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1032303246");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1032303245);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_86) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_87) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_88) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2932149764");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2932149763);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_89) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_90) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_91) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2038344367");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2038344366);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_92) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_93) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_94) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3512660969");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3512660968);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_95) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_96) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_97) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1348979465");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1348979464);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_98) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_99) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
}
END_TEST

START_TEST(test_100) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1947209883");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1947209882);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_101) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_102) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_103) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4280530050");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4280530050);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_104) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_105) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_106) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "667183912");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 667183912);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_107) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_108) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_109) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2145612215");
  int status = s21_sub(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2145612215);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_110) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "15.5");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_sub(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 150);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 1);
}
END_TEST

START_TEST(test_111) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-15.5");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_sub(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  int sign = s21_get_sign(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 160);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 1);
  ck_assert_int_eq(sign, 1);
}
END_TEST

START_TEST(test_112) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-15.56");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_sub(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  int sign = s21_get_sign(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1606);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 2);
  ck_assert_int_eq(sign, 1);
}
END_TEST

START_TEST(test_113) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-15.5");
  s21_init_decimal_from_string(&dec2, "0.05");
  int status = s21_sub(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  int sign = s21_get_sign(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1555);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 2);
  ck_assert_int_eq(sign, 1);
}
END_TEST

START_TEST(test_114) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0.6");
  int status = s21_sub(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  int sign = s21_get_sign(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], (unsigned)(0xFFFFFFFF - 1));
  ck_assert_uint_eq((unsigned)dec3.bits[1], (unsigned)0xFFFFFFFF);
  ck_assert_uint_eq((unsigned)dec3.bits[2], (unsigned)0xFFFFFFFF);
  ck_assert_int_eq(scale, 0);
  ck_assert_int_eq(sign, 0);
}
END_TEST

START_TEST(test_115) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0.6");
  s21_init_decimal_from_string(&dec2, "79228162514264337593543950335");
  int status = s21_sub(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  int sign = s21_get_sign(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], (unsigned)(0xFFFFFFFF - 1));
  ck_assert_uint_eq((unsigned)dec3.bits[1], (unsigned)0xFFFFFFFF);
  ck_assert_uint_eq((unsigned)dec3.bits[2], (unsigned)0xFFFFFFFF);
  ck_assert_int_eq(scale, 0);
  ck_assert_int_eq(sign, 1);
}
END_TEST

Suite *s21_test_sub(void) {
  Suite *s = suite_create("s21_test_sub");

  TCase *tc_is_sub = tcase_create("is_sub");
  tcase_add_test(tc_is_sub, test_1);
  tcase_add_test(tc_is_sub, test_2);
  tcase_add_test(tc_is_sub, test_3);
  tcase_add_test(tc_is_sub, test_4);
  tcase_add_test(tc_is_sub, test_5);
  tcase_add_test(tc_is_sub, test_6);
  tcase_add_test(tc_is_sub, test_7);
  tcase_add_test(tc_is_sub, test_8);
  tcase_add_test(tc_is_sub, test_9);
  tcase_add_test(tc_is_sub, test_10);
  tcase_add_test(tc_is_sub, test_11);
  tcase_add_test(tc_is_sub, test_12);
  tcase_add_test(tc_is_sub, test_13);
  tcase_add_test(tc_is_sub, test_14);
  tcase_add_test(tc_is_sub, test_15);
  tcase_add_test(tc_is_sub, test_16);
  tcase_add_test(tc_is_sub, test_17);
  tcase_add_test(tc_is_sub, test_18);
  tcase_add_test(tc_is_sub, test_19);
  tcase_add_test(tc_is_sub, test_20);
  tcase_add_test(tc_is_sub, test_21);
  tcase_add_test(tc_is_sub, test_22);
  tcase_add_test(tc_is_sub, test_23);
  tcase_add_test(tc_is_sub, test_24);
  tcase_add_test(tc_is_sub, test_25);
  tcase_add_test(tc_is_sub, test_26);
  tcase_add_test(tc_is_sub, test_27);
  tcase_add_test(tc_is_sub, test_28);
  tcase_add_test(tc_is_sub, test_29);
  tcase_add_test(tc_is_sub, test_30);
  tcase_add_test(tc_is_sub, test_31);
  tcase_add_test(tc_is_sub, test_32);
  tcase_add_test(tc_is_sub, test_33);
  tcase_add_test(tc_is_sub, test_34);
  tcase_add_test(tc_is_sub, test_35);
  tcase_add_test(tc_is_sub, test_36);
  tcase_add_test(tc_is_sub, test_37);
  tcase_add_test(tc_is_sub, test_38);
  tcase_add_test(tc_is_sub, test_39);
  tcase_add_test(tc_is_sub, test_40);
  tcase_add_test(tc_is_sub, test_41);
  tcase_add_test(tc_is_sub, test_42);
  tcase_add_test(tc_is_sub, test_43);
  tcase_add_test(tc_is_sub, test_44);
  tcase_add_test(tc_is_sub, test_45);
  tcase_add_test(tc_is_sub, test_46);
  tcase_add_test(tc_is_sub, test_47);
  tcase_add_test(tc_is_sub, test_48);
  tcase_add_test(tc_is_sub, test_49);
  tcase_add_test(tc_is_sub, test_50);
  tcase_add_test(tc_is_sub, test_51);
  tcase_add_test(tc_is_sub, test_52);
  tcase_add_test(tc_is_sub, test_53);
  tcase_add_test(tc_is_sub, test_54);
  tcase_add_test(tc_is_sub, test_55);
  tcase_add_test(tc_is_sub, test_56);
  tcase_add_test(tc_is_sub, test_57);
  tcase_add_test(tc_is_sub, test_58);
  tcase_add_test(tc_is_sub, test_59);
  tcase_add_test(tc_is_sub, test_60);
  tcase_add_test(tc_is_sub, test_61);
  tcase_add_test(tc_is_sub, test_62);
  tcase_add_test(tc_is_sub, test_63);
  tcase_add_test(tc_is_sub, test_64);
  tcase_add_test(tc_is_sub, test_65);
  tcase_add_test(tc_is_sub, test_66);
  tcase_add_test(tc_is_sub, test_67);
  tcase_add_test(tc_is_sub, test_68);
  tcase_add_test(tc_is_sub, test_69);
  tcase_add_test(tc_is_sub, test_70);
  tcase_add_test(tc_is_sub, test_71);
  tcase_add_test(tc_is_sub, test_72);
  tcase_add_test(tc_is_sub, test_73);
  tcase_add_test(tc_is_sub, test_74);
  tcase_add_test(tc_is_sub, test_75);
  tcase_add_test(tc_is_sub, test_76);
  tcase_add_test(tc_is_sub, test_77);
  tcase_add_test(tc_is_sub, test_78);
  tcase_add_test(tc_is_sub, test_79);
  tcase_add_test(tc_is_sub, test_80);
  tcase_add_test(tc_is_sub, test_81);
  tcase_add_test(tc_is_sub, test_82);
  tcase_add_test(tc_is_sub, test_83);
  tcase_add_test(tc_is_sub, test_84);
  tcase_add_test(tc_is_sub, test_85);
  tcase_add_test(tc_is_sub, test_86);
  tcase_add_test(tc_is_sub, test_87);
  tcase_add_test(tc_is_sub, test_88);
  tcase_add_test(tc_is_sub, test_89);
  tcase_add_test(tc_is_sub, test_90);
  tcase_add_test(tc_is_sub, test_91);
  tcase_add_test(tc_is_sub, test_92);
  tcase_add_test(tc_is_sub, test_93);
  tcase_add_test(tc_is_sub, test_94);
  tcase_add_test(tc_is_sub, test_95);
  tcase_add_test(tc_is_sub, test_96);
  tcase_add_test(tc_is_sub, test_97);
  tcase_add_test(tc_is_sub, test_98);
  tcase_add_test(tc_is_sub, test_99);
  tcase_add_test(tc_is_sub, test_100);
  tcase_add_test(tc_is_sub, test_101);
  tcase_add_test(tc_is_sub, test_102);
  tcase_add_test(tc_is_sub, test_103);
  tcase_add_test(tc_is_sub, test_104);
  tcase_add_test(tc_is_sub, test_105);
  tcase_add_test(tc_is_sub, test_106);
  tcase_add_test(tc_is_sub, test_107);
  tcase_add_test(tc_is_sub, test_108);
  tcase_add_test(tc_is_sub, test_109);
  tcase_add_test(tc_is_sub, test_110);
  tcase_add_test(tc_is_sub, test_111);
  tcase_add_test(tc_is_sub, test_112);
  tcase_add_test(tc_is_sub, test_113);
  tcase_add_test(tc_is_sub, test_114);
  tcase_add_test(tc_is_sub, test_115);

  suite_add_tcase(s, tc_is_sub);

  return s;
}
