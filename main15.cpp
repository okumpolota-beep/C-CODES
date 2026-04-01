#include <stdio.h>

void addNumber(int *ptr) {   
    int i = 0;
    for (i = 0; i < 10; i++) {
        ptr[i] += 100;
    }
}

int main(void) {
    int i = 0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf(">> Before function call <<\n");
    for (i = 0; i < 10; i++) {
        printf("%4d", arr[i]);
    }

    printf("\n\n");

    addNumber(arr);

    printf(">> After function call <<\n");
    for (i = 0; i < 10; i++) {
        printf("%4d", arr[i]);
    }

    printf("\n");

    return 0;
}