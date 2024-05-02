#include "s21_math_test.h"

START_TEST(s21_fabs_test1) {
  ck_assert_double_eq_tol(s21_fabs(568.36), fabs(568.36), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test2) {
  ck_assert_double_eq_tol(s21_fabs(-14720.5689), fabs(-14720.5689), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test3) {
  ck_assert_double_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(s21_fabs_test4) {
  ck_assert_double_nan(s21_fabs(NAN));
  ck_assert_double_nan(fabs(NAN));
}
END_TEST

START_TEST(s21_fabs_test5) {
  ck_assert_double_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

Suite *fabs_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fabs(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_fabs_test1);
  tcase_add_test(tc_core, s21_fabs_test2);
  tcase_add_test(tc_core, s21_fabs_test3);
  tcase_add_test(tc_core, s21_fabs_test4);
  tcase_add_test(tc_core, s21_fabs_test5);
  suite_add_tcase(s, tc_core);
  return s;
}
