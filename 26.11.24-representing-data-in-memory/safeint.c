#include "safeint.h"
#include <limits.h>

struct SafeResult safeadd(long long a, long long b){
    struct SafeResult result;
    result.errorflag = 0;

    if((a+b > INT_MAX) || (a+b < INT_MIN)){
        result.errorflag = 1;
    }
    else{
        result.value = a+b;
    }
    return result;
}


struct SafeResult safesubtract(long long a, long long b){
    struct SafeResult result;
    result.errorflag = 0;
    
    if((a-b > INT_MAX) || (a-b < INT_MIN)){
        result.errorflag = 1;
    }
    else{
        result.value = a-b;
    }
    return result;
}


struct SafeResult safemultiply(long long a, long long b){
    struct SafeResult result;
    result.errorflag = 0;

    if((a*b > INT_MAX) || (a*b < INT_MIN)){

        result.errorflag = 1;
    }
    else{
        result.value = a*b;
    }
    result.value = a*b;
    return result;
}


struct SafeResult safedivide(long long a, long long b){
    struct SafeResult result;
    result.errorflag = 0;
    if((b == 0) || (a/b > INT_MAX) || (a/b < INT_MIN)){
        result.errorflag = 1;
    }
    else{
        result.value = a/b;
    }
    return result;
}


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