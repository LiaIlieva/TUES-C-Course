#include <stdio.h>

#define DEBUG
void printArray(int arr[], int size){
    int op = 1;
    while (op != 0)
    {
        op = 0;
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a;
                op = 1;
            }
            
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for (int i = 1; i < size; i++)
    {
        if (i % 3 == 0)
        {
            sum += arr[i];
            
            #ifdef DEBUG
            printf("\nOnly the elements with an index which can be divided by 3: ");
            printf("%d ", arr[i]);
            #endif
        }
    }
    printf("\nThe sum: %d ", sum);
}

void main(){
    int arr[5] = {8, 25, 13, 4, 3};
    int size = 5;

    printArray(arr, size);
    
}