#include <stdio.h>

int main(void) {
    int num = 7;
    int *ptr = &num;

    printf("ptr-1 : %p \n", (void*)(ptr - 1));
    printf(" ptr  : %p \n", (void*)ptr);
    printf("ptr+1 : %p \n\n", (void*)(ptr + 1));

    printf("size of data type : %zu\n\n", sizeof(num));

    return 0;
}