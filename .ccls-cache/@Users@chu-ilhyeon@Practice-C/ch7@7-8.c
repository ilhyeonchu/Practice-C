// 주어진 수의 절댓값을 계산하는 함수

#include <stdio.h>
#include <time.h>

double absoluteValue (float x) {
    if ( x < 0 )
        x = -x;
    
    return x;
}

double squreroot (float x) {
    const double epsilon = 0.000000001;
    double guess = 1;
    double absoluteValue (float x);    
    if ( x < 0 )
    {
        printf ("Negative argument to squareRoot.\n");
        return -1.0;
    }
    while( !(absoluteValue (guess*guess - x) < epsilon) ) {
        guess = (x/guess + guess) / 2;
    } 
    return guess;
}
int main() {
    clock_t start, end;
    double result1, result2, result3;
    
    start = clock();

    result1 = squreroot(2.0);
    result2 = squreroot(144.0);
    result3 = squreroot(17.5);

    // 시간 측정 끝
    end = clock();

    // 결과 출력
    printf("squreroot (2.0) = %f\n", result1);
    printf("squreroot (144.0) = %f\n", result2);
    printf("squreroot (17.5) = %f\n", result3);

    // 시간 출력
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Elapsed calculation time = %.9f seconds\n", elapsed);
    /*printf ("squreroot (2.0) = %f\n", squreroot(2.0));
    printf ("squreroot (144.0) = %f\n", squreroot(144.0));
    printf ("squreroot (17.5) = %f\n", squreroot(17.5));*/
    
    return 0;
}
