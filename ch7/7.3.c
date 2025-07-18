// 제곱근의 유사값을 구하는 프로그램

#include <stdio.h>


// 절대값 반환
double absoluteValue (double x) {
    if ( x < 0 )
        x = -x;

    return x;
}

/**
    *@brief 제곱근 구하기
    *@param x 제곱근을 구하고 싶은 수
    *@param e 사용할 epsilon
    */
double squareroot (double x, double e) {
    double guess = 1.0;
    double epsilon = e;
    double absoluteValue (double x);

    if ( x < 0 ) {
        printf ("Negative argument to squareRoot.\n");
        return -1.0;
    }

    while ( absoluteValue(guess*guess - x) >= epsilon ) {
        guess = (x/guess + guess) / 2.0;
    }

    return guess;
}

int main() {
    double inputNumber, result, epsilon;
    double squareroot (double x, double e);

    printf ("Enter the number: ");
    scanf ("%lf", &inputNumber);
    
    printf ("Enter the epsilon: ");
    scanf ("%lf", &epsilon);

    result = squareroot(inputNumber, epsilon);

    printf ("Square Root %lf is %lf\n", inputNumber, result);
}
