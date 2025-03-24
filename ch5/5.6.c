#include <stdio.h>

void printNumber(int input) {
  switch(input) {
    case 0:
      printf ("zero ");
      break;
    case 1:
      printf ("one ");
      break;
    case 2 :
      printf ("two ");
      break;
    case 3:
      printf ("three ");
      break;
    case 4:
      printf ("four ");
      break;
    case 5:
      printf ("five ");
      break;
    case 6:
      printf ("six ");
      break;
    case 7:
      printf ("seven ");
      break;
    case 8:
      printf ("eight ");
      break;
    case 9:
      printf ("nine ");
      break;
  }
}

int main()
{
  int input, digit, output;

  printf ("Enter your number: ");
  scanf ("%i", &input);
  digit = input;
  output = 0;
  
  do {
    output = output * 10 + digit % 10;
    digit /= 10;
  }
  while (digit != 0);

  do {
    printNumber(output%10);
    output /= 10;
  }
  while (output != 0);
  
  return 0;
}
