#include "s21_math_test.h"

START_TEST(s21_fmod_test1) {
  ck_assert_double_nan(s21_fmod(NAN, NAN));
  ck_assert_double_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(s21_fmod_test2) {
  ck_assert_double_nan(s21_fmod(-INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test3) {
  ck_assert_double_nan(s21_fmod(-INFINITY, INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test4) {
  ck_assert_double_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_double_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test5) {
  ck_assert_double_nan(s21_fmod(NAN, INFINITY));
  ck_assert_double_nan(fmod(NAN, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test6) {
  ck_assert_double_nan(s21_fmod(-INFINITY, NAN));
  ck_assert_double_nan(fmod(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test7) {
  ck_assert_double_nan(s21_fmod(NAN, -INFINITY));
  ck_assert_double_nan(fmod(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test8) {
  ck_assert_double_nan(s21_fmod(INFINITY, NAN));
  ck_assert_double_nan(fmod(INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test9) {
  ck_assert_double_nan(s21_fmod(INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test10) {
  ck_assert_double_nan(s21_fmod(INFINITY, 3));
  ck_assert_double_nan(fmod(INFINITY, 3));
}
END_TEST

START_TEST(s21_fmod_test11) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 2));
  ck_assert_double_nan(fmod(-INFINITY, 2));
}
END_TEST

START_TEST(s21_fmod_test12) {
  ck_assert_double_nan(s21_fmod(NAN, 1));
  ck_assert_double_nan(fmod(NAN, 1));
}
END_TEST

START_TEST(s21_fmod_test13) {
  ck_assert_double_eq(s21_fmod(100, INFINITY), fmod(100, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test14) {
  ck_assert_double_eq(s21_fmod(100, -INFINITY), fmod(100, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test15) {
  ck_assert_double_eq(s21_fmod(0, INFINITY), fmod(0, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test16) {
  ck_assert_double_eq(s21_fmod(0, -INFINITY), fmod(0, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test17) {
  ck_assert_double_nan(s21_fmod(0, NAN));
  ck_assert_double_nan(fmod(0, NAN));
}
END_TEST

START_TEST(s21_fmod_test18) {
  ck_assert_double_nan(s21_fmod(INFINITY, 0));
  ck_assert_double_nan(fmod(INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test19) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 0));
  ck_assert_double_nan(fmod(-INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test20) {
  ck_assert_double_nan(s21_fmod(NAN, 0));
  ck_assert_double_nan(fmod(NAN, 0));
}
END_TEST

START_TEST(s21_fmod_MAIN_test) {
  long double f_value[] = {4234, 20,      234,    -756,   435,    24.342, 345,
                           645,  2.24234, 53.534, 6456,   1,      0,      -1,
                           34,   64,      9786,   534.53, 756.56, 754};
  long double s_value[] = {8898.07,  6881.63, 1537.52, 5783.31, 2675.7,
                           5560.06,  1240.69, 9348.66, 103.02,  4153.9,
                           250,      29.3,    96.456,  86,      29.5,
                           302.0234, 1,       1947.38, 953,     42};
  for (int i = 0; i < 20; i++) {
    ck_assert_double_eq_tol(s21_fmod(f_value[i], s_value[i]),
                            fmod(f_value[i], s_value[i]), 0.000001);
  }
}

Suite *fmod_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fmod(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_fmod_MAIN_test);
  tcase_add_test(tc_core, s21_fmod_test1);
  tcase_add_test(tc_core, s21_fmod_test2);
  tcase_add_test(tc_core, s21_fmod_test3);
  tcase_add_test(tc_core, s21_fmod_test4);
  tcase_add_test(tc_core, s21_fmod_test5);
  tcase_add_test(tc_core, s21_fmod_test6);
  tcase_add_test(tc_core, s21_fmod_test7);
  tcase_add_test(tc_core, s21_fmod_test8);
  tcase_add_test(tc_core, s21_fmod_test9);
  tcase_add_test(tc_core, s21_fmod_test10);
  tcase_add_test(tc_core, s21_fmod_test11);
  tcase_add_test(tc_core, s21_fmod_test12);
  tcase_add_test(tc_core, s21_fmod_test13);
  tcase_add_test(tc_core, s21_fmod_test14);
  tcase_add_test(tc_core, s21_fmod_test15);
  tcase_add_test(tc_core, s21_fmod_test16);
  tcase_add_test(tc_core, s21_fmod_test17);
  tcase_add_test(tc_core, s21_fmod_test18);
  tcase_add_test(tc_core, s21_fmod_test19);
  tcase_add_test(tc_core, s21_fmod_test20);
  suite_add_tcase(s, tc_core);
  return s;
}
