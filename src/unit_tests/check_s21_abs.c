#include "s21_math_test.h"

START_TEST(s21_abs_test1) { ck_assert_int_eq(s21_abs(5), abs(5)); }
END_TEST

START_TEST(s21_abs_test2) { ck_assert_int_eq(s21_abs(-5), abs(-5)); }
END_TEST

START_TEST(s21_abs_test3) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(s21_abs_test4) {
  ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
}
END_TEST

START_TEST(s21_abs_test5) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

Suite *abs_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("abs(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_abs_test1);
  tcase_add_test(tc_core, s21_abs_test2);
  tcase_add_test(tc_core, s21_abs_test3);
  tcase_add_test(tc_core, s21_abs_test4);
  tcase_add_test(tc_core, s21_abs_test5);
  suite_add_tcase(s, tc_core);
  return s;
}
