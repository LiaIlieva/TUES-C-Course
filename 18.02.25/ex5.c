#include <stdio.h>
#include "ex4_fuctions.c"

void bubblesort(int arr[], int n, int(*compare)(const void * const, const void * const), void(*swapelements)(void*, void*)){
    int op = 1;
    while(op){
        op = 0;
        for (int i = 0; i < n-1; i++)
        {
            void * p1 = &(arr[i]);
            void * p2 = &(arr[i+1]);

            if (compare(p1, p2))
            {
                swapelements(p1, p2);
                op = 1;
            }
            
        }
    }
    
}

int compare(const void * const p1, const void * const p2){
    const int * const P1 = p1;
    const int * const P2 = p2;
    
    if(*P1 > *P2){
        return 1;
    }
    else{
        return 0;
    }
}

void swapelements(void* p1, void* p2){
    int * P1 = p1;
    int * P2 = p2;
    int a = *P1;
    *P1 = *P2;
    *P2 = a;
}

int main() {
    int arr[] = {1, 3, 12, 2, 35, 11, 8, 90, 1, 10, 34, 23, 12};

    bubblesort(arr, 13, compare, swapelements);
    for (int i = 0; i < 13; i++)
    {
        printf("%d ", arr[i]);
    }

    int arr2[] = {1, 3, 12, 2, 35, 11, 8, 90, 1, 10, 34, 23, 12};

    bubblesort(arr2, 13, compareasc, swapelements);
    bubblesort(arr2, 13, comparedesc, swapelements);
    
    return 0;
}