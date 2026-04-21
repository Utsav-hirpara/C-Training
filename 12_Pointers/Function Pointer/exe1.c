#include <stdio.h>
#include <stdlib.h>

float sum(float a, float b);
void greet();

int main(void)
{
    printf("The sum of 2 and 3 is %f\n", sum(2, 3));
    float (*fptr) (float, float);
    fptr = &sum;
    float d = (*fptr)(4.2, 6.2);
    printf("The sum is : %f\n", d);
    d = (*fptr)(10.2, 20.5);
    printf("The sum is : %f\n", d);
    return 0;
}

float sum(float a, float b)
{
    return a + b;
}

void greet()
{
    printf("Hello world\n");
}