#include <stdio.h>

int main()
{
  int n = 150;
  int P[151];
  
  for (int i = 0 ; i < n+1 ; i++)
    P[i] = 0;

  int i = 2;
  
  while (i <= n) {
    int j = i;
    
    while (i*j <= n) {
      P[i*j] = 1;
      j++;
    }

    i++;
  }

  for (int k = 2 ; k < n+1 ; k++) {
    if (P[k] == 0)
      printf ("%d ", k);
  }

  printf ("\n");

  return 0;
}
