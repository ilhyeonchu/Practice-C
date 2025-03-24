#include <stdio.h>


int next_multiple(int i, int j);

int main() {

  printf("(365 , 7) => %i\n", next_multiple(365, 7));
  printf("(12,258 , 23) => %i\n", next_multiple(12258, 7));
  printf("(996 , 4) => %i\n", next_multiple(996, 4));

  return 0;
}

int next_multiple(int i, int j) {
  int a = i, b = j;
  
  return i + j - i % j;
}
