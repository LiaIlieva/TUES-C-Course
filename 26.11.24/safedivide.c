#include "safeint.h"
#include "util.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char **argc){

    long long num1 = convertToll(argc[1]);
    long long num2 = convertToll(argc[2]);

    if(isValid(num1) || isValid(num2)){
        printError();
        return 1;
    }

    struct SafeResult result = safedivide(num1, num2);
    if(result.errorflag == 1){
        printError();
        return 1;
    }

    printf("the result is: %d", result.value);
    return 0;
}