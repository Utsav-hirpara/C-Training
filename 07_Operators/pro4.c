#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter first number : ");
    scanf("%d", &b);
    printf("Enter first number : ");
    scanf("%d", &c);

    int max;
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    //max1 = (a > b) ? a : b;
    //max = (c > max1) ? c : max1;

    printf("Maximum is : %d\n", max);


    return 0;
}