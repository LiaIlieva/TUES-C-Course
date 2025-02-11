#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_

#include "person.h"

struct SchoolClass{
    struct Person students[26];
    char classChar;
    int classNumber;
    struct Person teacher;
};
#endif