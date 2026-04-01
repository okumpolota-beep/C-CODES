#include <stdio.h>

void func1(void) {
    printf("func1 was called! \n");
}

void func2(void) {
    printf("func2 was called! \n");
}

void (*whatFunction(int sel))(void) {
    if (sel == 1)
        return func1;
    else if (sel == 2)
        return func2;
    else
        return NULL;   
}

int main(void) {
    void (*fPtr)(void);
    fPtr = whatFunction(1);   
    fPtr();                   
    fPtr = whatFunction(2);   
    fPtr();                   
    printf("\n");
    return 0;
}