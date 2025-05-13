#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

void printMenu() {
    printf("---MENU---\n");
    printf("1. Add donor\n");
    printf("2. Remove donor\n");
    printf("3. Show donors' EGN\n");
    printf("4. Exit\n");
}


void printDynArr(DynamicArray * dynArr) {
    for (int i = 0; i < dynArr->size; i++) {
        printf("%u ", dynArr->buffer[i]);
    }
    printf("\n");
}
  
int main() {
  
    DynamicArray EGN_donors = init(1);
    
    int choice = 0;
    while(1){
        printMenu();
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:{
                DynArrType newDonor;
                printf("Enter EGN of the donor: ");
                scanf("%d", &newDonor);
                pushBack(&EGN_donors, newDonor);
                break;
            }
            case 2:{
                DynArrType donor;
                printf("Enter EGN of the donor to remove: ");
                scanf("%d", &donor);
                int index = findElementByValue(&EGN_donors, donor);
                if (index != -1){
                    pop(&EGN_donors, index);
                }
                else{printf("Invalid EGN!");}
                break;
            }
            case 3:
                printDynArr(&EGN_donors);
                break;
            case 4:
                release(&EGN_donors);
                exit(0);
            
            default:

                break;
        }
    }
    return 0;
}