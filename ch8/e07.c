// example about using array and structure

#include <stdio.h>

int main() {
    int i;
    
    struct month {
        int numberofDays;
        char name[3];
    };
    
    const struct month months[12] = {
        { 31, {'J', 'a', 'n'} }, { 28, {'F', 'e', 'b'} },
        { 31, {'J', 'a', 'n'} }, { 30, {'F', 'e', 'b'} },
        { 31, {'J', 'a', 'n'} }, { 30, {'F', 'e', 'b'} },
        { 31, {'J', 'a', 'n'} }, { 31, {'F', 'e', 'b'} },
        { 30, {'J', 'a', 'n'} }, { 31, {'F', 'e', 'b'} },
        { 30, {'J', 'a', 'n'} }, { 31, {'F', 'e', 'b'} }
    };
    
    printf ("Month Number of Days\n");
    printf("---- ----------------\n");
    
    for (i = 0; i < 12; i++) {
        printf (" %c%c%c          %i\n",
                months[i].name[0], months[i].name[1],
                months[i].name[2], months[i].numberofDays);
    }
    return 0;
}
