#include <stdio.h>

int main()
{
  int input, output, n;

  output = 0;
  printf("Enter your number. \n");
  scanf("%i", &input);

  while(input != 0) {
    n = input % 10;
    output = output * 10 + n;
    input /= 10;
  }

  printf("output = %i \n", output);

  return 0;
}
