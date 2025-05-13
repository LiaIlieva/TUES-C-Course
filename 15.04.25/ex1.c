#include <stdio.h>

#define VOLUNTEERS_NUMBER 100

typedef enum bool{
    false,
    true
}bool;

typedef struct volunteer
{
    char firstName[100];
    char secondName[100];
    char lastName[100];
    char email[100];
    char phoneNumber[100];

}Volunteer;

typedef struct answer
{
    Volunteer volunteer;
    bool isComming;
    
}Answer;


typedef struct cause
{
    char title[100];
    char info[100];
    struct
    {
        int dayNumber;
        int monthNumber;
        int yearNumber;
        struct
        {
            int hours;
            int minutes;
        }Time;
        
    }Date;

    Answer answersList[VOLUNTEERS_NUMBER];
}Cause;

void printTime(Cause * cause){
    printf("Time: ");
    printf("\nhours: %d", (*cause).Date.Time.hours);
    printf("\nminutes: %d", (*cause).Date.Time.minutes);
}

void printDate(Cause * cause){
    printf("\ndayNumber: %d", (*cause).Date.dayNumber);
    printf("\nmonthNumber: %d", (*cause).Date.monthNumber);
    printf("\nyearNumber: %d", (*cause).Date.yearNumber);
    printTime(cause);
}

void printVolunteer(Cause * cause, int index){
    printf("\nfirstName: %s", (*cause).answersList[index].volunteer.firstName);
    printf("\nsecondName: %s", (*cause).answersList[index].volunteer.secondName);
    printf("\nlastName: %s", (*cause).answersList[index].volunteer.lastName);
    printf("\nemail: %s", (*cause).answersList[index].volunteer.email);
    printf("\nphoneNumber: %s", (*cause).answersList[index].volunteer.phoneNumber);
}

void printAnswersList(Cause * cause){
    for (int i = 0; i < 1; i++)  // 1  for testing
    {
        printVolunteer(cause, i);
        printf("\nisComming:");
        if(cause->answersList[i].isComming == 0)
        {
            printf("False");
        }
        else{
            printf("True");
        }
    }
    
}

void printCause(Cause * cause){
    printf("\ntitle: %s", (*cause).title);
    printf("\ninformation: %s", (*cause).info);
    printDate(cause);
    printAnswersList(cause);
}

int main(){
    Cause causes[2] = {{"Title1", "Info1", {2, 3, 2023,{12, 34}}, {{{"Ana", "Ivanova", "Ivaova", "hjg@abv.bg", "+1762"}, true}}}, 
    {.title = "Title2", .Date = {2, 3, 2025,{12, 37}}, .info = "Info2", .answersList={{.volunteer={.firstName="Pena", "Ivanova", "Ivaova", "dhjhs@abv.bg", "+526533"}, false}}}};
    // causes[0] = {"Title1", "Info1", {2, 3, 2023,{12, 34}}, {{{"Ana", "Ivanova", "Ivaova", "hjg@abv.bg", "+1762"}, true}}};
    // causes[1] = {"Title2", "Info2", {2, 3, 2025,{12, 37}}, {{{"Pena", "Ivanova", "Ivaova", "dhjhs@abv.bg", "+526533"}, false}}};
    for (int i = 0; i < 2; i++)
    {
        printCause(&(causes[i]));
    }
    
    return 0;
}