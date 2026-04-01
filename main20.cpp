#include <stdio.h>

int main(void) {
    int num = 20;
    const int *ptr = &num;

    num = 40;   

    printf("num = %d\n", num);
    return 0;
}