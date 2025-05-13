#include <stdio.h>


enum DayOfWeek {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    int dayNumber;

    printf("Enter number for a day in the week (1-7): ");
    scanf("%d", &dayNumber);

    
    if (dayNumber < 1 || dayNumber > 7) {
        printf("Invalid!\n");
        return 1;
    }

    
    enum DayOfWeek day = dayNumber;

    printf("The day is: ");
    switch(day) {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;
    }

    return 0;
}
