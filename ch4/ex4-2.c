#include <stdio.h>

int main()
{
  printf("  n         n^2\n");
  printf("-----------------\n\n");

  for(int n = 0; n <= 10; n++) {
    printf(" %2i          %3i \n", n, n*n);
  }
  return 0;
}
