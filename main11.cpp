#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 50;
    int *const ptr = &num1;   

    *ptr = 40;                

    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}