#include <stdio.h>

int main(void)
{
	int ret, num; 
	char num2;
	ret = printf("Hello World\n");
	printf("Ret = %d\n", ret);
	ret = scanf("%d %c", &num, &num2);
	printf("Ret = %d\n", ret);


	return 0;
}
