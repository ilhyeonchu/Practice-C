#include <stdio.h>

int triangular_num(int a) {
//  int n = a;
//  int r = n*(n+1)/2;
//  return r;
  return a*(a+1)/2;
}

int main()
{
  printf(" n        triangularNumber\n");
  printf("--------------------------\n");

  for(int n = 5; n <= 50; n += 5) {
    printf("%2i         %4i\n", n, triangular_num(n));
  }

  return 0;
}
