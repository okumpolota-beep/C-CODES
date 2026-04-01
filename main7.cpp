#include <stdio.h>

int main(void) {
    int num = 7;
    int *ptr = NULL;
    int **dptr = NULL;

    ptr = &num;
    dptr = &ptr;

    printf("dptr-1 : %p \n", (void*)(dptr - 1));
    printf(" dptr  : %p \n", (void*)dptr);
    printf("dptr+1 : %p \n\n", (void*)(dptr + 1));

    printf("size of data type : %zu\n\n", sizeof(ptr));

    return 0;
}