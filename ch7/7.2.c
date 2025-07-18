// calculate triangular number

#include <stdio.h>

/**
    *@brief 인자를 받아서 해당 삼각수를 구해서 반환하는 함수
    *@param a 원하는 삼각수
    */
int calculateTriangularNumber (int a) {
    int result = 0;
    int i;

    for ( i = 0 ; i < a + 1 ; i++ ) {
        result += i;
    }

    return result;
}

int main () {
    int calculateTriangularNumber (int a);
    int inputNumber, outputNumber;

    printf ("What triangular number do you want? ");
    scanf ("%i", &inputNumber );

    outputNumber = calculateTriangularNumber(inputNumber);

    printf ("Triangular number %i is %i\n", inputNumber, outputNumber);
}
