#include <stdio.h>

void swap(void* p1, void* p2){
    int * P1 = p1;
    int * P2 = p2;
    int a = *P1;
    *P1 = *P2;
    *P2 = a;
}

int main() {
    int a, b;
    printf("Enter first double number: ");
    scanf("%d", &a);
    printf("Enter second double number: ");
    scanf("%d", &b);

    void * p1 = &a;
    void * p2 = &b;
    swap(p1, p2);
    printf("the first number=%d, \n the second number=%d", a, b);
    return 0;
}