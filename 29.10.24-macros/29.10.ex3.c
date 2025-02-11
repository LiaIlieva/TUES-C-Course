#include <stdio.h>

#define INFO(A) #A, A, __FILE__, __LINE__

void main(){
    int number = 56;
    printf("Name: %s, value: %d, file: %s, line: %d", INFO(number));
}