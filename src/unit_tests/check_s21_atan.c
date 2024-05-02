#include "s21_math_test.h"

START_TEST(s21_atan_test1) {
  long double arr[] = {14.96, -25.1235, 0.23464, 0, 1, -1};
  for (int i = 0; i < 6; i++)
    ck_assert_double_eq_tol(s21_atan(arr[i]), atan(arr[i]), 0.000001);
}
END_TEST

START_TEST(s21_atan_test2) {
  ck_assert_double_eq(s21_atan(INFINITY), atan(INFINITY));
}
END_TEST

START_TEST(s21_atan_test3) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_test4) {
  ck_assert_double_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

Suite *atan_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("atan(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_atan_test1);
  tcase_add_test(tc_core, s21_atan_test2);
  tcase_add_test(tc_core, s21_atan_test3);
  tcase_add_test(tc_core, s21_atan_test4);
  suite_add_tcase(s, tc_core);
  return s;
}
