#include <stdio.h>

#define ARR_COLS 4
#define ARR_ROWS 2

void printAsTable(int (*arr)[ARR_COLS], int rows){
    // print arr as table
    for (int i = 0; i < ARR_ROWS; i++)
    {
        for (int j = 0; j < ARR_COLS; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }

        printf("\n");
    }
    

}


int main() {
    
    int arr[ARR_ROWS][ARR_COLS] = {
        {1, 2, 3, 12}, 
        {4, 5, 6, 13}
    };

    printAsTable(arr, ARR_ROWS);
    return 0;
}