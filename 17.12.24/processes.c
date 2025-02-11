#include "processes.h"
#include <string.h>
#include <stdio.h>

int processescount = 0;
struct Process processes[5];
static int generate_ID = 1;

static unsigned int nextprocessid(){
    if (processescount >= 5) {
        return 0;
    }

    generate_ID *= 2;
    int new_ID = (processescount+1) * generate_ID;
    int unique = 1;
    do{
        for (int i = 0; i < processescount; i++)
        {
            if(new_ID == processes[i].ID){
                unique = 0;
            }
        }
    }while(unique = 0);
    
    return new_ID;
    
}

unsigned int createnewprocess(char *name_product){
    if(strlen(name_product) <= 30){
        unsigned int ID = nextprocessid();
        if(ID){
            struct Process p1;
            p1.ID = ID;
            strcpy(p1.name, name_product);
            processes[processescount] = p1;
            processescount++;
            return ID;
        }
    }
    else{
        printf("The given name is over 30 characters!");
    }

    return 0;
}

void stopprocess(unsigned int ID){
    struct Process arr2[5];
    int j = 0;

    for (int i = 0; i < processescount; i++)
    {
        if(processes[i].ID == ID){
            
            continue;
        }

        arr2[j] = processes[i];
        j++;
    }

    for (int i = 0; i < j; i++)
    {
        processes[i] = arr2[i];
    }

    processescount--;
}