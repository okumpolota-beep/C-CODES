#include <stdio.h>

int main(void) {
    char c = 'a';
    char *ptr = NULL;
    char **dptr = NULL;
    ptr = &c;
    dptr = &ptr;

    printf("dptr-1 : %p \n", (void*)(dptr - 1));
    printf(" dptr  : %p \n", (void*)dptr);
    printf("dptr+1 : %p \n\n", (void*)(dptr + 1));

    printf("size of data type : %zu\n", sizeof(ptr));

    return 0;
}