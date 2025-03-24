#include <stdio.h>

int main()
{
  int input, output = 0, digit;

  printf("Enter your number. \n");
  scanf("%i", &input);

  do {
    digit = input % 10;
    output *= 10, output += digit;
    input /= 10;
  }
  while ( input != 0 );

  printf("%i \n", output);

  return 0;
}
