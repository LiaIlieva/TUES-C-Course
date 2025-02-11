#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

struct SchoolRoom{
    struct Person peopleInRoom[50];
    int roomNumber;
};
#endif