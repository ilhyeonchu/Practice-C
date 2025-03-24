//  0부터 10 사이의 값 20개 입력
//  위는 원래 6-2.c 파일이고 이걸 20개가 아닌 원하는 만큼 입력하게 바꾸기


#include <stdio.h>

int main()
{
  int ratingCounters[11], i, response;
    
  i = 0;

  for (i = 1; i <= 10; i++) {
      ratingCounters[i] = 0;
  }

  printf ("Enter your responses\n");

//  for (i = 1; i <= 20; i++) {
//      scanf ("%i", &response);
//
//      if (response < 1 || response > 10) {
//          printf ("Bad response: %i\n", response);
//      } else {
//          ratingCounters[response]++;
//      }
//  }
  
  while (1) {
    scanf ("%i", &response);
    
    if (response == 999)
      break;

    if (response < 1 || response > 10) {
      printf ("Bad response: %i\n", response);
    } else {
      ratingCounters[response]++;
    }

  }

  printf ("\n\nRating Number of Responses\n");
  printf ("----- --------------------\n");
  for (i = 1; i <= 10; i++) {
      printf ("%4i%14i\n", i, ratingCounters[i]);
  }

  return 0;
}
