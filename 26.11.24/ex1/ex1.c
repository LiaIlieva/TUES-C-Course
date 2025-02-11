#include <stdio.h>
#include <limits.h>

int main() {
    printf("%-15s %-15s %-15s %-25s %-25s %-20s %-25s\n", 
           "Name", "typeForPrint", "bytes", "maxSigned", "minSigned", "unsigned", "maxUnsigned");

    printf("%-15s %-15s %-15zu %-25d %-25d %-20s %-25u\n", 
           "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);

    printf("%-15s %-15s %-15zu %-25d %-25d %-20s %-25u\n", 
           "short", "%d", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);

    printf("%-15s %-15s %-15zu %-25ld %-25ld %-20s %-25lu\n", 
           "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);

    printf("%-15s %-15s %-15zu %-25lld %-25lld %-20s %-25llu\n", 
           "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);

    return 0;
}
