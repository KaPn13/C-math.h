#include "s21_math.h"

long double s21_asin(double x) {
  int count = 0;
  long double result = 0.0;
  double temp = x;
  double nominator = 0.0;
  double denominator = 0.0;
  double denominator_2 = 0.0;
  if (x == 0) {
    result = 0;
  } else if (x == -1) {
    result = -S21_PI / 2;
  } else if (x == 1) {
    result = S21_PI / 2;
  } else if (x >= -1 && x <= 1) {
    while (count < 100) {
      result += temp;
      nominator = x * x * (2 * count + 1) * (2 * count + 1);
      denominator = 2 * count + 2;
      denominator_2 = 2 * count + 3;
      temp *= nominator / denominator / denominator_2;
      count++;
    }
  }

  else {
    result = S21_NAN;
  }

  return (long double)result;
}
