// sort

#include <stdio.h>

void sort (int array[], int n)
{
    int i, j, d;

    for ( i = 0 ; i < n ; i++ ) {
        for ( j = i + 1 ; j < n ; j++ ) {
            if ( array[j] < array[i] ) {
                d = array[j];
                array[j] = array[i];
                array[i] = d;
            }
        }
    }
}

int main ()
{
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                    44, -3, -9, 12, 22, 17, 6, 11 };
    void sort (int array[], int n);

    printf ("The array before the sort:\n");

    for ( i = 0; i < 16; i++ )
        printf ("%i ", array[i]);

    sort(array, 16);

    printf ("\n\nThe array after the sort:\n");

    for ( i = 0 ; i < 16; i++ )
        printf ("%i ", array[i]);
    
    printf("\n");
    return 0;
}
