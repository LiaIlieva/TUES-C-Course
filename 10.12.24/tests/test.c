#include <stdio.h>

int main(){

    unsigned char x = 11;
    long lm = sizeof(x) * 8 - 1;
    for (int i = lm; i >= 0; i--) {
        long res = (x >> i) & 1;
        printf("%u", res);
        printf("\n");
    }
    printf("\n");

}