#include <stdio.h>

#define ARR_SIZE 5

void swap(int * a, int * b){
    int p = *a;
    *a = *b;
    *b = p;
}


int sort(int * arr, int size){

    int action = 1;
    while (action)
    {
        action = 0;
        for (int i = 0; i < size - 1; i++)
        {
            if (*(arr + i) > *(arr + i + 1))
            {
                swap((arr + i), (arr + i + 1));
                action = 1;
            }
            
        }
        
    }
    

    return 0;
}


int main() {
    
    int arr [ARR_SIZE] = {1, 4, 2, 14, 3};

    sort(arr, ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("arr[%d]: %d, ", i, arr[i]);
    }
    
    
    return 0;
}