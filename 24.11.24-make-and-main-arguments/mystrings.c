#include "mystrings.h"
#include <string.h>
#include <stdlib.h>

int strlength(char *str){
    return strlen(str);
}

void strconcat(char *str1, char *str2){
    strcat(str1, str2);
}

int strcompare(char *str1, char *str2){
    int result = strcmp(str1, str2);
    if (result < 0) return -1;
    if (result > 0) return 1;
    return 0;
}
