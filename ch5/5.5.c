#include <stdio.h>
#include <stdbool.h>

int main()
{
  int input, output, digit;
  bool sign;
  
  printf ("Enter your number :");
  scanf ("%i", &input);

  output = 0;

  if (input < 0) {
    digit = -input;
    sign = false;
  } else {
    digit = input;
    sign = true;
  }

  do {
  output *= 10;
  output += digit % 10;
  digit /= 10;
  }
  while (digit != 0);

  printf ("%i", output);
  if (sign == false) {
    printf ("-\n");
  } else {
    printf ("\n");
  }

  return 0;
}
