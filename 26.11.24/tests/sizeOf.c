#include <stdio.h>

int main(void) {

  char a = 6;
  size_t sizeOfCharVariable = sizeof(a);  // 1
  printf("Char variable size: %zu\n", sizeOfCharVariable);

  size_t sizeOfInt = sizeof(int);  // 4
  printf("int size: %zu\n", sizeOfInt);

  return 0;
}