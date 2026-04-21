#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int *)malloc(3 * sizeof(int));
    
    printf("%d %d %d\n", p[0], p[1], p[2]);
    
    return 0;
}