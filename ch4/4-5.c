#include <stdio.h>

int main()
{
  int number, triangularNumber, counter; // 원하는 삼각수, 결과, 삼각수를 몇 번 구할지(여기선 5)

  for (counter = 1; counter <= 5; counter++)
  {
    printf ("What triangular number do you want? ");
    scanf ("%i", &number);  //  구하고 싶은 삼각수 입력

    triangularNumber = 0; //  결과 초기화

    for (int n = 1; n <= number; n++)
      triangularNumber += n;

    printf ("Triangular number %i is %i\n\n", number, triangularNumber);
  }

  return 0;
}
