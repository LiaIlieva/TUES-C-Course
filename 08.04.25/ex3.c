#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[15];
    int class_number;
    double average_grade;

} Student;

// pass a pointer for the array
void addStudent(Student **students, int *count){

    *count += 1;

    *students = (Student *)realloc(*students, sizeof(Student)*(*count));
    if(*students == NULL){
        printf("Error allocating memory!");
        exit(1);
    }

    Student student;

    printf("Enter the student's name (up to 15 characters): ");
    scanf("%15s", student.name);

    printf("Enter the student's class number: ");
    scanf("%d", &(student.class_number));

    printf("Enter the student's average grade: ");
    scanf("%lf", &(student.average_grade));

    (*students)[(*count)-1] = student;
    printf("Student added successfully!\n");
}


void listStudents(Student * students, int count){
    for (int i = 0; i < count; i++)
    {
        printf("\nStudent %d: ", i+1);
        printf("\nname: %s ", students[i].name);
        printf("\nclass_number: %d ", students[i].class_number);
        printf("\naverage_grade: %lf ", students[i].average_grade);
        printf("\n");
    }
    
}

int main(){

    int choice;
    Student *students = (Student*)malloc(0);
    int count = 0;

    do {
        printf("\nMenu:\n");
        printf("1. Add a student\n");
        printf("2. List all students\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(&students, &count);
                break;
            case 2:
                listStudents(students, count);
                break;
            case 3:
                free(students);
                printf("Изход...\n");
                break;
            default:
                printf("Невалидна опция. Опитайте отново.\n");
        }
    } while (choice != 3);
}