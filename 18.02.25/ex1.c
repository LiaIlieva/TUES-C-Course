#include <stdio.h>

int main() {
    double a, b;
    printf("Enter first double number: ");
    scanf("%ld", &a);
    printf("Enter second double number: ");
    scanf("%ld", &b);

    double * pointer1 = &a;
    double * pointer2 = &b;

    printf("pointer1: %p, value: %ld\n", pointer1, *pointer1);
    printf("pointer2: %p, value: %ld", pointer2, *pointer2);
    return 0;
}