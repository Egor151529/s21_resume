#include "s21_tests.h"

START_TEST(test_basic_init) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "5000");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }
  ans.bits[0] = 5000;
  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_basic_init_negative) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "-5000");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }
  ans.bits[0] = 5000;
  ans.bits[3] = (1 << 31);
  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_big_int) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "92300120000");
  uint64_t tmp = 92300120000;
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }
  ans.bits[1] += (tmp >> 32);
  tmp &= 0xFFFFFFFF;
  ans.bits[0] = (uint32_t)tmp;

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_big_int_positive) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "+92300120000");
  uint64_t tmp = 92300120000;
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }
  ans.bits[1] += (tmp >> 32);
  tmp &= 0xFFFFFFFF;
  ans.bits[0] = (uint32_t)tmp;

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_big_int_negative) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "-92300120000");
  uint64_t tmp = 92300120000;
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }
  ans.bits[1] += (tmp >> 32);
  tmp &= 0xFFFFFFFF;
  ans.bits[0] = (uint32_t)tmp;
  ans.bits[3] = (1 << 31);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_max_int) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "79228162514264337593543950335");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_min_int) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "-79228162514264337593543950335");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] = (1 << 31);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "79228162514264337593543.950335");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] |= (0x6 << 16);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float_negative) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "-79228162514264337593543.950335");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] |= (0x6 << 16);
  ans.bits[3] |= (1 << 31);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_overflow) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(
      &dec, "79228162514264337593543950335999999999999999999999999999999");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_overflow_negative) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(
      &dec, "-79228162514264337593543950335999999999999999999999999999999");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] |= (1 << 31);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float_overflow) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(
      &dec, "792281625142643375935439503359999999.99999999999999999999999");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] |= (0x17 << 16);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float_overflow_negative) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(
      &dec, "-792281625142643375935439503359999999.99999999999999999999999");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] |= (1 << 31);
  ans.bits[3] |= (0x17 << 16);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float_overflow2) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(
      &dec, "79228162514264337593543950335.999999999999999999999999999999");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] |= (0x1C << 16);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float_overflow_negative2) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(
      &dec, "-79228162514264337593543950335.999999999999999999999999999999");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0xFFFFFFFF;
  ans.bits[1] |= 0xFFFFFFFF;
  ans.bits[2] |= 0xFFFFFFFF;
  ans.bits[3] |= (1 << 31);
  ans.bits[3] |= (0x1C << 16);

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float_overflow_edge) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "2147483647");
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }

  ans.bits[0] |= 0x7FFFFFFF;

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

START_TEST(test_init_float_overflow_edge2) {
  s21_decimal dec, ans;
  s21_init_decimal_from_string(&dec, "2147483648");
  uint64_t tmp = 2147483648;
  for (int i = 0; i < 4; i++) {
    ans.bits[i] = 0;
  }
  ans.bits[1] += (tmp >> 32);
  tmp &= 0xFFFFFFFF;
  ans.bits[0] = (uint32_t)tmp;

  ck_assert_int_eq(s21_is_equal(dec, ans), 1);
}
END_TEST

Suite *s21_test_init_dec_from_int(void) {
  Suite *s = suite_create("s21_test_init_dec_from_int");

  TCase *tc_init_dec_from_int = tcase_create("init_from_string");

  tcase_add_test(tc_init_dec_from_int, test_basic_init);
  tcase_add_test(tc_init_dec_from_int, test_basic_init_negative);
  tcase_add_test(tc_init_dec_from_int, test_init_big_int);
  tcase_add_test(tc_init_dec_from_int, test_init_big_int_positive);
  tcase_add_test(tc_init_dec_from_int, test_init_big_int_negative);
  tcase_add_test(tc_init_dec_from_int, test_init_max_int);
  tcase_add_test(tc_init_dec_from_int, test_init_min_int);
  tcase_add_test(tc_init_dec_from_int, test_init_float);
  tcase_add_test(tc_init_dec_from_int, test_init_float_negative);
  tcase_add_test(tc_init_dec_from_int, test_init_overflow);
  tcase_add_test(tc_init_dec_from_int, test_init_overflow_negative);
  tcase_add_test(tc_init_dec_from_int, test_init_float_overflow);
  tcase_add_test(tc_init_dec_from_int, test_init_float_overflow_negative);
  tcase_add_test(tc_init_dec_from_int, test_init_float_overflow2);
  tcase_add_test(tc_init_dec_from_int, test_init_float_overflow_negative2);
  tcase_add_test(tc_init_dec_from_int, test_init_float_overflow_edge);
  tcase_add_test(tc_init_dec_from_int, test_init_float_overflow_edge2);

  suite_add_tcase(s, tc_init_dec_from_int);

  return s;
}