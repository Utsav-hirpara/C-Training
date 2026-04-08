// Write a program to implement a simple calculator using switch for +, -, *, /.

#include <stdio.h>

int main(void)
{
     
    int a, b;
    int i, ret;
    while(1)
    {

    printf("Choose \n");
    printf("1 for addition\n");
    printf("2 for substraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("5 for modulo operation\n");
    printf("6 for STOP\n");
    printf("Enter operation (from 1 - 5): ");
    ret = scanf("%d", &i);

    if (ret == 0 || ret == -1){
        printf("Invalid Input\n");
        return -1;
    }
    if(i != 6)
    {
    printf("Enter first number : ");
    ret = scanf("%d", &a);
    
    if (ret == 0 || ret == -1){
        printf("Invalid Input\n");
        return -1;
    }
    
    printf("Enter second number : ");
    ret = scanf("%d", &b);
    if (ret == 0 || ret == -1){
        printf("Invalid Input\n");
        return -1;
    }
    
    }
    
    
    switch (i)
    {
    case 1: printf("Sum : %d\n", a + b);
               break;;
    case 2 : printf("Sub : %d\n", a - b);
               break;
    case 3 : printf("Mul : %d\n", a * b);
               break;
    case 4 : printf("Div : %d\n", a / b);
               break;
    case 5 : printf("Mod : %d\n", a % b);
               break;
    case 6 : return 0;

    default : printf("Enter valid operator\n");
              break; 
    }   
    }   
}