// 비율로 바꾼 square root 구하기


#include <stdio.h>
#include <stdlib.h>

/**
    *@brief 제곱근 구하기
    *@param n inputNum
    *@param e epsilone
*/ 
double squareRoot (double n, double e) {
    double epsilone = e;
    double guess1, guess2, dump;
    int count = 0;
    double absoluteValue (double x);
    
    if ( n < 0 ) {
        printf ("Negative argument to square root\n");
        exit(0);
    }
    
    guess2 = ( n + 1.0 ) / 2.0;
    guess1 = 1.0;
    while ( absoluteValue( (guess2 - guess1) / guess1 ) >= epsilone ) {
        dump = guess2;
        guess2 = (n / guess2 + guess2) / 2.0;
        guess1 = dump;
        count++;
        //printf ("%i guess %lf", count, guess);
    }
    
    return guess2; 
}

// 절대값 구하기
double absoluteValue (double x) {
    if ( x < 0 ) {
        x = -x;
    }
    return x;
}

int main () {
    double inputNum, epsilone, result;
    double squareRoot (double n, double e);

    printf ("Enter Number: ");
    scanf ("%lf", &inputNum);

    printf ("Enter epsilone: ");
    scanf("%lf", &epsilone);

    result = squareRoot(inputNum, epsilone);

    printf ("%lf square root is %lf", inputNum, result);
}
