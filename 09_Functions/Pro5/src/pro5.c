/* Write a c program to create a function that 
returns the first n least significant bits of a given integer. */

#include <stdio.h>

int nbit(int, int);

int main(void)
{
	int n, num;

	printf("Enter the number : ");
	scanf("%d", &num);
	printf("Enter the number of bits : ");
	scanf("%d", &n);

	int result = nbit(num, n);

	printf("Result : %d\n", result);
}

int nbit(int a, int b){
	int i = 0, mask = 0;

	while(i <= b - 1) {
		mask |= (1 << i) | 1;
		i++; 
	}

	return a & mask;
}
