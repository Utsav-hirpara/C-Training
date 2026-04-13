/*  Write a program to create a function that counts how many even and odd numbers exist in an array. */

#include <stdio.h>

int oddnumbers(int a[], int len);
int evennumbers(int a[], int len);
int numelement(int a[], int len);
int main(void)
{
    int a[] = {23, 45, 6, 98,545,196874,2165,1516,1,3};
    int odd, even;
    int len = sizeof(a)/sizeof(a[0]);

    printf("Total number of elements : %d\n", numelement(a, len));
    int count1 = evennumbers(a, len);
    int count2 = oddnumbers(a, len);

    printf("Odd = %d , Even = %d \n", count2, count1);
    return 0;
}

int oddnumbers(int a[], int len){
    int  oddcount = 0;
    for (int i = 0; i <len; i++)
    {
        if (a[i] % 2 != 0)
            oddcount++;
    }
    return oddcount;
}

int evennumbers(int a[], int len){
    int  evencount = 0;
    for (int i = 0; i <len; i++)
    {
        if (a[i] % 2 == 0)
            evencount++;
    }
    return evencount;
}

int numelement(int a[], int len){
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        count++;
    }
    return count;
}