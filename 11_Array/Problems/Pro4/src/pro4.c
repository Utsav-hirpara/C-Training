/* Write a program to create a function that searches for a given element in an array and 
returns its index. If index not found then it's should return -1. */

#include <stdio.h>


int numofind(int a[], int len, int n);

int main(void){
    int a[] = {1,2,3,4,5,6,7,8,9,5,42,6,3,5,56,754,4568};
    int n, ret;
    printf("Enter the number : ");
    scanf("%d", &n);
    int len = sizeof(a) / sizeof(a[0]);
    ret = numofind(a, len, n);
    if (ret != -1)
    {
        printf("Number of index : %d\n", ret);
    }
    else
    {
        printf("There is no similar number.\n");
    }
    return 0;
}

int numofind(int a[], int len, int n)
{
    for (int i = 0; i < len; i++)
    {
        if(a[i] == n)
            return i;            
    }   
    return -1; 
}