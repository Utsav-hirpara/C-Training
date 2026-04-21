/* write a program in C to delete a element at desired position from an array. */

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
    
    printf("Enter position to delete (1 to %d) : ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n)
    {
        printf("Invalid Position\n");
        return 0;
    }
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[ i + 1];
    }
    n--;
    printf("Array after deletation \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}