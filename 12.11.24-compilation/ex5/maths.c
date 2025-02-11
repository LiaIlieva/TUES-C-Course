//implements
#include "maths.h"

// 5! = 5 * 4 * 3 * 2 * 1
int findFact(int num){
    int result = 1;
    for (int i = 1; i < num; i++)
    {
        result *= i;
    }
    
    return result;
}