#include <stdio.h>

// void fun()
// {
// 	printf("Hello\n");
// }

int main(void)
{
	int ret, num; 
	char num2;
	ret = printf("Hello World\n");
	printf("Ret = %d\n", ret);
	//fun();
	ret = scanf("%d %c", &num, &num2);
	printf("Ret = %d\n", ret);


	return 0;
}
