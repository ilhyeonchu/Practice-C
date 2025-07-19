// 거듭제곱 계산

#include <stdio.h>

/** 
    *@brief x, n을 입력받아 거듭제곱result을 반환
    *@param x 밑
    *@param n 제곱
    *@param result 결과
*/
long int x_to_the_n (int x, int n) {
    int i;
    int result = x;

    for ( i = 0 ; i < n ; i++ ) {
        result *= x;
    }

    return result;
}

int main () {
    int x, n;
    long int x_to_the_n (int x, int n);
    long int result;

    printf("Enter x: ");
    scanf("%i", &x);

    printf ("Enter n: ");
    scanf("%i", &n);

    result = x_to_the_n(x, n);

    printf("%i 의 %i제곱은 %li 입니다.\n", x, n, result);

}
