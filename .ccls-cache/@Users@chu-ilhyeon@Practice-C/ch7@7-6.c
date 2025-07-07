/* 두 양수의 최대공약수를 계산하고 결과를 변환하는 함수 */

#include <stdio.h>

int gcd (int u, int v) {
    int temp;

    while ( v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int main () {
    int result;

    result = gcd (150, 35);
    printf ("The gcd of 150 and 35 is %i\n", result);

    result = gcd (1025, 405);
    printf ("The gcd of 1026 and 405 is %i\n", result);

    printf("The gcd of 83 and 240 is %i\n", gcd(83,240));

    return 0;
}
