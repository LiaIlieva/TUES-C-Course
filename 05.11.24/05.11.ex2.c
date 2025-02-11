#include <stdio.h>

// #define ARRAY_SIZE 10

void main(){
    #if defined ARRAY_SIZE && ARRAY_SIZE > 0 && ARRAY_SIZE < 11
    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        arr[i] = 1 << i;
        printf("%d ", arr[i]);
    }
    #else
    printf("The array size is not available");
    #endif
}