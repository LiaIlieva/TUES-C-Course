#include <stdio.h>

typedef unsigned long long ull;
typedef ull (*Func)(ull, ull);

ull reduce(ull arr[], Func func, ull arr_length, ull start_value){
    ull result = start_value;
    for (int i = 0; i < arr_length; i++)
    {
        result = func(result, arr[i]);
        printf("result: %llu", result);
    }
    return result;
}

ull add(ull a, ull b){
    return a+b;
}

int main(){

    ull arr [] = {1, 2, 3};
    ull arr_length = sizeof(arr)/sizeof(arr[0]);
    printf("arr_len: %llu", arr_length);
    printf("Result %llu", reduce(arr, add, arr_length, 0));
    return 0;
}