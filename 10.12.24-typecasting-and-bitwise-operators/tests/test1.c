#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

double convertToDouble(const char *str) {
    char *endptr;    // Pointer to check for invalid characters
    errno = 0;       // Reset errno to detect errors

    // Convert string to double
    double num = strtod(str, &endptr);

    // Check for errors
    if (errno != 0) {
        perror("Error converting string to double");
        exit(EXIT_FAILURE);
    }
    if (*endptr != '\0') {
        fprintf(stderr, "Error: Invalid characters in input '%s'.\n", str);
        exit(EXIT_FAILURE);
    }
    if (endptr == str) {
        fprintf(stderr, "Error: No digits were found in input '%s'.\n", str);
        exit(EXIT_FAILURE);
    }

    return num;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return EXIT_FAILURE;
    }

    double value = convertToDouble(argv[1]);
    printf("The converted value is: %f\n", value);

    return 0;
}
