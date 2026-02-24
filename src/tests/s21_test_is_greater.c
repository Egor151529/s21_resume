#include "s21_tests.h"

START_TEST(test_1) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_2) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_3) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "907941202");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_4) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_5) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_6) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3642364685");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_7) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_8) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_9) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4279981134");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_10) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_11) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_12) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2824735597");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_13) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2649370270");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_14) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_15) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_16) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "916994509");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_17) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_18) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_19) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "2265661302");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_20) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_21) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_22) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3618391977");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_23) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_24) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_25) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "3905461565");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_26) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_27) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_28) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "770214828");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_29) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_30) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_31) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2211790104");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_32) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_33) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_34) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1019417991");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_35) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_36) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_37) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3562379497");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_38) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "3182298821");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_39) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_40) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_41) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2342936814");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_42) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_43) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_44) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1078487633");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_45) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_46) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_47) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "4190949389");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_48) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3426505356");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_49) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_50) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_51) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "2695805818");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_52) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_53) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_54) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1812553490");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_55) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_56) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "4294967296");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_57) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "582621724");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_58) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_59) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "18446744073709551616");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_60) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "3914938845");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_61) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2419210318");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_62) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_63) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_64) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "2887178321");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_65) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_66) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_67) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "3403466644");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_68) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_69) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_70) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "321911872");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_71) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_72) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_73) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-79228162514264337593543950335");
  s21_init_decimal_from_string(&dec2, "4192664142");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_74) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_75) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_76) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "1573107241");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_77) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_78) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_79) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "4294967295");
  s21_init_decimal_from_string(&dec2, "4055783901");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_80) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_81) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_82) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1731749374");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_83) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_84) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_85) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "2520199456");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_86) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_87) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_88) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1420330875");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_89) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_90) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_91) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-4294967295");
  s21_init_decimal_from_string(&dec2, "1688647254");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_92) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_93) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_94) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "3356190413");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_95) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_96) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_97) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1635936233");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_98) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_99) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_100) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "-18446744073709551615");
  s21_init_decimal_from_string(&dec2, "1510684600");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_101) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967295");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_102) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-4294967294");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_103) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "2049434353");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_104) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551615");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_105) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-18446744073709551614");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_106) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "3248190044");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_107) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950335");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_108) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "-79228162514264337593543950334");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_109) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "3215820791");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_110) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "1328562806.5");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_111) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0.5");
  s21_init_decimal_from_string(&dec2, "1328562806.1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_112) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "1328562806.5");
  s21_init_decimal_from_string(&dec2, "1328562806.4");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 1);
}
END_TEST

START_TEST(test_113) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "1328562806.9");
  s21_init_decimal_from_string(&dec2, "1328562806.9");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_114) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0");
  s21_init_decimal_from_string(&dec2, "0.1");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

START_TEST(test_115) {
  s21_decimal dec1, dec2;
  s21_init_decimal_from_string(&dec1, "0.49999");
  s21_init_decimal_from_string(&dec2, "0.5");
  int status = s21_is_greater(dec1, dec2);
  ck_assert_int_eq(status, 0);
}
END_TEST

Suite *s21_test_is_greater(void) {
  Suite *s = suite_create("s21_test_is_greater");

  TCase *tc_is_greater = tcase_create("is_greater");
  tcase_add_test(tc_is_greater, test_1);
  tcase_add_test(tc_is_greater, test_2);
  tcase_add_test(tc_is_greater, test_3);
  tcase_add_test(tc_is_greater, test_4);
  tcase_add_test(tc_is_greater, test_5);
  tcase_add_test(tc_is_greater, test_6);
  tcase_add_test(tc_is_greater, test_7);
  tcase_add_test(tc_is_greater, test_8);
  tcase_add_test(tc_is_greater, test_9);
  tcase_add_test(tc_is_greater, test_10);
  tcase_add_test(tc_is_greater, test_11);
  tcase_add_test(tc_is_greater, test_12);
  tcase_add_test(tc_is_greater, test_13);
  tcase_add_test(tc_is_greater, test_14);
  tcase_add_test(tc_is_greater, test_15);
  tcase_add_test(tc_is_greater, test_16);
  tcase_add_test(tc_is_greater, test_17);
  tcase_add_test(tc_is_greater, test_18);
  tcase_add_test(tc_is_greater, test_19);
  tcase_add_test(tc_is_greater, test_20);
  tcase_add_test(tc_is_greater, test_21);
  tcase_add_test(tc_is_greater, test_22);
  tcase_add_test(tc_is_greater, test_23);
  tcase_add_test(tc_is_greater, test_24);
  tcase_add_test(tc_is_greater, test_25);
  tcase_add_test(tc_is_greater, test_26);
  tcase_add_test(tc_is_greater, test_27);
  tcase_add_test(tc_is_greater, test_28);
  tcase_add_test(tc_is_greater, test_29);
  tcase_add_test(tc_is_greater, test_30);
  tcase_add_test(tc_is_greater, test_31);
  tcase_add_test(tc_is_greater, test_32);
  tcase_add_test(tc_is_greater, test_33);
  tcase_add_test(tc_is_greater, test_34);
  tcase_add_test(tc_is_greater, test_35);
  tcase_add_test(tc_is_greater, test_36);
  tcase_add_test(tc_is_greater, test_37);
  tcase_add_test(tc_is_greater, test_38);
  tcase_add_test(tc_is_greater, test_39);
  tcase_add_test(tc_is_greater, test_40);
  tcase_add_test(tc_is_greater, test_41);
  tcase_add_test(tc_is_greater, test_42);
  tcase_add_test(tc_is_greater, test_43);
  tcase_add_test(tc_is_greater, test_44);
  tcase_add_test(tc_is_greater, test_45);
  tcase_add_test(tc_is_greater, test_46);
  tcase_add_test(tc_is_greater, test_47);
  tcase_add_test(tc_is_greater, test_48);
  tcase_add_test(tc_is_greater, test_49);
  tcase_add_test(tc_is_greater, test_50);
  tcase_add_test(tc_is_greater, test_51);
  tcase_add_test(tc_is_greater, test_52);
  tcase_add_test(tc_is_greater, test_53);
  tcase_add_test(tc_is_greater, test_54);
  tcase_add_test(tc_is_greater, test_55);
  tcase_add_test(tc_is_greater, test_56);
  tcase_add_test(tc_is_greater, test_57);
  tcase_add_test(tc_is_greater, test_58);
  tcase_add_test(tc_is_greater, test_59);
  tcase_add_test(tc_is_greater, test_60);
  tcase_add_test(tc_is_greater, test_61);
  tcase_add_test(tc_is_greater, test_62);
  tcase_add_test(tc_is_greater, test_63);
  tcase_add_test(tc_is_greater, test_64);
  tcase_add_test(tc_is_greater, test_65);
  tcase_add_test(tc_is_greater, test_66);
  tcase_add_test(tc_is_greater, test_67);
  tcase_add_test(tc_is_greater, test_68);
  tcase_add_test(tc_is_greater, test_69);
  tcase_add_test(tc_is_greater, test_70);
  tcase_add_test(tc_is_greater, test_71);
  tcase_add_test(tc_is_greater, test_72);
  tcase_add_test(tc_is_greater, test_73);
  tcase_add_test(tc_is_greater, test_74);
  tcase_add_test(tc_is_greater, test_75);
  tcase_add_test(tc_is_greater, test_76);
  tcase_add_test(tc_is_greater, test_77);
  tcase_add_test(tc_is_greater, test_78);
  tcase_add_test(tc_is_greater, test_79);
  tcase_add_test(tc_is_greater, test_80);
  tcase_add_test(tc_is_greater, test_81);
  tcase_add_test(tc_is_greater, test_82);
  tcase_add_test(tc_is_greater, test_83);
  tcase_add_test(tc_is_greater, test_84);
  tcase_add_test(tc_is_greater, test_85);
  tcase_add_test(tc_is_greater, test_86);
  tcase_add_test(tc_is_greater, test_87);
  tcase_add_test(tc_is_greater, test_88);
  tcase_add_test(tc_is_greater, test_89);
  tcase_add_test(tc_is_greater, test_90);
  tcase_add_test(tc_is_greater, test_91);
  tcase_add_test(tc_is_greater, test_92);
  tcase_add_test(tc_is_greater, test_93);
  tcase_add_test(tc_is_greater, test_94);
  tcase_add_test(tc_is_greater, test_95);
  tcase_add_test(tc_is_greater, test_96);
  tcase_add_test(tc_is_greater, test_97);
  tcase_add_test(tc_is_greater, test_98);
  tcase_add_test(tc_is_greater, test_99);
  tcase_add_test(tc_is_greater, test_100);
  tcase_add_test(tc_is_greater, test_101);
  tcase_add_test(tc_is_greater, test_102);
  tcase_add_test(tc_is_greater, test_103);
  tcase_add_test(tc_is_greater, test_104);
  tcase_add_test(tc_is_greater, test_105);
  tcase_add_test(tc_is_greater, test_106);
  tcase_add_test(tc_is_greater, test_107);
  tcase_add_test(tc_is_greater, test_108);
  tcase_add_test(tc_is_greater, test_109);
  tcase_add_test(tc_is_greater, test_110);
  tcase_add_test(tc_is_greater, test_111);
  tcase_add_test(tc_is_greater, test_112);
  tcase_add_test(tc_is_greater, test_113);
  tcase_add_test(tc_is_greater, test_114);
  tcase_add_test(tc_is_greater, test_115);

  suite_add_tcase(s, tc_is_greater);

  return s;
}
