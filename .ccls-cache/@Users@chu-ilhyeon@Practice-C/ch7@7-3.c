#include <stdio.h>

void printMessage() {
    printf("Programming is fun.\n");
}

int main() {
    int i;

    for (i = 1; i <= 5; i++)
        printMessage();

    return 0;
}
