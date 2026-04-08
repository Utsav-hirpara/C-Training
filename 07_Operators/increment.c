#include <stdio.h>

int main(void)
{
    // pre-increment
    int a = 4 ;
    int b;
    b = a++;
    printf("a = %d\n", a); 
    printf("b = %d\n", b); 

    // post-increment
    int c = 3, d;
    d = ++c;
    printf("c = %d\n", c); 
    printf("d = %d\n", d); 


    printf("%d\n", a+++c);
    printf("%d\n", a++ + ++c); 

    return 0;
}