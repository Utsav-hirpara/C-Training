// Write a program to calculate the sum of first n natural numbers using a loop.

#include <stdio.h>

int main(void)
{
    int i, n, sum = 0;

   
    printf("Enter n : ");
    scanf("%d", &n);

    if(n < 0) {
		printf("Provide only positive number\n");
		return -1;
	}


    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}