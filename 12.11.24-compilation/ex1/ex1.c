#include <stdio.h>

#define FUNC(A, B) ((A) + (B)) * ((A) + (B))

void main(){

    printf("%d", FUNC(2, 3));
}