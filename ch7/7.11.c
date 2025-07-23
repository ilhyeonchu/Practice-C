// input int array and length then return sum

#include <stdio.h>
#include <stdlib.h>
int arraySum (int* array, int len) {
    int sum, i;
    sum = array[0];

    for (i = 1 ; i < len ; i++) {
        sum += array[i];
    }

    return sum;
}

int main () {
    int len, result;
    int* array;
    int arraySum (int* array, int len);
    
    printf("Enter length of array: ");
    scanf("%i", &len);

    array = malloc(sizeof(int)*len);
    printf("Enter number: ");

    for (int i = 0 ; i < len ; i++) {
        scanf("%i", &array[i]);
    }
    
    for (int i = 0 ; i < len ; i++) {
        printf("%i ", array[i]);
    }
    result = arraySum(array, len);
    printf("%i\n", result);

    return 0;
    
}
