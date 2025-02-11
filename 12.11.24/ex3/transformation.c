#include <stdlib.h>
#include <string.h>
#include "transformation.h"

transformation transformChar(const char *str) {
   char *endtr = '\0';
   transformation tr;
   tr.result = 0;
   tr.error[0] = '\0';

   // Convert the string to a long integer
   long res = strtol(str, &endtr, 10);

   // Check if conversion was successful
   if (*endtr != '\0') {
      strcpy(tr.error, "Invalid input string");
   }
   else{
      tr.result = res;
   }

   return tr;
}
