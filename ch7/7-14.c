// 가변 매트릭스

#include <stdio.h>

int main (void) {
    void scalarMultiply (int nRows, int nCols, int matrix[nRows][nCols], int scalar);
    void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);
    int matrix[3][5] = 
    {
        { 7, 16, 55, 13, 12 },
        { 12, 10, 52, 0, 7 },
        { -2, 1, 2, 4, 9 }
    };

    printf ("Original matrix\n");
    displayMatrix(3, 5, matrix);

    scalarMultiply(3, 5, matrix, 2);

    printf ("\nMultiplied by 2:\n");
    displayMatrix(3, 5, matrix);

    scalarMultiply(3, 5, matrix, -1);

    printf ("\nThen multiplied by -1:\n");
    displayMatrix(3, 5, matrix);

    return 0;
}

// 매트릭스 각 값에 스칼라 곱하기
void scalarMultiply (int nRows, int nCols, int matrix[nRows][nCols], int scalar) {
    int i, j;

    for ( i = 0 ; i < nRows ; i++ ) {
        for ( j = 0 ; j < nCols ; j++ ) {
            matrix[i][j] *= scalar;
        }
    }
}

// 매트릭스 출력
void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]) {
    int i, j;

    for ( i = 0 ; i < nRows ; i++ ) {
        for ( j = 0 ; j < nCols ; j++ ) {
            printf ("%5i", matrix[i][j]);
        }
        printf("\n");
    }
}
