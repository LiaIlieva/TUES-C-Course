#include <stdio.h>

#define SWAP(A, B, TYPE){\
    TYPE num = A; \
    A = B; \
    B = num; \
}

void main(){
    int a = 5, b = 6;
    SWAP(a, b, int);
    printf("%d, %d", a, b);
}