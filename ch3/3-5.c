#include <stdio.h>

int main() {
  float f1 = 123.125, f2;
  int i1, i2 = -150;
  char c = 'a';

  i1 = f1;  // 부동 소수점 수에서 정수로 변환
  printf ("%f assigned to an int produces = %i\n", f1, i1);

  f1 = i2;  // 정수에서 부동 소수점 수로 변환
  printf ("%i assigned to a float produces = %f\n", i2, f1);

  f1 = i2 / 100;  // 정수를 정수로 나눈 경우
  printf ("%i divided by 100 produces = %f\n", i2, f1);

  f2 = i2 / 100.0;  // 정수를 부동 소수점 수로 나눈 경우
  printf ("%i divided by 100.0 produces = %f\n", i2, f2);

  f2 = (float) i2 / 100;  // 형식 캐스팅 연산자
  printf ("(float) %i divided by 100 produces = %f\n", i2, f2);

  return 0;
}
