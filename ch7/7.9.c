// calculate least common multiple 

#include <stdio.h>

// calculate gcd
int gcd (int u, int v) {
    int temp;
    
    if (u < v) {
        temp = u;
        u = v;
        v = temp;
    }

    while (v != 0) { 
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

//calculate least common multiple using gcd
int lcm (int u, int v) {
    int result;
    int gcd (int u, int v);

    result = u * v / gcd(u, v);

    return result;
}

int main () {
    int u, v, result;
    int lcm (int u, int v);

    printf("Enter number: ");
    scanf("%i %i", &u, &v);

    result = lcm(u, v);
    printf("lcm(%i %i) is %i\n", u, v, result);

    return 0;
}
