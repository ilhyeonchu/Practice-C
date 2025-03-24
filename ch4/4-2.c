#include <stdio.h>

int main() {
  int triangulars = 0;
  
  for(int i = 1; i <= 200; i++) {
    triangulars += i;
  }
  
  printf("The 200th triangular number is %i\n", triangulars);
  
  return 0;
}
