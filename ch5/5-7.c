//  입력한 문자를 알파벳, 기호, 숫자 중 무엇인지 구별

#include <stdio.h>

int main()
{
  char c;
  
  printf ("Enter a single character;\n");
  scanf ("%c", &c);

  if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
    printf ("It's an alphabetic character.\n");
  else if ( c >= '0' && c <= '9' )
    printf ("It's a digit. \n");
  else
    printf ("It's a special character.\n");


  return 0;
}
