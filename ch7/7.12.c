// transepose matrix
#include <stdio.h>
#include <stdlib.h>

void transeposeMatrix(int** a, int** b, int row, int col) {
    for (int i = 0 ; i < row ; i++ ) {
        for (int j = 0 ; j < col ; j++ ) {
            b[j][i] = a[i][j];
        }
    }
}
int main() {
    void transeposeMatrix(int** a, int** b, int row, int col);
    int row, col; 
    int** a;
    int** b;

    printf("Input row and colum.\n");
    scanf("%i %i", &row, &col);
    
    // int a[row][col], b[col][row];
    b = (int**)malloc(col*sizeof(int *));
    for (int i = 0 ; i < col ; i++) {
        b[i] = (int *)malloc(row*sizeof(int));
    }
    a = (int**)malloc(row*sizeof(int *));
    for (int i = 0 ; i < row ; i++) {
        a[i] = (int *)malloc(col*sizeof(int));
    }

    printf("Input Matrix.\n");
    for (int i = 0 ; i < row ; i++) {
        for (int j = 0 ; j < col ; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    transeposeMatrix(a, b, row, col);

    for (int i = 0 ; i < col ; i++) {
        for (int j = 0 ; j < row ; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0 ; i < col ; i++) {
        free(b[i]);
    }
    free(b);

}
