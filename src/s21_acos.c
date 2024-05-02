#include "s21_math.h"

long double s21_acos(double x) {
  double result;
  if (x == 1) {
    result = 0;
  } else if (x == -1) {
    result = S21_PI;
  } else if (x > 1 || x < -1) {
    result = S21_NAN;
  } else {
    result = S21_PI / 2.0 - s21_asin(x);
  }
  return (long double)result;
}
