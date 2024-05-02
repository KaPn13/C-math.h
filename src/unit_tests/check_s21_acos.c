#include "s21_math_test.h"

START_TEST(s21_acos_test1) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), 0.000001);
}
END_TEST

START_TEST(s21_acos_test2) {
  ck_assert_double_eq_tol(s21_acos(-0.369), acos(-0.369), 0.000001);
}
END_TEST

START_TEST(s21_acos_test3) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 0.000001);
}
END_TEST

START_TEST(s21_acos_test4) {
  ck_assert_double_nan(s21_acos(INFINITY));
  ck_assert_double_nan(acos(INFINITY));
}
END_TEST

START_TEST(s21_acos_test5) {
  ck_assert_double_nan(s21_acos(NAN));
  ck_assert_double_nan(acos(NAN));
}
END_TEST

START_TEST(s21_acos_test6) {
  ck_assert_double_nan(s21_acos(-INFINITY));
  ck_assert_double_nan(acos(-INFINITY));
}
END_TEST

START_TEST(s21_acos_test7) {
  ck_assert_double_nan(s21_acos(16));
  ck_assert_double_nan(acos(16));
}
END_TEST

START_TEST(s21_acos_test8) {
  ck_assert_double_nan(s21_acos(-16));
  ck_assert_double_nan(acos(-16));
}
END_TEST

START_TEST(s21_acos_test9) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), 0.000001);
}
END_TEST

Suite *acos_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("acos(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_acos_test1);
  tcase_add_test(tc_core, s21_acos_test2);
  tcase_add_test(tc_core, s21_acos_test3);
  tcase_add_test(tc_core, s21_acos_test4);
  tcase_add_test(tc_core, s21_acos_test5);
  tcase_add_test(tc_core, s21_acos_test6);
  tcase_add_test(tc_core, s21_acos_test7);
  tcase_add_test(tc_core, s21_acos_test8);
  tcase_add_test(tc_core, s21_acos_test9);
  suite_add_tcase(s, tc_core);
  return s;
}
