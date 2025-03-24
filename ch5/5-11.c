#include <stdio.h>

int main()
{
  int input;

  printf ("Enter your number: ");
  scanf ("%i",&input);

  printf ("Your number is %i", input == 0 ? 0 : input == 1 ? 1 : input == 2 ? 2 : input == 3 ? 3 : input);

  return 0;
}

