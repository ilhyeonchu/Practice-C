// 배열 내의 값 가운데 최솟값을 구하는 함수

#include <stdio.h>

int minimum (int values[], int numberOfElements)
{
    int minValue, i;
    minValue = values[0];
    
    for ( i = 1; i < numberOfElements; i++ )
        if ( values[i] < minValue )
            minValue = values[i];

    return minValue;
}

int main()
{
    int array1[5] = { 157, -28, -37, 26, 10 };
    int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
    int minimum (int values[], int numberOfElements);

    printf ("array1 minimum: %i\n", minimum (array1, 5));
    printf ("array2 minimum: %i\n", minimum (array2, 7));

    return 0;
}
