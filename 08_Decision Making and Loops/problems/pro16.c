/* Write a program to take numbers from the user in a loop and stop input 
 when the user enters -1. Print the sum of all entered numbers. */


 #include <stdio.h>

 int main(void)
 {
    int num,sum = 0;
    while (1)
    {
        printf("Enter number : ");
        scanf("%d", &num);
        if(num == -1)
          break;

        sum = sum + num;
    }
    printf("Sum : %d\n", sum);
    printf("Thank You\n");


    return 0;
 }