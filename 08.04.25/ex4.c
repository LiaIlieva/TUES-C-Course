#include <stdio.h>

typedef unsigned long long ull;
typedef ull (*Func)(ull, ull);

union un
{
    long odd;
    short even;
};


int main(){

    union un arr_unions [10];
    int arr_size = sizeof(arr_unions)/sizeof(union un);
    for (int i = 0; i < arr_size; i++)
    {
        if ((i % 2 == 0)|| (i == 0))
        {
            arr_unions[i].even = i;
        }
        else{
            arr_unions[i].odd = i;
        }
        
    }

    
    printf("(odd):\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            printf("Index %d -> odd = %ld\n", i, arr_unions[i].odd);
        }
    }

    
    printf("(even):\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("Index %d -> even = %d\n", i, arr_unions[i].even);
        }
    }
    
    
    return 0;
}