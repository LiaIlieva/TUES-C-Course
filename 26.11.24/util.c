#include "util.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h> //for strtoll
#include <errno.h>  // for errno

void printError(){
    printf("Error: The arguments exceed the allowable values. ");
}

long long convertToll(char str[]){
    char *endpr;
    errno = 0;

    long long num = strtoll(str, &endpr, 10);
    if(errno == ERANGE){
        printf("hi1 ");
        printError();
        return 1;
    }

    return num;
}

int isValid(long long num){

    if(num > INT_MAX || num < INT_MIN){
        return 1;
    }
    else{
        return 0;
    }
}