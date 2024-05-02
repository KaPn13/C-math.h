#include "s21_math_test.h"

START_TEST(s21_pow_test1) {
  ck_assert_double_eq_tol(s21_pow(20, 0.4), pow(20, 0.4), 0.000001);
}
END_TEST

START_TEST(s21_pow_test2) {
  ck_assert_double_nan(s21_pow(-20, 0.4));
  ck_assert_double_nan(pow(-20, 0.4));
}
END_TEST

START_TEST(s21_pow_test3) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test4) {
  ck_assert_double_eq(s21_pow(-INFINITY, -INFINITY), pow(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test5) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_pow_test6) {
  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test7) {
  ck_assert_double_nan(s21_pow(NAN, INFINITY));
  ck_assert_double_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(s21_pow_test8) {
  ck_assert_double_nan(s21_pow(-INFINITY, NAN));
  ck_assert_double_nan(pow(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test9) {
  ck_assert_double_nan(s21_pow(NAN, -INFINITY));
  ck_assert_double_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test10) {
  ck_assert_double_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test11) {
  ck_assert_double_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test12) {
  ck_assert_double_eq_tol(s21_pow(12.69, 0), pow(12.69, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test13) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 3), pow(-20.63, 3), 0.000001);
}
END_TEST

START_TEST(s21_pow_test14) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 6), pow(-20.63, 6), 0.000001);
}
END_TEST

START_TEST(s21_pow_test15) {
  ck_assert_double_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test16) {
  ck_assert_double_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test17) {
  ck_assert_double_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test18) {
  ck_assert_double_eq(s21_pow(0, -INFINITY), pow(0, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test19) {
  ck_assert_double_eq_tol(s21_pow(0, INFINITY), pow(0, INFINITY), 0.000001);
}
END_TEST

START_TEST(s21_pow_test20) {
  ck_assert_double_nan(s21_pow(0, NAN));
  ck_assert_double_nan(pow(0, NAN));
}
END_TEST

START_TEST(s21_pow_test21) { ck_assert_double_eq(s21_pow(0, 0), pow(0, 0)); }
END_TEST

START_TEST(s21_pow_test22) {
  ck_assert_double_eq(s21_pow(16894.2629, 1545), pow(16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_test23) {
  ck_assert_double_eq(s21_pow(16894.2629, -1545), pow(16894.2629, -1545));
}
END_TEST

START_TEST(s21_pow_test24) {
  ck_assert_double_eq(s21_pow(-16894.2629, 1545), pow(-16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_test25) {
  ck_assert_double_eq(s21_pow(-16894.2629, -1545), pow(-16894.2629, -1545));
}
END_TEST

Suite *pow_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("pow(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_pow_test1);
  tcase_add_test(tc_core, s21_pow_test2);
  tcase_add_test(tc_core, s21_pow_test3);
  tcase_add_test(tc_core, s21_pow_test4);
  tcase_add_test(tc_core, s21_pow_test5);
  tcase_add_test(tc_core, s21_pow_test6);
  tcase_add_test(tc_core, s21_pow_test7);
  tcase_add_test(tc_core, s21_pow_test8);
  tcase_add_test(tc_core, s21_pow_test9);
  tcase_add_test(tc_core, s21_pow_test10);
  tcase_add_test(tc_core, s21_pow_test11);
  tcase_add_test(tc_core, s21_pow_test12);
  tcase_add_test(tc_core, s21_pow_test13);
  tcase_add_test(tc_core, s21_pow_test14);
  tcase_add_test(tc_core, s21_pow_test15);
  tcase_add_test(tc_core, s21_pow_test16);
  tcase_add_test(tc_core, s21_pow_test17);
  tcase_add_test(tc_core, s21_pow_test18);
  tcase_add_test(tc_core, s21_pow_test19);
  tcase_add_test(tc_core, s21_pow_test20);
  tcase_add_test(tc_core, s21_pow_test21);
  tcase_add_test(tc_core, s21_pow_test22);
  tcase_add_test(tc_core, s21_pow_test23);
  tcase_add_test(tc_core, s21_pow_test24);
  tcase_add_test(tc_core, s21_pow_test25);
  suite_add_tcase(s, tc_core);
  return s;
}
