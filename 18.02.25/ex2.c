#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    char a;
    printf("Enter the string: ");
    fgets(str, 90, stdin);
    printf("You entered: %s", str);

    printf("Enter the char to search: ");
    scanf("%c", &a);
    char *Ptr = strchr(str, a);
    if(Ptr == NULL){
        printf("Doesnt exist!");
    }
    else{
        printf("The pointer to the char %c is %p", *Ptr, Ptr);
    }


   // fgets string, strchr new line, remove
    return 0;
}