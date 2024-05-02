#include "s21_math_test.h"

int main() {
  int fail = 0;
  case_test(abs_suite(), &fail);
  case_test(acos_suite(), &fail);
  case_test(asin_suite(), &fail);
  case_test(atan_suite(), &fail);
  case_test(ceil_suite(), &fail);
  case_test(cos_suite(), &fail);
  case_test(exp_suite(), &fail);
  case_test(fabs_suite(), &fail);
  case_test(floor_suite(), &fail);
  case_test(fmod_suite(), &fail);
  case_test(fact_suite(), &fail);
  case_test(log_suite(), &fail);
  case_test(pow_suite(), &fail);
  case_test(sin_suite(), &fail);
  case_test(sqrt_suite(), &fail);
  case_test(tan_suite(), &fail);
  return fail;
}

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}
