#include <limits.h>
#include <stdio.h>
#include <stdlib.h> //for strtoll
#include <errno.h>  // for errno

struct SafeResult
{
    int value;
    int errorflag;
};

struct SafeResult safestrtoint(char a[]){
    struct SafeResult result;
    result.errorflag = 0;
    
    int i = 0;
    long long res;
    if(a[i] >= '0' && a[i] <= '9'){
        res = a[i] - '0';
        i++;
        while(a[i] != '\0'){
            if(res > INT_MAX || res < INT_MIN || (a[i] <= '0' || a[i] >= '9')){
                result.errorflag = 1;
                result.value = res;
                return result;
            }
            res = res*10 + (a[i]- '0');
            i++;
        }
        
    }
    result.value = res;
    return result;
}

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

int main(){

   char *argc[] ={
    "program_out",
    "23bg5",
    "45",
    NULL,
   };

   struct SafeResult result = safestrtoint(argc[1]);
   if(result.errorflag == 1){
        printError();
        printf("the result is: %d", result.value);
        return 1;
    }

    printf("the result is: %d", result.value);
    return 0;

}