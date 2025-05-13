#include<stdio.h>

typedef struct node{
    char firstname[100];
    struct node *mother;
    struct node *father;
    struct node *marriedto;
}Node;

void printFamilyMember(Node *person) {
    if (!person) return;

    printf("\n %s: ", person->firstname);

    if (person->mother)
        {printf("\nMother: %s", person->mother->firstname);}
    else
        {printf("\nMother: Unknown");}

    if (person->father)
        {printf("\nFather: %s", person->father->firstname);}
    else
        {printf("\nFather: Unknown");}

    if (person->marriedto)
        {printf("\nMarried to: %s", (*person).marriedto->firstname);}
    else
        {printf("\nMarried to: Not married");}

    
}

int main() {
    
    Node grandma1 = {"Ivanka", NULL, NULL, NULL};
    Node grandpa1 = {"Georgi", NULL, NULL, NULL};

    Node grandma2 = {"Stanka", NULL, NULL, NULL};
    Node grandpa2 = {"Petar", NULL, NULL, NULL};

    
    Node mom = {"Pena", &grandma1, &grandpa1, NULL};
    Node dad = {"Yasen", &grandma2, &grandpa2, NULL};
    mom.marriedto = &dad;
    dad.marriedto = &mom;

    
    Node uncle = {"Pesho", &grandma1, &grandpa1, NULL};

    
    Node daughter = {"Maria", &mom, &dad, NULL};
    Node son = {"Ivan", &mom, &dad, NULL};

    
    Node sonWife = {"Nina", NULL, NULL, &son};
    son.marriedto = &sonWife;

    Node daughterHusband = {"Gosho", NULL, NULL, &daughter};
    daughter.marriedto = &daughterHusband;

    
    printFamilyMember(&mom);
    printFamilyMember(&dad);
    printFamilyMember(&uncle);
    printFamilyMember(&daughter);
    printFamilyMember(&son);
    printFamilyMember(&sonWife);
    printFamilyMember(&daughterHusband);
    printFamilyMember(&grandma1);
    printFamilyMember(&grandpa1);
    printFamilyMember(&grandma2);
    printFamilyMember(&grandpa2);

    return 0;
}
