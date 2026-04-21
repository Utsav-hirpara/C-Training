#include <stdio.h>

struct details
{
    char name[100];
    int marks;
    int rollno;
};

void sort( struct details arr[], int n);


int main(void)
{    
    struct details arr[5] = {{.name = "A", .marks = 50, .rollno = 01}, 
                             {.name = "B", .marks = 60, .rollno = 02},
                             {.name = "C", .marks = 70, .rollno = 03},
                             {.name = "D", .marks = 80, .rollno = 04},
                             {.name = "E", .marks = 90, .rollno = 05}};

    struct  details *ptr = arr;
    for (int i = 0; i < 5; i++, ptr++)
    {
        printf("Student %d details\n", i+1);
        printf("Student name : %s \n Marks : %d \n Roll NO. : %d\n", ptr->name, ptr->marks, ptr->rollno);
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    ptr = arr;

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int max = i;
        for (int j =  i + 1; j < n; j++)
        {
            if((ptr+j)->marks > (ptr + max) ->marks)
                max = j;
        }
         if (max != i) {
            struct details temp = *(ptr+max);
            *(ptr+max) = *(ptr+i);
            *(ptr+i) = temp;
         }
    }
    //ptr = arr;

    for (int i = 0; i < 5; i++, ptr++)
    {
        printf("Student %d details\n", i+1);
        printf("Student name : %s \n Marks : %d \n Roll NO. : %d\n", ptr->name, ptr->marks, ptr->rollno);

    }
    
    return 0;
}
