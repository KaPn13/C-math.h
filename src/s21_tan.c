#include "s21_math.h"

long double s21_tan(double x) {
  double result = s21_sin(x) / s21_cos(x);

  return (long double)result;
}
