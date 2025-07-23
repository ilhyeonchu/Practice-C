// check prime

#include <stdio.h>

int prime (int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    if (n == 3) return 1;
    if (n % 3 == 0) return 0;

    /* 
        int sqrt_n = (int)sqrt(n);
        for (int i = 5 ; i < sqrt_n ; i += 2) {
            if (n % i == 0) return 0;
        }
        
        return 1;
    */

    for (int i = 5 ; i*i <= n ; i += 6) {
        if (n % i == 0 || n % i == 2) return 0;
    }

    return 1;
}

int main () {
    int prime (int n);
    int input, result;

    printf("Enter number: ");
    scanf("%i", &input);

    result = prime(input);

    printf("%i\n", result);

    return 0;
}
