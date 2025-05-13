#include <stdio.h>
#include "ex4_fuctions.c"


int main() {
    int a, b;
    printf("Enter first int number: ");
    scanf("%d", &a);
    printf("Enter second int number: ");
    scanf("%d", &b);

    const void * const p1 = &a;
    const void * const p2 = &b;
    int num = compareasc (p1, p2);
    int num2 = comparedesc (p1, p2);
    printf("Result from compareasc function: %d", num);
    printf("\nResult from comparedesc function: %d", num2);
    return 0;
}