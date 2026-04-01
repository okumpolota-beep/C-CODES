#include <stdio.h>

void funcOne(void){
    printf("funcOne was called!\n");
} // end of funcOne

void funcTwo(void){
    printf("funcTwo was called!\n");
} // end of funcTwo

int main(void){
    funcOne();
    funcTwo();

    printf("Address of funcOne: %p\n", (void*)funcOne);
    printf("Address of funcTwo: %p\n", (void*)funcTwo);

    return 0;
} // end of main