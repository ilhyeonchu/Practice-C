#include <stdio.h>

int main()
{
  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int convertedNumber[64];
  long int numberToConvert;
  int nextDigit, base, index = 0;

  //  변환하고자 하는 양수와 기수 입력

  printf ("Number to be converted? ");
  scanf ("%ld", &numberToConvert);
  printf ("Base? ");
  scanf ("%i", &base);

  //  지정된 진법으로 변화

  do {
    convertedNumber[index] = numberToConvert % base;
    index++;
    numberToConvert /= base;
  }
  while (numberToConvert != 0);

  for (--index; index >= 0; index--) {
    printf ("%c", baseDigits[convertedNumber[index]]);
  }
  
  printf ("\n");

  return 0;
}
