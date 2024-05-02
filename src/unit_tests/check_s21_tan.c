#include "s21_math_test.h"

START_TEST(s21_tan_test1) {
  ck_assert_double_eq_tol(s21_tan(6987000), tan(6987000), 0.000001);
}
END_TEST

START_TEST(s21_tan_test2) {
  ck_assert_double_eq_tol(s21_tan(-14.96), tan(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_tan_test3) {
  ck_assert_double_nan(s21_tan(INFINITY));
  ck_assert_double_nan(tan(INFINITY));
}
END_TEST

START_TEST(s21_tan_test4) {
  ck_assert_double_nan(s21_tan(NAN));
  ck_assert_double_nan(tan(NAN));
}
END_TEST

START_TEST(s21_tan_test5) {
  ck_assert_double_nan(s21_tan(-INFINITY));
  ck_assert_double_nan(tan(-INFINITY));
}
END_TEST

START_TEST(s21_tan_test6) {
  ck_assert_double_eq_tol(s21_tan(0), tan(0), 0.000001);
}
END_TEST

START_TEST(s21_tan_test7) {
  ck_assert_double_eq_tol(s21_tan(M_PI), tan(M_PI), 0.000001);
}
END_TEST

Suite *tan_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("tan(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_tan_test1);
  tcase_add_test(tc_core, s21_tan_test2);
  tcase_add_test(tc_core, s21_tan_test3);
  tcase_add_test(tc_core, s21_tan_test4);
  tcase_add_test(tc_core, s21_tan_test5);
  tcase_add_test(tc_core, s21_tan_test6);
  tcase_add_test(tc_core, s21_tan_test7);
  suite_add_tcase(s, tc_core);
  return s;
}
