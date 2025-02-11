#include <stdio.h>
#include <math.h>

void printArr(long arr[], int size){

    for (int j = 0; j < size; j++) {
        printf("%ld ", (long)arr[j]);
    }
    printf("\n");
}

int main(){
    
    long arr[] = {12, 45, 17, 86, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The initial array: \n");
    printArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        arr[i] = pow(arr[i], 4);
    }
    
    printf("The final array: \n");
    printArr(arr, size);

    return 0;
}

// int size;

// printf("Enter the size of the array: ");
// scanf("%d", &size);

// if (size <= 0) {
//     printf("Invalid size. Size should be a positive integer.\n");
//     return 1;
// }

// long arr[size];