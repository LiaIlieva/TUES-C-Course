#include <stdio.h>
#include "transformation.h"

int main() {
    const char *input1 = "-123";
    const char *input2 = "12ab23";
    const char *input3 = "456";

    // Test with the first string
    transformation result1 = transformChar(input1);
    printf("Input: %s => Output: result = %ld, error = \"%s\"\n", input1, result1.result, result1.error);

    // Test with the second string (invalid)
    transformation result2 = transformChar(input2);
    printf("Input: %s => Output: result = %ld, error = \"%s\"\n", input2, result2.result, result2.error);

    // Test with the third string
    transformation result3 = transformChar(input3);
    printf("Input: %s => Output: result = %ld, error = \"%s\"\n", input3, result3.result, result3.error);

    return 0;
}
