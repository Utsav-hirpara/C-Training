#include <stdio.h>
#include <limits.h>

int main(void)
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("Range of signed integer is from %d to %d\n", var1, var2);

    var1 = 0;
    var2 = UINT_MAX;
    printf("Range of unsigned integer is from %u to %u\n", var1, var2);

    var1 = SHRT_MIN;
    var2 = SHRT_MAX;
    printf("Range of short signed integer is from %d to %d\n", var1, var2);

    var1 = 0;
    var2 = USHRT_MAX;
    printf("Range of short unsigned integer is from %u to %u\n", var1, var2);

    return 0;
}