#include "s21_math.h"

long double s21_atan(double x) {
  long double result = 0.0;
  if (S21_IS_NAN(x)) {
    result = S21_NAN;
  } else if (x == S21_INF_POS) {
    result = S21_PI / 2;
  } else if (x == S21_INF_NEG) {
    result = -S21_PI / 2;
  } else if ((x == 1) || (x == -1)) {
    result = S21_PI / (4 * x);
  } else {
    int sign;
    if (x > -1 && x < 1) {
      sign = 1;
      result = x;
    } else {
      sign = -1;
      result = 1.0 / x;
    }
    for (int i = 1; i < 1000; i++) {
      result +=
          s21_pow_int(-1, i) * s21_pow_int(x, (1 + 2 * i) * sign) / (1 + 2 * i);
    }
    if (sign == -1) result = (S21_PI * s21_fabs(x) / (2 * x)) - result;
  }
  return result;
}
