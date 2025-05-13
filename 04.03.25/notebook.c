#include <stdio.h>
#include <stdlib.h>

#define ALLOCATING_MEMORY_INSPECTION(array) \
    if(array == NULL) { \
        printf("Error allocating memory"); \
        exit(1); \
    } \

int main(){
    unsigned int gradesCount = 0;
    printf("Please enter the number of grades in programming: ");
    scanf("%u", &gradesCount);

    if (gradesCount < 1)
    {
        printf("Invalid number!\n");
        exit(1);
    }

    float *grades = (float *)malloc(gradesCount * sizeof(float));

    ALLOCATING_MEMORY_INSPECTION(grades);

    for (int i = 0; i < gradesCount; i++)
    {
        printf("Please enter grade %d: ", i + 1);
        scanf("%f", grades + i);
    }

    int choice = 0;
    printf("\nMenu:\n");
    printf("1. Display average grade\n");
    printf("2. Add new grade\n");
    printf("3. Remove last grade\n");
    printf("4. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: {
                float sum = 0.0;
                for (int i = 0; i < gradesCount; i++)
                {
                    sum += *(grades + i);
                }
                printf("Average grade = %f\n", sum / gradesCount);
                break;
            }

            case 2: {
                unsigned int additionalGrades = 0;
                printf("How many new grades to add: ");
                scanf("%u", &additionalGrades);
                unsigned int newGradesCount = gradesCount + additionalGrades;

                grades = (float *)realloc(grades, sizeof(float) * newGradesCount);

                ALLOCATING_MEMORY_INSPECTION(grades);

                for (int i = gradesCount; i < newGradesCount; i++) {
                    printf("Please enter grade %d: ", i + 1);
                    scanf("%f", grades + i);
                }
                gradesCount = newGradesCount; // Update the total count
                break;
            }

            case 3: {
                unsigned int newGradesCount = gradesCount - 1;
                if (newGradesCount < 1)
                {
                    printf("Number of grades too low!\n");
                    break;
                }

                grades = (float *)realloc(grades, sizeof(float) * newGradesCount);
                ALLOCATING_MEMORY_INSPECTION(grades);
                gradesCount = newGradesCount; // Update the total count
                break;
            }

            case 4:
                free(grades);
                exit(0);
                break;

            default:
                printf("Invalid option!\n");
                break;
        }
    }

    return 0;
}
