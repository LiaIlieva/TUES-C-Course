#include <stdio.h>
#include <stdbool.h>    

#define ARR_SIZE 6

#define SWAP(A, B, TYPE){\
    TYPE num = A; \
    A = B; \
    B = num; \
}

#define SORT(ARRAY, SIZE, TYPE, COMPARE){\
    bool operation = true;\
    while(operation)\
    {\
        operation = false;\
        for (TYPE i = 0; i < SIZE-1; i++)\
        {\
            if (ARRAY[i] COMPARE ARRAY[i+1])\
            {\
                SWAP(ARRAY[i], ARRAY[i+1], TYPE);\
                operation = true;\
            }\
        }\
    }\
}

void main(){
    int arr[ARR_SIZE] = {1, 2, 67, 4, 50, 6};
    SORT(arr, ARR_SIZE, int, <);

    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
}