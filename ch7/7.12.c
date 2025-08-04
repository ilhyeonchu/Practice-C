// transepose matrix
#include <stdio.h>

void transeposeMatrix(int a[4][5], int b[5][4]) {
    for (int i = 0 ; i < 4 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            b[j][i] = a[i][j];
        }
    }
}

int main() {
    void transeposeMatrix(int a[4][5], int b[5][4]);
    int a[4][5], b[5][4];
    
    printf("Input 4*5 Matrix.\n");
    for (int i = 0 ; i < 4 ; i++) {
        scanf("%i %i %i %i %i", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
    }

    transeposeMatrix(a, b);

    for (int i = 0 ; i < 5 ; i++) {
        printf("%i %i %i %i \n", b[i][0], b[i][1], b[i][2], b[i][3]);
    }

}
