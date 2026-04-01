#include <stdio.h>

int main(void) {
    int tmp[5] = {1, 2, 3, 4, 5};   
    int *arr = tmp + 4;

    printf("%d\n\n", *(arr - 2));   

    return 0;
}