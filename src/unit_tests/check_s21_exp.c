#include "s21_math_test.h"

START_TEST(s21_exp_test1) {
  ck_assert_double_eq(s21_exp(25048.369), exp(25048.369));
}
END_TEST

START_TEST(s21_exp_test2) {
  ck_assert_double_eq_tol(s21_exp(-14.96), exp(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_exp_test3) {
  ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(s21_exp_test4) {
  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}
END_TEST

START_TEST(s21_exp_test5) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(s21_exp_test6) {
  ck_assert_double_eq_tol(s21_exp(0), exp(0), 0.000001);
}
END_TEST

START_TEST(s21_exp_test7) {
  ck_assert_double_eq_tol(s21_exp(1), exp(1), 0.000001);
}
END_TEST

START_TEST(s21_exp_test8) {
  ck_assert_double_eq_tol(s21_exp(-1), exp(-1), 0.000001);
}
END_TEST

Suite *exp_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("exp(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_exp_test1);
  tcase_add_test(tc_core, s21_exp_test2);
  tcase_add_test(tc_core, s21_exp_test3);
  tcase_add_test(tc_core, s21_exp_test4);
  tcase_add_test(tc_core, s21_exp_test5);
  tcase_add_test(tc_core, s21_exp_test6);
  tcase_add_test(tc_core, s21_exp_test7);
  tcase_add_test(tc_core, s21_exp_test8);
  suite_add_tcase(s, tc_core);
  return s;
}
