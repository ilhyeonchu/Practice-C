//  두 개의 정수를 입력받아 첫 번째 입력값이 두 번째 입력값으로 나누어 떨어지는지 확인하는 프로그램
//
#include <stdio.h>
#include <stdbool.h>

int main()
{
  int value1, value2;
  bool isMultiple;

  printf ("두 정수를 입력하세요.\n");
  scanf ("%i %i", &value1, &value2);
  
  isMultiple = !(value1 % value2);

  if (isMultiple)
    printf ("입력한 두 정수는 %i %i 이고 나누어 떨어집니다.", value1, value2);
  else
    printf ("입력한 두 정수는 %i %i 이고 나누어 떨어지지 않습니다.", value1, value2);


  return 0;
}
