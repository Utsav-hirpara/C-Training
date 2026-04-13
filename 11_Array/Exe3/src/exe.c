/*To see is there any repeated digit in number*/

#include <stdio.h>
int main(void)
{
    int seen[10] = {0};
    int num, rem;
    printf("Enter any number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num%10;
        if (seen[rem] == 1)
            break;
        seen[rem] = 1;
        num = num/10;
    }

    if(num > 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}