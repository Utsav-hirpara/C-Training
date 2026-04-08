// Write a program to compute factorial of a number using a loop.

#include <stdio.h>

int main(void)
{
	int n, fact = 1;
	printf("Enter number : ");
	scanf("%d", &n);

	if(n < 0) {
		printf("Provide only positive number\n");
		return -1;
	}

	for (int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	printf("Factorial = %d\n", fact);

	return 0;
}
