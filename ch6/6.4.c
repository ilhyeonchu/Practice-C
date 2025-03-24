//  부동 소수점 수 10개를 입력받아 평균을 계산하는 프로그램

#include <stdio.h>

int main()
{
  float input[10], a, average;

  printf ("Enter your floating number. \n");

  for (int i = 0; i < 10; i++) {
    scanf ("%f", &a);
    input[i] = a;
//    input[i] = scanf ("%f", &a);
  }
  
  for (int i = 0; i < 9; i++) {
    a += input[i];
  }
  
  a /= 10;

  printf ("Average : %g\n", a);

  return 0;
}
