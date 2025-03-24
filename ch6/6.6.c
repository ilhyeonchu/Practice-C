// 피보나치 수열 배열 없이 만들기

#include <stdio.h>

int main ()
{
  int a, b, c;

  a = 0;
  b = 1;
  
  for (int i = 0; i < 15; i++) {
    c = a + b;
    a = b;
    b = c;
    printf ("%i ", a);
  }

  printf ("\n");
  
  return 0;
}
