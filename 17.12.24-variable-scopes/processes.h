#ifndef PROCESSED_H
#define PROCESSED_H

struct Process{
    unsigned int ID;
    char name[30];
};

extern int processescount;
extern struct Process processes[5];

static unsigned int nextprocessid();

unsigned int createnewprocess(char *name_product);

void stopprocess(unsigned int ID);

#endif