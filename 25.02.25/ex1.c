#include <stdio.h>

int findSize(char arr[]){

    char * p = arr;
    while (*p != '\0')
    {
        p++;
    }

    return p - arr;
}

int main() {
    
    char name [10] = "Pesho";

    int size = findSize(name);

    printf("Size: %d", size);
    
    return 0;
}