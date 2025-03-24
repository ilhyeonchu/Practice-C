// 수를 입력받고 해당 수의 각 자릿수들의 합을 계산
#include <stdio.h>

int main()
{
  int input, output, digit;
  printf("Enter your number : ");
  scanf("%i", &input);
  output = 0, digit = input;

  do {
    output += digit%10;
    digit /= 10;
  }
  while(digit != 0);

  printf("Your Input Number is %i, output = %i\n", input, output);

  return 0;
}
