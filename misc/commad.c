/* 
Write a C program that performs a simple calculator operation using command line arguments.

Requirements:
- Program should take 3 arguments:
- First number
- Operator (+, -, *, /, %)
- Second number

Example:
- ./calc 10 + 5

Output:
- Result = 15
*/

#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Enter correct format \n Ex. ./exe 10 + 5\n");
        return -EINVAL;
    }
    
    int a, b;

    if (sscanf(argv[1], "%d", &a) != 1)
    {
        printf("Error: First argument is not a valid number\n");
        printf("Enter correct format \n Ex. ./exe 10 + 5\n");
        return -EINVAL;
    }

    if (sscanf(argv[3], "%d", &b) != 1)
    {
        printf("Error: Second argument is not a valid number\n");
        printf("Enter correct format \n Ex. ./exe 10 + 5\n");
        return -EINVAL;
    }

    switch (argv[2][0])
    {
    case '+' : printf("Sum = %d\n", a + b);
                break;
    
    case '-' : printf("Sub = %d\n", a - b);
                break;

    case '*' : printf("Mul : %d\n", a * b);
                break;

    case '/' : if (b == 0)
                {
                  printf("Error: Division by zero\n");
                    return 1;
                }
                 printf("Div = %d\n", a / b);
                break;

    case '%' : if (b == 0)
                 {
                      printf("Error: Modulo by zero\n");
                      return 1;
                 }
                 printf("Modulo = %d\n", a % b);
               break;
    
    default : printf("Enter correct format \n Ex. ./exe 10 + 5\n");
                return -EINVAL;
    }

    return 0;
}