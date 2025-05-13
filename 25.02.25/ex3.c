#include <stdio.h>


void strhalf(char * arr, char ** arr2){
    char * p = arr;

    int len = 0;
    while (*(p++) != '\0')
    {
        len++;
    }
    printf("length: %d", len);
    *arr2 = arr + (len / 2);

}


int main() {
    
    char town [] = "Sofia";
    
    char * pointer = town;
    printf("The new word: %c\n", *pointer);

    strhalf(town, &pointer);

    printf("The new word: %s\n", pointer);
   

    return 0;
}