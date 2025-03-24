#include <stdio.h>

int main()
{
  int number, triangularNumber, counter;

  scanf("%i", &counter);
  
  for(int i = 1; i <= counter; i++) {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;

    for(int n = 1; n <= number; n++)
      triangularNumber += n;

    printf("Triangular number %i is %i\n\n", number, triangularNumber);
  }

  return 0;
}
