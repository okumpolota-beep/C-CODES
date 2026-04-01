#include <stdio.h>

int main(void) {
    int num = 100;
    void *ptr = &num;
    printf("%d \n", *(int *)ptr);  
    return 0;
}