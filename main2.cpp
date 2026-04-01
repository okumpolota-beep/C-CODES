#include <stdio.h>

int main(void) {
    char c = 'a';
    printf("c : %c \n", c);
    printf("Address of c : %p \n\n", (void*)&c);
    return 0;
}