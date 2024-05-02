#include "s21_math_test.h"

START_TEST(s21_floor_test1) {
  ck_assert_double_eq_tol(s21_floor(-0.8), floor(-0.8), 0.000001);
}
END_TEST

START_TEST(s21_floor_test2) {
  ck_assert_double_eq_tol(s21_floor(0.8), floor(0.8), 0.000001);
}
END_TEST

START_TEST(s21_floor_test3) {
  ck_assert_double_eq_tol(s21_floor(-10.23), floor(-10.23), 0.000001);
}
END_TEST

START_TEST(s21_floor_test4) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(s21_floor_test5) {
  ck_assert_double_nan(s21_floor(NAN));
  ck_assert_double_nan(floor(NAN));
}
END_TEST

START_TEST(s21_floor_test6) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(s21_floor_test7) {
  ck_assert_double_eq_tol(s21_floor(-1200), floor(-1200), 0.000001);
}
END_TEST

Suite *floor_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("floor(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_floor_test1);
  tcase_add_test(tc_core, s21_floor_test2);
  tcase_add_test(tc_core, s21_floor_test3);
  tcase_add_test(tc_core, s21_floor_test4);
  tcase_add_test(tc_core, s21_floor_test5);
  tcase_add_test(tc_core, s21_floor_test6);
  tcase_add_test(tc_core, s21_floor_test7);
  suite_add_tcase(s, tc_core);
  return s;
}
