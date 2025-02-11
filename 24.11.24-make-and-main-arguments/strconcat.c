#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    if(argc != 3){
        printf("The arguments need to be 2!");
        return 1;
    }
    
    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("Error: Strings must not be more than 50 characters.\n");
        return 1;
    }

    strconcat(argv[1], argv[2]);
    
    printf("str1: \"%s\", str2: \"%s\".\n", argv[1], argv[2]);
    
    return 0;
}