#include "s21_math.h"

long double s21_floor(double x) {
  if (S21_IS_NAN(x) || S21_IS_INF(x)) return x;
  long long int intpart = (long long int)x;
  intpart -= (x < 0 && (x - intpart));
  return intpart;
}
