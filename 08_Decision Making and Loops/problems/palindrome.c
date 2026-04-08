#include <stdio.h>

int main(void)
{
    int n, result = 0, q, rem;
    printf("Please enter the number : ");
    scanf("%d", &n);
    
    q = n;
     
    while (q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }


    if(result == n)
    {
        printf("It is palinfrome\n");
    }

    else
    {
        printf("Not a palindrome\n");
    }




    return 0;
    
}