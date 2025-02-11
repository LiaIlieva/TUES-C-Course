#ifndef SCHOOL_H
#define SCHOOL_H

#include "schoolclass.h"
#include "schoolroom.h"

struct School{
    struct SchoolClass classesInSchool[20];
    struct SchoolRoom roomsInSchool[10];
    int roomNumber;
};

int main(){
    struct School school1;
    return 0;
}
#endif