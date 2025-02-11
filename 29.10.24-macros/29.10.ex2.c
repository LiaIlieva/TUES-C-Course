#include <stdio.h>

#define COMPARE(A, B) A > B ? A : B

void main(){
    int a = 5, b = 8;
    printf("The bigger number is: %d", COMPARE(a, b));
}