/* predict the output of the program */

#include <stdio.h>

struct abc
{
    int x, y, z;
};

int main(void)
{
    struct abc a = {.y = 0, .z= 1, .x = 2};
    printf("%d  %d  %d", a.x, a.y, a.z);

    return 0;
} 