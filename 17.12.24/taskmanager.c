#include <stdio.h>
#include "processes.h"
#include <stdlib.h>

extern int processescount;
extern struct Process processes[5];

int main(){
    int op;
    char name[50];        
    unsigned int ID;

    while(1){
        printf("\nOptions: \n");
        printf("(1) Create process\n");
        printf("(2) Print all processes\n");
        printf("(3) Stop a process\n");
        printf("(4) Exit\n");
        scanf("%d", &op);

        

        switch (op)
        {
            case 1:
                if(processescount < 5){
                    printf("Enter name of new process: ");
                    scanf("%s", &name);
                    createnewprocess(name);
                }
                else{
                    printf("The max count of working processes has been reached!\n");
                    printf("To be created a new process, one of the running processes must be stopped!\n");
                }
                
                break;

            case 2:
                printf("The processes are:\n");
                for (int i = 0; i < processescount; i++)
                {
                printf("Process ID: %d, name: %s\n", processes[i].ID, processes[i].name);
                }
                
                break;

            case 3:
                
                printf("Enter ID of process to stop: ");
                scanf("%d", &ID);
                stopprocess(ID);
                break;

            case 4:
                printf("End of program.");
                exit(0);
                break;
            
            default:
                printf("Invalid option!");
                break;
        }
    }
    return 0;
}