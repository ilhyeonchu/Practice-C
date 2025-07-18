// 비율로 바꾼 square root 구하기

/**
    *@brief 제곱근 구하기
    *@param n inputNum
    *@param e epsilone
*/ 
double squareRoot (double n, double e) {
    double epsilone = e;
    double guess;
    int count = 0;
    double absoluteValue (double x);
    
    if ( n < 0 ) {
        printf ("Negative argument to square root");
        return -1.0;
    }

    while ( absoluteValue( n/guess - 1 ) >= epsilone ) {
        guess = (n / guess + guess) / 2.0;
        count++;
        printf ("%i guess %lf", count, guess);
    }
    
    return guess; 
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
    scanf("lf", &epsilone);

    result = squareRoot(inputNum, epsilone);

    printf ("%lf square root is %lf", inputNum, result);
}
