/* write a program in C to add a element at desired position into an array. */

#include <stdio.h>

int main(void)
{
    int arr[100], n, pos;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);

    printf("Enter %d elements of array : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position to add (1 to %d) : ", n);
    scanf("%d", &pos);
    int temp = arr[pos - 1];

    for (int i = n; i > pos ; i--)
    {
        arr[i] = arr[ i - 1];
    }
    
    printf("Enter element : ");
    scanf("%d", &arr[pos-1]);
    arr[pos] = temp;
    
    printf("Array after deletation \n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}