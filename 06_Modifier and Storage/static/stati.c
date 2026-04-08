#include <stdio.h>
#include <stdlib.h>


//extern int count;

int main(void)
{
    int value;
    value = increment();
    value = increment();
    value = increment();
    // count = count + 5;
    // value = count;
    printf("%d\n", value);


    return 0;
}