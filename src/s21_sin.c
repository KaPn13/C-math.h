#include "s21_math.h"

long double s21_sin(double x) {
  double result = 0;
  if (x == S21_INF_POS || x == S21_INF_NEG) {
    result = S21_NAN;
  }
  if (s21_fabs(x) > 10) {
    x = s21_fmod(x, 2 * S21_PI);
  }
  int count = 0;
  double term = x;
  result = x;
  double sqr = x * x;

  int n = 3;
  while (s21_fabs(term) > EPSILON || count < 100) {
    term = -term * sqr / ((n) * (n - 1));
    result += term;
    n += 2;
    count++;
  }

  return (long double)result;
}
