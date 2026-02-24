#include "s21_tests.h"

START_TEST(test_1) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_2) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_3) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2839401964");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_4) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_5) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_6) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "567392152");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_7) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_8) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_9) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "609552756");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_10) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_11) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_12) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "719011155");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_13) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_14) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_15) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "677854929");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_16) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_17) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_18) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2951291884");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_19) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_20) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_21) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3832035008");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_22) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_23) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_24) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3819978018");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_25) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_26) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_27) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "656453617");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_28) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_29) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_30) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2742256369");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_31) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_32) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_33) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1449435426");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_34) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_35) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_36) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1188019740");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_37) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_38) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_39) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1488689663");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_40) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_41) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_42) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4016867790");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_43) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_44) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_45) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1146161137");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_46) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_47) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_48) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1349817225");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_49) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_50) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_51) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "240423686");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_52) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_53) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_54) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3857598951");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_55) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_56) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_57) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3816930027");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 478037269);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3816930026);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_58) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_59) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_60) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3757862892");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 537104404);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3757862891);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_61) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_62) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_63) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2303448509");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1991518787);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2303448508);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_64) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_65) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_66) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3396321396");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 898645900);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3396321395);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_67) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_68) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_69) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3158192633");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1136774663);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3158192632);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_70) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_71) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_72) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3769253779");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 525713517);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3769253778);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_73) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_74) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_75) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4020977575");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 273989721);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4020977574);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_76) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_77) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_78) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2384605941");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1910361355);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2384605940);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_79) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_80) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_81) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2827981194");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1466986102);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2827981193);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_82) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3704363317");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 590603979);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3704363316);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_83) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_84) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_85) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3796925695");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 498041601);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3796925694);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

// START_TEST(test_86) {
//   s21_decimal dec1, dec2, dec3 = {0};
//   s21_init_decimal_from_string(&dec1, "4294967295");
//   s21_init_decimal_from_string(&dec2, "0.5");
//   int status = s21_mul(dec1, dec2, &dec3);
//   ck_assert_int_eq(status, 0);
//   ck_assert_uint_eq((unsigned)dec3.bits[0], 2147483647);
//   ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
//   ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
//   ck_assert_int_eq(s21_get_sign(dec3), 0);
//   ck_assert_int_eq(s21_get_exponent(dec3), 2);
// }
// END_TEST

// START_TEST(test_87) {
//   s21_decimal dec1, dec2, dec3 = {0};
//   s21_init_decimal_from_string(&dec1, "4294967295");
//   s21_init_decimal_from_string(&dec2, "1.5");
//   int status = s21_mul(dec1, dec2, &dec3);
//   ck_assert_int_eq(status, 0);
//   ck_assert_uint_eq((unsigned)dec3.bits[0], 2147483646);
//   ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
//   ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
//   ck_assert_int_eq(s21_get_sign(dec3), 0);
//   ck_assert_int_eq(s21_get_exponent(dec3), 2);
// }
// END_TEST

START_TEST(test_88) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4062082899");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 232884397);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4062082898);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

// START_TEST(test_89) {
//   s21_decimal dec1, dec2, dec3 = {0};
//   s21_init_decimal_from_string(&dec1, "4294967295");
//   s21_init_decimal_from_string(&dec2, "-0.5");
//   int status = s21_mul(dec1, dec2, &dec3);
//   ck_assert_int_eq(status, 0);
//   ck_assert_uint_eq((unsigned)dec3.bits[0], 2147483647);
//   ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
//   ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
//   ck_assert_int_eq(s21_get_sign(dec3), 1);
//   ck_assert_int_eq(s21_get_exponent(dec3), 2);
// }
// END_TEST

// START_TEST(test_90) {
//   s21_decimal dec1, dec2, dec3 = {0};
//   s21_init_decimal_from_string(&dec1, "4294967295");
//   s21_init_decimal_from_string(&dec2, "0.5");
//   int status = s21_mul(dec1, dec2, &dec3);
//   ck_assert_int_eq(status, 0);
//   ck_assert_uint_eq((unsigned)dec3.bits[0], 2147483647);
//   ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
//   ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
//   ck_assert_int_eq(s21_get_sign(dec3), 0);
//   ck_assert_int_eq(s21_get_exponent(dec3), 2);
// }
// END_TEST

START_TEST(test_91) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "230794280");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4064173016);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 230794279);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_92) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_93) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_94) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1470421615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2824545681);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1470421614);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_95) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_96) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_97) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2230507626");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2064459670);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2230507625);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_98) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_99) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_100) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1843217068");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2451750228);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1843217067);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_101) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_102) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_103) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2841182832");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1453784464);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2841182831);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_104) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_105) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_106) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3448251541");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 846715755);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 3448251540);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_107) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_108) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_109) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2719479375");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1575487921);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2719479374);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_110) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_111) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_112) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1734469005");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2560498291);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1734469004);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_113) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_114) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_115) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "930230074");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3364737222);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 930230073);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_116) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_117) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_118) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2921405082");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1373562214);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 2921405081);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_119) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "37226007");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4257741289);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 37226006);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_120) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_121) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_122) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "866789067");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3428178229);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 866789066);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_123) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_124) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 2);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_125) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3266220057");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1028747239);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 3266220056);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_126) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_127) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_128) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2452995331");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1841971965);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 2452995330);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_129) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_130) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_131) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4243708645");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 51258651);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4243708644);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_132) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_133) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_134) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1374517714");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2920449582);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1374517713);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_135) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_136) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_137) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2830622712");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1464344584);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 2830622711);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_138) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_139) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_140) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1112238255");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3182729041);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1112238254);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_141) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_142) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967293);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_143) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1641774769");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2653192527);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1641774768);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_144) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_145) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_146) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1237869380");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3057097916);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1237869379);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_147) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_148) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_149) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4292381949");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2585347);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4292381948);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_150) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3389960050");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 905007246);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 3389960049);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_151) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_152) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_153) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2054418529");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2240548767);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 2054418528);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_154) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_155) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 2);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_156) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "313914633");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3981052663);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 313914632);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_157) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_158) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_159) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2249555581");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2045411715);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 2249555580);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_160) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_161) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_162) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3628289731");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 666677565);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 3628289730);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_163) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_164) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_165) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3947608489");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 347358807);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 3947608488);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_166) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_167) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_168) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4253610819");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 41356477);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4253610818);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_169) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_170) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_171) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4189324042");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 105643254);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4189324041);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_172) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_173) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967293);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_174) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3054530026");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1240437270);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 3054530025);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_175) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_176) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_177) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1218931842");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3076035454);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1218931841);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_178) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_179) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_180) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3392001610");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 902965686);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 3392001609);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_181) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1125187572");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3169779724);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1125187571);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_182) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_183) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_184) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3844356076");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 450611220);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 3844356075);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_185) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4242749908");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_186) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_187) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_188) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1171518447");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_189) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_190) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_191) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2201372169");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_192) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_193) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_194) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4021746214");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_195) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_196) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_197) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "3415802217");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_198) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_199) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_200) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4176876685");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_201) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_202) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_203) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1363175271");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_204) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_205) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_206) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "3884734893");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_207) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_208) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_209) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2118388256");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_210) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0x80000000);
  ck_assert_int_eq(s21_get_sign(dec3), 0);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

START_TEST(test_211) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-0.5");
  s21_init_decimal_from_string(&dec2, "79228162514264337593543950335");
  int status = s21_mul(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0x80000000);
  ck_assert_int_eq(s21_get_sign(dec3), 1);
  ck_assert_int_eq(s21_get_exponent(dec3), 0);
}
END_TEST

Suite *s21_test_mul(void) {
  Suite *s = suite_create("s21_test_mul");

  TCase *tc_is_mul = tcase_create("is_mul");
  tcase_add_test(tc_is_mul, test_1);
  tcase_add_test(tc_is_mul, test_2);
  tcase_add_test(tc_is_mul, test_3);
  tcase_add_test(tc_is_mul, test_4);
  tcase_add_test(tc_is_mul, test_5);
  tcase_add_test(tc_is_mul, test_6);
  tcase_add_test(tc_is_mul, test_7);
  tcase_add_test(tc_is_mul, test_8);
  tcase_add_test(tc_is_mul, test_9);
  tcase_add_test(tc_is_mul, test_10);
  tcase_add_test(tc_is_mul, test_11);
  tcase_add_test(tc_is_mul, test_12);
  tcase_add_test(tc_is_mul, test_13);
  tcase_add_test(tc_is_mul, test_14);
  tcase_add_test(tc_is_mul, test_15);
  tcase_add_test(tc_is_mul, test_16);
  tcase_add_test(tc_is_mul, test_17);
  tcase_add_test(tc_is_mul, test_18);
  tcase_add_test(tc_is_mul, test_19);
  tcase_add_test(tc_is_mul, test_20);
  tcase_add_test(tc_is_mul, test_21);
  tcase_add_test(tc_is_mul, test_22);
  tcase_add_test(tc_is_mul, test_23);
  tcase_add_test(tc_is_mul, test_24);
  tcase_add_test(tc_is_mul, test_25);
  tcase_add_test(tc_is_mul, test_26);
  tcase_add_test(tc_is_mul, test_27);
  tcase_add_test(tc_is_mul, test_28);
  tcase_add_test(tc_is_mul, test_29);
  tcase_add_test(tc_is_mul, test_30);
  tcase_add_test(tc_is_mul, test_31);
  tcase_add_test(tc_is_mul, test_32);
  tcase_add_test(tc_is_mul, test_33);
  tcase_add_test(tc_is_mul, test_34);
  tcase_add_test(tc_is_mul, test_35);
  tcase_add_test(tc_is_mul, test_36);
  tcase_add_test(tc_is_mul, test_37);
  tcase_add_test(tc_is_mul, test_38);
  tcase_add_test(tc_is_mul, test_39);
  tcase_add_test(tc_is_mul, test_40);
  tcase_add_test(tc_is_mul, test_41);
  tcase_add_test(tc_is_mul, test_42);
  tcase_add_test(tc_is_mul, test_43);
  tcase_add_test(tc_is_mul, test_44);
  tcase_add_test(tc_is_mul, test_45);
  tcase_add_test(tc_is_mul, test_46);
  tcase_add_test(tc_is_mul, test_47);
  tcase_add_test(tc_is_mul, test_48);
  tcase_add_test(tc_is_mul, test_49);
  tcase_add_test(tc_is_mul, test_50);
  tcase_add_test(tc_is_mul, test_51);
  tcase_add_test(tc_is_mul, test_52);
  tcase_add_test(tc_is_mul, test_53);
  tcase_add_test(tc_is_mul, test_54);
  tcase_add_test(tc_is_mul, test_55);
  tcase_add_test(tc_is_mul, test_56);
  tcase_add_test(tc_is_mul, test_57);
  tcase_add_test(tc_is_mul, test_58);
  tcase_add_test(tc_is_mul, test_59);
  tcase_add_test(tc_is_mul, test_60);
  tcase_add_test(tc_is_mul, test_61);
  tcase_add_test(tc_is_mul, test_62);
  tcase_add_test(tc_is_mul, test_63);
  tcase_add_test(tc_is_mul, test_64);
  tcase_add_test(tc_is_mul, test_65);
  tcase_add_test(tc_is_mul, test_66);
  tcase_add_test(tc_is_mul, test_67);
  tcase_add_test(tc_is_mul, test_68);
  tcase_add_test(tc_is_mul, test_69);
  tcase_add_test(tc_is_mul, test_70);
  tcase_add_test(tc_is_mul, test_71);
  tcase_add_test(tc_is_mul, test_72);
  tcase_add_test(tc_is_mul, test_73);
  tcase_add_test(tc_is_mul, test_74);
  tcase_add_test(tc_is_mul, test_75);
  tcase_add_test(tc_is_mul, test_76);
  tcase_add_test(tc_is_mul, test_77);
  tcase_add_test(tc_is_mul, test_78);
  tcase_add_test(tc_is_mul, test_79);
  tcase_add_test(tc_is_mul, test_80);
  tcase_add_test(tc_is_mul, test_81);
  tcase_add_test(tc_is_mul, test_82);
  tcase_add_test(tc_is_mul, test_83);
  tcase_add_test(tc_is_mul, test_84);
  tcase_add_test(tc_is_mul, test_85);
  // tcase_add_test(tc_is_mul, test_86);
  // tcase_add_test(tc_is_mul, test_87);
  tcase_add_test(tc_is_mul, test_88);
  // tcase_add_test(tc_is_mul, test_89);
  // tcase_add_test(tc_is_mul, test_90);
  tcase_add_test(tc_is_mul, test_91);
  tcase_add_test(tc_is_mul, test_92);
  tcase_add_test(tc_is_mul, test_93);
  tcase_add_test(tc_is_mul, test_94);
  tcase_add_test(tc_is_mul, test_95);
  tcase_add_test(tc_is_mul, test_96);
  tcase_add_test(tc_is_mul, test_97);
  tcase_add_test(tc_is_mul, test_98);
  tcase_add_test(tc_is_mul, test_99);
  tcase_add_test(tc_is_mul, test_100);
  tcase_add_test(tc_is_mul, test_101);
  tcase_add_test(tc_is_mul, test_102);
  tcase_add_test(tc_is_mul, test_103);
  tcase_add_test(tc_is_mul, test_104);
  tcase_add_test(tc_is_mul, test_105);
  tcase_add_test(tc_is_mul, test_106);
  tcase_add_test(tc_is_mul, test_107);
  tcase_add_test(tc_is_mul, test_108);
  tcase_add_test(tc_is_mul, test_109);
  tcase_add_test(tc_is_mul, test_110);
  tcase_add_test(tc_is_mul, test_111);
  tcase_add_test(tc_is_mul, test_112);
  tcase_add_test(tc_is_mul, test_113);
  tcase_add_test(tc_is_mul, test_114);
  tcase_add_test(tc_is_mul, test_115);
  tcase_add_test(tc_is_mul, test_116);
  tcase_add_test(tc_is_mul, test_117);
  tcase_add_test(tc_is_mul, test_118);
  tcase_add_test(tc_is_mul, test_119);
  tcase_add_test(tc_is_mul, test_120);
  tcase_add_test(tc_is_mul, test_121);
  tcase_add_test(tc_is_mul, test_122);
  tcase_add_test(tc_is_mul, test_123);
  tcase_add_test(tc_is_mul, test_124);
  tcase_add_test(tc_is_mul, test_125);
  tcase_add_test(tc_is_mul, test_126);
  tcase_add_test(tc_is_mul, test_127);
  tcase_add_test(tc_is_mul, test_128);
  tcase_add_test(tc_is_mul, test_129);
  tcase_add_test(tc_is_mul, test_130);
  tcase_add_test(tc_is_mul, test_131);
  tcase_add_test(tc_is_mul, test_132);
  tcase_add_test(tc_is_mul, test_133);
  tcase_add_test(tc_is_mul, test_134);
  tcase_add_test(tc_is_mul, test_135);
  tcase_add_test(tc_is_mul, test_136);
  tcase_add_test(tc_is_mul, test_137);
  tcase_add_test(tc_is_mul, test_138);
  tcase_add_test(tc_is_mul, test_139);
  tcase_add_test(tc_is_mul, test_140);
  tcase_add_test(tc_is_mul, test_141);
  tcase_add_test(tc_is_mul, test_142);
  tcase_add_test(tc_is_mul, test_143);
  tcase_add_test(tc_is_mul, test_144);
  tcase_add_test(tc_is_mul, test_145);
  tcase_add_test(tc_is_mul, test_146);
  tcase_add_test(tc_is_mul, test_147);
  tcase_add_test(tc_is_mul, test_148);
  tcase_add_test(tc_is_mul, test_149);
  tcase_add_test(tc_is_mul, test_150);
  tcase_add_test(tc_is_mul, test_151);
  tcase_add_test(tc_is_mul, test_152);
  tcase_add_test(tc_is_mul, test_153);
  tcase_add_test(tc_is_mul, test_154);
  tcase_add_test(tc_is_mul, test_155);
  tcase_add_test(tc_is_mul, test_156);
  tcase_add_test(tc_is_mul, test_157);
  tcase_add_test(tc_is_mul, test_158);
  tcase_add_test(tc_is_mul, test_159);
  tcase_add_test(tc_is_mul, test_160);
  tcase_add_test(tc_is_mul, test_161);
  tcase_add_test(tc_is_mul, test_162);
  tcase_add_test(tc_is_mul, test_163);
  tcase_add_test(tc_is_mul, test_164);
  tcase_add_test(tc_is_mul, test_165);
  tcase_add_test(tc_is_mul, test_166);
  tcase_add_test(tc_is_mul, test_167);
  tcase_add_test(tc_is_mul, test_168);
  tcase_add_test(tc_is_mul, test_169);
  tcase_add_test(tc_is_mul, test_170);
  tcase_add_test(tc_is_mul, test_171);
  tcase_add_test(tc_is_mul, test_172);
  tcase_add_test(tc_is_mul, test_173);
  tcase_add_test(tc_is_mul, test_174);
  tcase_add_test(tc_is_mul, test_175);
  tcase_add_test(tc_is_mul, test_176);
  tcase_add_test(tc_is_mul, test_177);
  tcase_add_test(tc_is_mul, test_178);
  tcase_add_test(tc_is_mul, test_179);
  tcase_add_test(tc_is_mul, test_180);
  tcase_add_test(tc_is_mul, test_181);
  tcase_add_test(tc_is_mul, test_182);
  tcase_add_test(tc_is_mul, test_183);
  tcase_add_test(tc_is_mul, test_184);
  tcase_add_test(tc_is_mul, test_185);
  tcase_add_test(tc_is_mul, test_186);
  tcase_add_test(tc_is_mul, test_187);
  tcase_add_test(tc_is_mul, test_188);
  tcase_add_test(tc_is_mul, test_189);
  tcase_add_test(tc_is_mul, test_190);
  tcase_add_test(tc_is_mul, test_191);
  tcase_add_test(tc_is_mul, test_192);
  tcase_add_test(tc_is_mul, test_193);
  tcase_add_test(tc_is_mul, test_194);
  tcase_add_test(tc_is_mul, test_195);
  tcase_add_test(tc_is_mul, test_196);
  tcase_add_test(tc_is_mul, test_197);
  tcase_add_test(tc_is_mul, test_198);
  tcase_add_test(tc_is_mul, test_199);
  tcase_add_test(tc_is_mul, test_200);
  tcase_add_test(tc_is_mul, test_201);
  tcase_add_test(tc_is_mul, test_202);
  tcase_add_test(tc_is_mul, test_203);
  tcase_add_test(tc_is_mul, test_204);
  tcase_add_test(tc_is_mul, test_205);
  tcase_add_test(tc_is_mul, test_206);
  tcase_add_test(tc_is_mul, test_207);
  tcase_add_test(tc_is_mul, test_208);
  tcase_add_test(tc_is_mul, test_209);
  tcase_add_test(tc_is_mul, test_210);
  tcase_add_test(tc_is_mul, test_211);
  // tcase_add_test(tc_is_mul, test_212);

  suite_add_tcase(s, tc_is_mul);

  return s;
}
