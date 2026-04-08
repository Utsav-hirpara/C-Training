#include <stdio.h>

#define PI 3.14159
#define add(x,y) x+y
#define greater(a, b) if(a>b)\
                            printf("%d is greater than %d\n", a, b); \
                        else\
                            printf("%d is lesser than %d\n", a, b); \



int main(void)
{
    printf("%.5f\n", PI);
    printf("addition of 4 and 2 is : %d\n", add(4,2));
    greater(9, 3);
    printf("Result of a * x + y is : %d\n", 4 * add(2, 3));

    printf(" Date : %s\n", __DATE__);
    printf(" Time : %s\n", __TIME__);


    return 0;
}