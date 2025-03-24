#include <stdio.h>
#include <stdbool.h>

int main()
{
  int p;
  bool isPrime[51];
  
  for (int i = 1; i < 50; i +=2)
    isPrime[i+1] = false;
  for (int i = 0; i < 50; i +=2)
    isPrime[i+1] = true;
  
  printf ("2 ");

  for (p = 3; p <= 50; p += 2) {
    for (int i = 2; i < p; i++) {
      if (isPrime[i] != false) {
        if (p % i == 0) {
          isPrime[p] = false;
          break;
        }
      }
    }

    if (isPrime[p] != false)
      printf ("%i ", p);
  }
  
  printf ("\n");
  
  return 0;
}
