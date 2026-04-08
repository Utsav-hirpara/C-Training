#include <stdio.h>
int a(int, int);

int main(void)
{
    int l, b , area;
    printf("Enter the length : ");
    scanf("%d", &l);
    printf("Enter the breadth : ");
    scanf("%d", &b);
    area = a(l, b);
    printf("%d\n", area);

    
    
    return 0;
}

int a(int length, int breadth)
{
    int b = length * breadth;

    return b;
}