#include <stdio.h>

int main(void)
{
    int num, count = 0, result = 0, mul = 1, cnt, rem;
    printf("Enter a number : ");
    scanf("%d", &num);

    int q = num;
    while (q != 0)
    {
        q = q/10;
        count++;
    }

    cnt = count;
    q = num;

    while (q != 0)
    {
        rem = q%10;
        while (cnt != 0)
        {
            mul = mul*rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
        
    }
    if(result == num)
    {
        printf("%d is a armstrog number\n", num);
    }
    else 
    {
        printf("%d is not an armstrong number\n", num);
    }
    return 0;
    
    
}