#include <stdio.h>
#include <stdlib.h> // for EXIT_FAILURE
#include <errno.h>  // for errno
#include "quadraticroots.h"

double convertToDouble(char str[]) {
    char *endptr;
    errno = 0;
    double num = strtod(str, &endptr);

    if (errno != 0 || *endptr != '\0') {
        perror("Error ocurred while converting the values!");
        exit(EXIT_FAILURE);
    }

    return num;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        printf("Error: Provide exactly three arguments.\n");
        return EXIT_FAILURE;
    }

    double a = convertToDouble(argv[1]);
    double b = convertToDouble(argv[2]);
    double c = convertToDouble(argv[3]);

    struct QuadraticRootsResult s1 = findroots(a, b, c);

    if (s1.norealroots) {
        printf("No real roots exist.\n");
    } else {
        printf("x1: %f x2: %f\n", s1.x1, s1.x2);
    }

    return 0;
}
