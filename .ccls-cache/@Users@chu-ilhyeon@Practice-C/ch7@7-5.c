// 양의 두 정수에 대한 최대공약수를 구하는 프로그램 

#include <stdio.h>

void gcd (int u, int v) {
    int temp;

    printf ("The gcd of %i and %i is ", u, v);

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    printf ("%i\n", u);
}

int main () {
    gcd (150, 35);
    gcd(1026, 405);
    gcd(83, 240);

    return 0;
}
