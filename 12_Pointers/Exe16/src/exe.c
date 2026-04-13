/* Void pointer */

#include <stdio.h>

int main(void)
{
    int a = 5;
    float f = 5.7;
    char c = 'A';

    int *i = &a;
    float *j = &f;
    char *k = &c;
    void *vp = &a;
    printf("Value at address %d is %d.\n", i, *i);
    printf("Value at address %d is %d.\n", vp, *(int *)vp);
    vp = &f;
    printf("Value at address %d is %f.\n", j, *j);
    printf("Value at address %d is %f.\n", vp, *(float *)vp);
    vp = &c;
    printf("Value at address %d is %c.\n", k, *k);
    printf("Value at address %d is %c.\n", vp, *(char *)vp);
    

    return 0;
}