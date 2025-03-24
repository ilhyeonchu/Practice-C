#include <stdio.h>

int main() {
  double x = 3.31e-8, y = 2.01e-7, z = 7.16e-6;
  double r = (x*y)/(z+y/10);

  printf("%e\n", r);

  return 0;
}
