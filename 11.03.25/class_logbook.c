#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 15

#define ALLOCATING_MEMORY_INSPECTION(array) \
    if(array == NULL) { \
        printf("Error allocating memory"); \
        exit(1); \
    } \


void showMenu() {
    
    printf("       MENU        \n");
    printf("1. Enter a student\n");
    printf("2. Print class register\n");
    printf("3. Exit\n");
    
}

char * readLine(){
    char * line = NULL;
    char * temporaryLine = NULL;
    char symbol; int count = 0;
    
    do
    {
        symbol = getchar();
        count ++;
        temporaryLine = (char *)realloc(line, count * sizeof(char));
        ALLOCATING_MEMORY_INSPECTION(temporaryLine);
        line = temporaryLine;
        line[count-1] = symbol;

    } while (symbol != '\n' & symbol != EOF & count != MAX_SIZE);

    if (symbol == EOF)
    {
        printf("Error reading symbols from stdin\n");
    }
    
    line[count - 1] = '\0';
    
    return line;
}

int main(){

    unsigned int subjectsCount = 0;
    printf("Enter the count of the school subjects: ");
    scanf("%u", &subjectsCount);
    getchar();
    if (subjectsCount < 1)
    {
        printf("Invalid number!");
        exit(1);
    }
    
    char **subjects = (char **)malloc(subjectsCount * sizeof(char *));
    ALLOCATING_MEMORY_INSPECTION(subjects);

    for (int i = 0; i < subjectsCount; i++)
    {
        printf("Enter subject name: ");
        subjects[i] = readLine();
    }
    
    char **students = NULL;
    int studentsCount = 0;

    // int **grades = (int **)malloc(studentsCount * sizeof(int *));
    int **grades = NULL;

    while (1) {
        int choice = 0;
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:

                printf("Add new student: ");
                char *name;
                name =  readLine();
                
                students = (char **)realloc(students, studentsCount * sizeof(char *));
                ALLOCATING_MEMORY_INSPECTION(students);
                studentsCount++;
                students[studentsCount - 1] = name;

                grades = (int **)realloc(grades, studentsCount * sizeof(int *));
                ALLOCATING_MEMORY_INSPECTION(grades);
                
                grades[studentsCount-1] = (int *)malloc(subjectsCount * sizeof(int));
                ALLOCATING_MEMORY_INSPECTION(grades[studentsCount-1]);

                for (int i = 0; i < subjectsCount; i++)
                {
                    printf("\nEnter annual grade for %s: ", subjects[i]);
                    scanf("%d", &grades[studentsCount-1][i]);
                    
                }
                
                break;
            case 2:
                printf("\n%-20s", "Student Name");
                for (int i = 0; i < subjectsCount; i++) {
                    printf("%-10s", subjects[i]);  
                }
                printf("\n");
            
                for (int j = 0; j < studentsCount; j++) {
                    printf("%-20s", students[j]);
            
                    for (int k = 0; k < subjectsCount; k++) {
                        printf("%-10d", grades[j][k]);
                    }
            
                    printf("\n");
                }
                
                break;
            case 3:
                printf("Exiting program.\n");
                free(subjects);
                free(students);

                for (int i = 0; i < studentsCount; i++) {
                    free(grades[i]);
                }
                free(grades);
                
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

