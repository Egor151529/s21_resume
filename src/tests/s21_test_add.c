#include "s21_tests.h"

START_TEST(test_1) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_2) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_3) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2251937404");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_4) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_6) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2119092944");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_7) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_9) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "439060261");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3855907034);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_10) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_11) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_12) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2629558823");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1665408472);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_13) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2133313634");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2161653661);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_14) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_15) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967294);
}
END_TEST

START_TEST(test_16) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1687545464");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2607421831);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_17) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_18) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_19) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "405594455");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 405594454);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_20) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_21) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_22) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2707193417");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2707193416);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_23) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_25) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3163725072");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3163725071);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_26) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_28) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1893186017");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1893186016);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_29) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_30) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_31) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3815328637");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3815328636);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_32) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_33) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_34) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4144911904");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 150055391);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_35) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_36) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_37) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2934137147");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1360830148);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_38) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "452915856");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3842051439);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_39) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_41) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "312176343");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3982790952);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_42) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_43) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_44) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "493300917");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3801666378);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_45) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_46) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_47) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3565744755");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 729222540);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_48) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "414597368");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3880369927);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_49) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_51) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1685159217");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2609808078);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_52) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_54) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1341513688");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1341513688);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_55) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_57) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2024683730");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2024683730);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_58) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_60) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "3121913594");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3121913594);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_61) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2658817480");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2658817480);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_62) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_63) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_64) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3365438296");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 1);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_65) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_66) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_67) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "181928812");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4113038483);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_68) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_69) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_70) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1490469423");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2804497872);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_71) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_72) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_73) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "999639760");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3295327535);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_74) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_75) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_76) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3754210556");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3754210555);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_77) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_78) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_79) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3259572255");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3259572254);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_80) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_81) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_82) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "226704109");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 226704108);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_83) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_84) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 1);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_85) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2980400107");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1314567188);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_86) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_87) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_88) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2765540526");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1529426769);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_89) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_90) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_91) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "251418503");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4043548792);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_92) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_93) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_94) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2399391660");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1895575635);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_95) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_96) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967293);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 1);
}
END_TEST

START_TEST(test_97) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "103769237");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4191198058);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_98) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_99) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 2);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_100) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2194041378");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 2100925917);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_101) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_103) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "3979548461");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 3979548461);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_104) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_106) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1444292323");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1444292323);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_107) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_add(dec1, dec2, &dec3);
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
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 4294967294);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 4294967295);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 4294967295);
}
END_TEST

START_TEST(test_109) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "944586766");
  int status = s21_add(dec1, dec2, &dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 944586766);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
}
END_TEST

START_TEST(test_110) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "15.5");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_add(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 160);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 1);
}
END_TEST

START_TEST(test_111) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-15.5");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_add(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 150);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 1);
}
END_TEST

START_TEST(test_112) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-15.56");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_add(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1506);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 2);
}
END_TEST

START_TEST(test_113) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-15.5");
  s21_init_decimal_from_string(&dec2, "0.05");
  int status = s21_add(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], 1545);
  ck_assert_uint_eq((unsigned)dec3.bits[1], 0);
  ck_assert_uint_eq((unsigned)dec3.bits[2], 0);
  ck_assert_int_eq(scale, 2);
}
END_TEST

START_TEST(test_114) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-0.6");
  int status = s21_add(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], (unsigned)(0xFFFFFFFF - 1));
  ck_assert_uint_eq((unsigned)dec3.bits[1], (unsigned)0xFFFFFFFF);
  ck_assert_uint_eq((unsigned)dec3.bits[2], (unsigned)0xFFFFFFFF);
  ck_assert_int_eq(scale, 0);
}
END_TEST

START_TEST(test_115) {
  s21_decimal dec1, dec2, dec3 = {0};
  s21_init_decimal_from_string(&dec1, "-0.6");
  s21_init_decimal_from_string(&dec2, "79228162514264337593543950335");
  int status = s21_add(dec1, dec2, &dec3);
  int scale = s21_get_scale(dec3);
  ck_assert_int_eq(status, 0);
  ck_assert_uint_eq((unsigned)dec3.bits[0], (unsigned)(0xFFFFFFFF - 1));
  ck_assert_uint_eq((unsigned)dec3.bits[1], (unsigned)0xFFFFFFFF);
  ck_assert_uint_eq((unsigned)dec3.bits[2], (unsigned)0xFFFFFFFF);
  ck_assert_int_eq(scale, 0);
}
END_TEST

Suite *s21_test_add(void) {
  Suite *s = suite_create("s21_test_add");

  TCase *tc_is_add = tcase_create("is_add");
  tcase_add_test(tc_is_add, test_1);
  tcase_add_test(tc_is_add, test_2);
  tcase_add_test(tc_is_add, test_3);
  tcase_add_test(tc_is_add, test_4);
  tcase_add_test(tc_is_add, test_5);
  tcase_add_test(tc_is_add, test_6);
  tcase_add_test(tc_is_add, test_7);
  tcase_add_test(tc_is_add, test_8);
  tcase_add_test(tc_is_add, test_9);
  tcase_add_test(tc_is_add, test_10);
  tcase_add_test(tc_is_add, test_11);
  tcase_add_test(tc_is_add, test_12);
  tcase_add_test(tc_is_add, test_13);
  tcase_add_test(tc_is_add, test_14);
  tcase_add_test(tc_is_add, test_15);
  tcase_add_test(tc_is_add, test_16);
  tcase_add_test(tc_is_add, test_17);
  tcase_add_test(tc_is_add, test_18);
  tcase_add_test(tc_is_add, test_19);
  tcase_add_test(tc_is_add, test_20);
  tcase_add_test(tc_is_add, test_21);
  tcase_add_test(tc_is_add, test_22);
  tcase_add_test(tc_is_add, test_23);
  tcase_add_test(tc_is_add, test_24);
  tcase_add_test(tc_is_add, test_25);
  tcase_add_test(tc_is_add, test_26);
  tcase_add_test(tc_is_add, test_27);
  tcase_add_test(tc_is_add, test_28);
  tcase_add_test(tc_is_add, test_29);
  tcase_add_test(tc_is_add, test_30);
  tcase_add_test(tc_is_add, test_31);
  tcase_add_test(tc_is_add, test_32);
  tcase_add_test(tc_is_add, test_33);
  tcase_add_test(tc_is_add, test_34);
  tcase_add_test(tc_is_add, test_35);
  tcase_add_test(tc_is_add, test_36);
  tcase_add_test(tc_is_add, test_37);
  tcase_add_test(tc_is_add, test_38);
  tcase_add_test(tc_is_add, test_39);
  tcase_add_test(tc_is_add, test_40);
  tcase_add_test(tc_is_add, test_41);
  tcase_add_test(tc_is_add, test_42);
  tcase_add_test(tc_is_add, test_43);
  tcase_add_test(tc_is_add, test_44);
  tcase_add_test(tc_is_add, test_45);
  tcase_add_test(tc_is_add, test_46);
  tcase_add_test(tc_is_add, test_47);
  tcase_add_test(tc_is_add, test_48);
  tcase_add_test(tc_is_add, test_49);
  tcase_add_test(tc_is_add, test_50);
  tcase_add_test(tc_is_add, test_51);
  tcase_add_test(tc_is_add, test_52);
  tcase_add_test(tc_is_add, test_53);
  tcase_add_test(tc_is_add, test_54);
  tcase_add_test(tc_is_add, test_55);
  tcase_add_test(tc_is_add, test_56);
  tcase_add_test(tc_is_add, test_57);
  tcase_add_test(tc_is_add, test_58);
  tcase_add_test(tc_is_add, test_59);
  tcase_add_test(tc_is_add, test_60);
  tcase_add_test(tc_is_add, test_61);
  tcase_add_test(tc_is_add, test_62);
  tcase_add_test(tc_is_add, test_63);
  tcase_add_test(tc_is_add, test_64);
  tcase_add_test(tc_is_add, test_65);
  tcase_add_test(tc_is_add, test_66);
  tcase_add_test(tc_is_add, test_67);
  tcase_add_test(tc_is_add, test_68);
  tcase_add_test(tc_is_add, test_69);
  tcase_add_test(tc_is_add, test_70);
  tcase_add_test(tc_is_add, test_71);
  tcase_add_test(tc_is_add, test_72);
  tcase_add_test(tc_is_add, test_73);
  tcase_add_test(tc_is_add, test_74);
  tcase_add_test(tc_is_add, test_75);
  tcase_add_test(tc_is_add, test_76);
  tcase_add_test(tc_is_add, test_77);
  tcase_add_test(tc_is_add, test_78);
  tcase_add_test(tc_is_add, test_79);
  tcase_add_test(tc_is_add, test_80);
  tcase_add_test(tc_is_add, test_81);
  tcase_add_test(tc_is_add, test_82);
  tcase_add_test(tc_is_add, test_83);
  tcase_add_test(tc_is_add, test_84);
  tcase_add_test(tc_is_add, test_85);
  tcase_add_test(tc_is_add, test_86);
  tcase_add_test(tc_is_add, test_87);
  tcase_add_test(tc_is_add, test_88);
  tcase_add_test(tc_is_add, test_89);
  tcase_add_test(tc_is_add, test_90);
  tcase_add_test(tc_is_add, test_91);
  tcase_add_test(tc_is_add, test_92);
  tcase_add_test(tc_is_add, test_93);
  tcase_add_test(tc_is_add, test_94);
  tcase_add_test(tc_is_add, test_95);
  tcase_add_test(tc_is_add, test_96);
  tcase_add_test(tc_is_add, test_97);
  tcase_add_test(tc_is_add, test_98);
  tcase_add_test(tc_is_add, test_99);
  tcase_add_test(tc_is_add, test_100);
  tcase_add_test(tc_is_add, test_101);
  tcase_add_test(tc_is_add, test_102);
  tcase_add_test(tc_is_add, test_103);
  tcase_add_test(tc_is_add, test_104);
  tcase_add_test(tc_is_add, test_105);
  tcase_add_test(tc_is_add, test_106);
  tcase_add_test(tc_is_add, test_107);
  tcase_add_test(tc_is_add, test_108);
  tcase_add_test(tc_is_add, test_109);
  tcase_add_test(tc_is_add, test_110);
  tcase_add_test(tc_is_add, test_111);
  tcase_add_test(tc_is_add, test_112);
  tcase_add_test(tc_is_add, test_113);
  tcase_add_test(tc_is_add, test_114);
  tcase_add_test(tc_is_add, test_115);

  suite_add_tcase(s, tc_is_add);

  return s;
}
