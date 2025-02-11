#include <stdio.h>

int main(){
    int a = 12, b = 18;
    if (b < a)
    {
        a = b + a;
        b = a - b;
        a = a - b;
        
    }

    int minDel = a;
    while (minDel <= a * b)
    {
        if (minDel % b == 0)
        {
            break;
        }
        
        minDel += a;
    }
    
    printf("%d", minDel);
    return 0;
}