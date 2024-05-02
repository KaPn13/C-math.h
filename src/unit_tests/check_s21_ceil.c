#include "s21_math_test.h"

START_TEST(s21_ceil_test1) {
  ck_assert_double_eq_tol(s21_ceil(-0.1), ceil(-0.1), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test2) {
  ck_assert_double_eq_tol(s21_ceil(-213.3), ceil(-213.3), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test3) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(s21_ceil_test4) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_test5) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(s21_ceil_test6) {
  ck_assert_double_eq_tol(s21_ceil(50), ceil(50), 0.000001);
}
END_TEST

Suite *ceil_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("ceil(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_ceil_test1);
  tcase_add_test(tc_core, s21_ceil_test2);
  tcase_add_test(tc_core, s21_ceil_test3);
  tcase_add_test(tc_core, s21_ceil_test4);
  tcase_add_test(tc_core, s21_ceil_test5);
  tcase_add_test(tc_core, s21_ceil_test6);
  suite_add_tcase(s, tc_core);
  return s;
}
