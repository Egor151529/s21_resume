#include "s21_tests.h"

START_TEST(test_1) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_2) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_3) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-3976659840");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_4) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_5) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_6) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3064770131");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_7) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_8) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_9) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3264965139");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_10) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_11) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_12) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "837400578");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_13) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3784110207");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_14) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_15) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_16) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "900968871");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_17) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_18) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_19) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2275619563");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_20) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_21) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_22) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3430707792");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_23) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_24) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_25) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "354413410");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_26) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_27) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_28) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3156387452");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_29) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_30) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_31) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4285773381");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_32) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_33) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_34) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3686884657");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_35) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_36) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_37) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3155540353");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_38) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1970157960");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_39) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_40) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_41) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4186426122");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_42) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_43) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_44) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1688625675");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_45) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_46) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_47) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2365898535");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_48) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1620364528");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_49) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_50) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_51) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "613957271");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_52) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_53) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_54) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "493006926");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_55) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_56) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_57) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "722819604");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_58) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_59) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_60) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "483105196");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_61) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2573895591");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_62) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_63) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_64) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4213716830");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_65) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_66) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_67) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2306435608");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_68) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_69) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_70) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3917028628");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_71) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_72) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_73) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2519662957");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_74) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_75) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_76) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "348367050");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_77) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_78) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_79) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4057933287");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_80) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_81) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_82) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1977942315");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_83) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_84) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_85) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3542939498");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_86) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_87) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_88) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "550110965");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_89) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_90) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_91) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "306832451");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_92) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_93) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_94) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1128997399");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_95) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_96) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_97) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2521872823");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_98) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_99) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_100) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1484037812");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_101) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_102) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_103) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2960337510");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_104) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_105) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_106) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4277734344");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_107) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_108) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_109) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1328562806");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_110) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1328562806.5");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_111) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0.5");
  s21_init_decimal_from_string(&dec2, "1328562806.1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_112) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "1328562806.5");
  s21_init_decimal_from_string(&dec2, "1328562806.4");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_113) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "1328562806.9");
  s21_init_decimal_from_string(&dec2, "1328562806.9");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_114) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0.1");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_115) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0.49999");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_116) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "1.1");
  s21_init_decimal_from_string(&dec2, "1.05");
  int status = s21_is_less(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

Suite *s21_test_is_less(void) {
  Suite *s = suite_create("s21_test_is_less");

  TCase *tc_is_less = tcase_create("is_less");
  tcase_add_test(tc_is_less, test_1);
  tcase_add_test(tc_is_less, test_2);
  tcase_add_test(tc_is_less, test_3);
  tcase_add_test(tc_is_less, test_4);
  tcase_add_test(tc_is_less, test_5);
  tcase_add_test(tc_is_less, test_6);
  tcase_add_test(tc_is_less, test_7);
  tcase_add_test(tc_is_less, test_8);
  tcase_add_test(tc_is_less, test_9);
  tcase_add_test(tc_is_less, test_10);
  tcase_add_test(tc_is_less, test_11);
  tcase_add_test(tc_is_less, test_12);
  tcase_add_test(tc_is_less, test_13);
  tcase_add_test(tc_is_less, test_14);
  tcase_add_test(tc_is_less, test_15);
  tcase_add_test(tc_is_less, test_16);
  tcase_add_test(tc_is_less, test_17);
  tcase_add_test(tc_is_less, test_18);
  tcase_add_test(tc_is_less, test_19);
  tcase_add_test(tc_is_less, test_20);
  tcase_add_test(tc_is_less, test_21);
  tcase_add_test(tc_is_less, test_22);
  tcase_add_test(tc_is_less, test_23);
  tcase_add_test(tc_is_less, test_24);
  tcase_add_test(tc_is_less, test_25);
  tcase_add_test(tc_is_less, test_26);
  tcase_add_test(tc_is_less, test_27);
  tcase_add_test(tc_is_less, test_28);
  tcase_add_test(tc_is_less, test_29);
  tcase_add_test(tc_is_less, test_30);
  tcase_add_test(tc_is_less, test_31);
  tcase_add_test(tc_is_less, test_32);
  tcase_add_test(tc_is_less, test_33);
  tcase_add_test(tc_is_less, test_34);
  tcase_add_test(tc_is_less, test_35);
  tcase_add_test(tc_is_less, test_36);
  tcase_add_test(tc_is_less, test_37);
  tcase_add_test(tc_is_less, test_38);
  tcase_add_test(tc_is_less, test_39);
  tcase_add_test(tc_is_less, test_40);
  tcase_add_test(tc_is_less, test_41);
  tcase_add_test(tc_is_less, test_42);
  tcase_add_test(tc_is_less, test_43);
  tcase_add_test(tc_is_less, test_44);
  tcase_add_test(tc_is_less, test_45);
  tcase_add_test(tc_is_less, test_46);
  tcase_add_test(tc_is_less, test_47);
  tcase_add_test(tc_is_less, test_48);
  tcase_add_test(tc_is_less, test_49);
  tcase_add_test(tc_is_less, test_50);
  tcase_add_test(tc_is_less, test_51);
  tcase_add_test(tc_is_less, test_52);
  tcase_add_test(tc_is_less, test_53);
  tcase_add_test(tc_is_less, test_54);
  tcase_add_test(tc_is_less, test_55);
  tcase_add_test(tc_is_less, test_56);
  tcase_add_test(tc_is_less, test_57);
  tcase_add_test(tc_is_less, test_58);
  tcase_add_test(tc_is_less, test_59);
  tcase_add_test(tc_is_less, test_60);
  tcase_add_test(tc_is_less, test_61);
  tcase_add_test(tc_is_less, test_62);
  tcase_add_test(tc_is_less, test_63);
  tcase_add_test(tc_is_less, test_64);
  tcase_add_test(tc_is_less, test_65);
  tcase_add_test(tc_is_less, test_66);
  tcase_add_test(tc_is_less, test_67);
  tcase_add_test(tc_is_less, test_68);
  tcase_add_test(tc_is_less, test_69);
  tcase_add_test(tc_is_less, test_70);
  tcase_add_test(tc_is_less, test_71);
  tcase_add_test(tc_is_less, test_72);
  tcase_add_test(tc_is_less, test_73);
  tcase_add_test(tc_is_less, test_74);
  tcase_add_test(tc_is_less, test_75);
  tcase_add_test(tc_is_less, test_76);
  tcase_add_test(tc_is_less, test_77);
  tcase_add_test(tc_is_less, test_78);
  tcase_add_test(tc_is_less, test_79);
  tcase_add_test(tc_is_less, test_80);
  tcase_add_test(tc_is_less, test_81);
  tcase_add_test(tc_is_less, test_82);
  tcase_add_test(tc_is_less, test_83);
  tcase_add_test(tc_is_less, test_84);
  tcase_add_test(tc_is_less, test_85);
  tcase_add_test(tc_is_less, test_86);
  tcase_add_test(tc_is_less, test_87);
  tcase_add_test(tc_is_less, test_88);
  tcase_add_test(tc_is_less, test_89);
  tcase_add_test(tc_is_less, test_90);
  tcase_add_test(tc_is_less, test_91);
  tcase_add_test(tc_is_less, test_92);
  tcase_add_test(tc_is_less, test_93);
  tcase_add_test(tc_is_less, test_94);
  tcase_add_test(tc_is_less, test_95);
  tcase_add_test(tc_is_less, test_96);
  tcase_add_test(tc_is_less, test_97);
  tcase_add_test(tc_is_less, test_98);
  tcase_add_test(tc_is_less, test_99);
  tcase_add_test(tc_is_less, test_100);
  tcase_add_test(tc_is_less, test_101);
  tcase_add_test(tc_is_less, test_102);
  tcase_add_test(tc_is_less, test_103);
  tcase_add_test(tc_is_less, test_104);
  tcase_add_test(tc_is_less, test_105);
  tcase_add_test(tc_is_less, test_106);
  tcase_add_test(tc_is_less, test_107);
  tcase_add_test(tc_is_less, test_108);
  tcase_add_test(tc_is_less, test_109);
  tcase_add_test(tc_is_less, test_110);
  tcase_add_test(tc_is_less, test_111);
  tcase_add_test(tc_is_less, test_112);
  tcase_add_test(tc_is_less, test_113);
  tcase_add_test(tc_is_less, test_114);
  tcase_add_test(tc_is_less, test_115);
  tcase_add_test(tc_is_less, test_116);

  suite_add_tcase(s, tc_is_less);

  return s;
}
