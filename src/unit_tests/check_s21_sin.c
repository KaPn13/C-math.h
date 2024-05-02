#include "s21_math_test.h"

START_TEST(s21_sin_test1) {
  ck_assert_double_eq_tol(s21_sin(1000000), sin(1000000), 0.000001);
}
END_TEST

START_TEST(s21_sin_test2) {
  ck_assert_double_eq_tol(s21_sin(-14.96), sin(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_sin_test3) {
  ck_assert_double_nan(s21_sin(INFINITY));
  ck_assert_double_nan(sin(INFINITY));
}
END_TEST

START_TEST(s21_sin_test4) {
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));
}
END_TEST

START_TEST(s21_sin_test5) {
  ck_assert_double_nan(s21_sin(-INFINITY));
  ck_assert_double_nan(sin(-INFINITY));
}
END_TEST

START_TEST(s21_sin_test6) {
  ck_assert_double_eq_tol(s21_sin(M_PI), sin(M_PI), 0.000001);
}
END_TEST

START_TEST(s21_sin_test7) {
  ck_assert_double_eq_tol(s21_sin(M_PI_2), sin(M_PI_2), 0.000001);
}
END_TEST

START_TEST(s21_sin_test8) {
  ck_assert_double_eq_tol(s21_sin(0), sin(0), 0.000001);
}
END_TEST

START_TEST(s21_sin_test9) {
  ck_assert_double_eq_tol(s21_sin(-M_PI_2), sin(-M_PI_2), 0.000001);
}
END_TEST

START_TEST(s21_sin_test10) { ck_assert_ldouble_nan(s21_sin(S21_INF_POS)); }
END_TEST

Suite *sin_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("sin(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_sin_test1);
  tcase_add_test(tc_core, s21_sin_test2);
  tcase_add_test(tc_core, s21_sin_test3);
  tcase_add_test(tc_core, s21_sin_test4);
  tcase_add_test(tc_core, s21_sin_test5);
  tcase_add_test(tc_core, s21_sin_test6);
  tcase_add_test(tc_core, s21_sin_test7);
  tcase_add_test(tc_core, s21_sin_test8);
  tcase_add_test(tc_core, s21_sin_test9);
  tcase_add_test(tc_core, s21_sin_test10);
  suite_add_tcase(s, tc_core);
  return s;
}
