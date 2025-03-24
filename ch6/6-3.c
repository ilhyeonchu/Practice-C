//  최초 15개의 피보나치 수열을 만들기 위한 프로그램

#include <stdio.h>

int main()
{
    int Fibonacci[15], i;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i =2; i < 15; i++) {
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }

    for (i = 2; i < 15; i++) {
        printf ("%i\n", Fibonacci[i]);
    }

    return 0;
}

