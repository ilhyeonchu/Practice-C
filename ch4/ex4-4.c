#include <stdio.h>

int cul(int n) {
  int a = n;
  int r = 1;
  for(int i = 1; i <= n; i++) {
      r *= i;
  }
  return r;
}

int main()
{
  printf(" n             n!\n");
  printf("---------------\n");

  for (int i = 1; i <= 10; i++) {
    printf("%2i         %4i\n", i, cul(i));
  }
  return 0;
}
