#include "s21_math_test.h"

START_TEST(s21_factorial_test) {
  long double fact_arr[] = {7, 1, 0, 11, 5};
  long double fact_ans_arr[] = {5040, 1, 1, 39916800, 120};

  for (int i = 0; i < 5; i++)
    ck_assert_double_eq(s21_factorial(fact_arr[i]), fact_ans_arr[i]);
}
END_TEST

Suite *fact_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("factorial(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_factorial_test);
  suite_add_tcase(s, tc_core);
  return s;
}
