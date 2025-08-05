// sort

#include <stdio.h>

void sort (int array[], int n, int w)
{
    int i, j, d;
    if (w == 1) {
        for ( i = 0 ; i < n ; i++ ) {
            for ( j = i + 1 ; j < n ; j++ ) {
                if ( array[j] < array[i] ) {
                    d = array[j];
                    array[j] = array[i];
                    array[i] = d;
                }
            }
        }
    } else {
        for (i = 0 ; i < n ; i++) {
            for (j = i + 1 ; j < n ; j++) {
                if (array[j] > array[i]) {
                    d = array[j];
                    array[j] = array[i];
                    array[i] = d;
                }
            }
        }
    }
}

int main ()
{
    int i, w;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                    44, -3, -9, 12, 22, 17, 6, 11 };
    void sort (int array[], int n, int w);

    printf ("The array before the sort:\n");

    for ( i = 0; i < 16; i++ )
        printf ("%i ", array[i]);
    printf("\n");
    
    printf("Upper: 1, Down: 0\n");
    scanf("%i", &w);

    sort(array, 16, w);

    printf ("\n\nThe array after the sort:\n");

    for ( i = 0 ; i < 16; i++ )
        printf ("%i ", array[i]);
    
    printf("\n");
    return 0;
}
