// 2-D array multiple

#include <stdio.h>

int main(void) {
    void scalarMultiply (int array[3][5], int n);
    void displayMultiply (int array[3][5]);
    int array[3][5] = { { 7, 16, 55, 13, 12 },
                        { 12, 10, 52, 0, 7 },
                        { -2, 1, 2, 4, 9 } };
    
    printf ("Original :\n");
    displayMultiply(array);

    scalarMultiply(array, 2);

    printf("\nMultiplied by 2:\n");
    displayMultiply(array);

    scalarMultiply(array, -1);
    printf("\nThen multiplied by -1:\n");
    displayMultiply(array);

    return 0;
}

/* (3,5) 행렬에 n 값 곱하기 */
void scalarMultiply(int array[3][5], int n) {
    int i, j;

    for ( i = 0 ; i < 3 ; i++ ) {
        for ( j = 0 ; j < 5 ; j++ ) {
            array[i][j] *= n;
        }
    }
}

// 3,5 행렬 출력 하나의 요소마다 5자리로
void displayMultiply (int array[3][5] ) {
    int i, j;

    for ( i = 0 ; i < 3 ; i++ ) {
        for ( j = 0 ; j < 5 ; j++ ) {
            printf ("%5i ", array[i][j]);
        }

        printf ("\n");
    }
}
