#include "s21_math_test.h"

START_TEST(s21_cos_test1) {
  ck_assert_double_eq_tol(s21_cos(1200000), cos(1200000), 0.000001);
}
END_TEST

START_TEST(s21_cos_test2) {
  ck_assert_double_eq_tol(s21_cos(-14.96), cos(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_cos_test3) {
  ck_assert_double_nan(s21_cos(INFINITY));
  ck_assert_double_nan(cos(INFINITY));
}
END_TEST

START_TEST(s21_cos_test4) {
  ck_assert_double_nan(s21_cos(NAN));
  ck_assert_double_nan(cos(NAN));
}
END_TEST

START_TEST(s21_cos_test5) {
  ck_assert_double_nan(s21_cos(-INFINITY));
  ck_assert_double_nan(cos(-INFINITY));
}
END_TEST

START_TEST(s21_cos_test6) {
  ck_assert_double_eq_tol(s21_cos(0), cos(0), 0.000001);
}
END_TEST

START_TEST(s21_cos_test7) {
  ck_assert_double_eq_tol(s21_cos(M_PI_2), cos(M_PI_2), 0.000001);
}
END_TEST

START_TEST(s21_cos_test8) {
  ck_assert_double_eq_tol(s21_cos(-M_PI_2), cos(-M_PI_2), 0.000001);
}
END_TEST

START_TEST(s21_cos_test9) {
  ck_assert_double_eq_tol(s21_cos(M_PI), cos(M_PI), 0.000001);
}
END_TEST

START_TEST(s21_cos_test10) { ck_assert_ldouble_nan(s21_cos(S21_INF_POS)); }
END_TEST

Suite *cos_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("cos(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_cos_test1);
  tcase_add_test(tc_core, s21_cos_test2);
  tcase_add_test(tc_core, s21_cos_test3);
  tcase_add_test(tc_core, s21_cos_test4);
  tcase_add_test(tc_core, s21_cos_test5);
  tcase_add_test(tc_core, s21_cos_test6);
  tcase_add_test(tc_core, s21_cos_test7);
  tcase_add_test(tc_core, s21_cos_test8);
  tcase_add_test(tc_core, s21_cos_test9);
  tcase_add_test(tc_core, s21_cos_test10);
  suite_add_tcase(s, tc_core);
  return s;
}
