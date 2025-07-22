// 판별식과 squareRoot() 함수를 이용하여 근 찾기

#include <stdlib.h>
#include <stdio.h>

// convert the value to its absolute value after checking its sign
double absoluteValue (double x) {
    if ( x < 0 ) {
        x = -x;
    }

    return x;
}

// calculate its squareroot 
double squareRoot (double n) {
    double epsilone = 0.00001;
    double absoluteValue (double x);
    double guess1 = 1.0, guess2 = (n + 1.0) / 2.0;


    if (n < 0) {
        printf ("Negative number\n");
        exit(-1);
    }

    while ( absoluteValue((guess2 - guess1) / guess1 ) > epsilone) {
        guess1 = guess2;
        guess2 = ((guess2/n) + guess2) / 2.0;
    }

    return guess2;
}

// discriminant
double discriminant (double a, double b, double c) {
    double cha = b*b - 4*a*c;
    double check = 1.0;
    
    if (cha < 0) {
        printf("It's imaginary number.\n");
        exit(-2);
    }

    return cha;
}

// solve equations using the discriminant
void solve2equation (double a, double b, double c) {
    double discriminant (double a, double b, double c);
    double squareRoot (double n);
    double cha, sr, result1, result2;

    cha = discriminant(a, b, c);
    sr = squareRoot(cha);
    result1 = (-b + sr) / 2*a;
    result2 = (-b - sr) / 2*a;

    printf("%lf %lf", result1, result2);

}

int main () {
    void solve2equation (double a, double b, double c);
    int a, b, c;

    printf ("Enter the coefficient: ");
    scanf ("%i %i %i", &a, &b, &c);
    solve2equation(a, b, c);
    
    return 0;
}
