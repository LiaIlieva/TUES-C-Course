#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc != 2){
        printf("The argument needs to be 1!");
        return 1;
    }
    
    int result = strlen(argv[1]);

    printf("the length is: %d\n", result);
    
    return 0;
}