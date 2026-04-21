#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct details
{
    char name[100];
    int marks;
    int rollno;
};

void sort( struct details arr[], int n);


int main(void)
{    
    struct details *ptr;
    ptr = (struct details*)malloc(5 * sizeof(struct details));
    struct details *temp_add = ptr;

    strcpy(ptr->name, "A");
    ptr->marks = 50;
    ptr->rollno = 01;
    ptr++;

    strcpy(ptr->name, "B");
    ptr->marks = 60;
    ptr->rollno = 02;
    ptr++;

    strcpy(ptr->name, "C");
    ptr->marks = 70;
    ptr->rollno = 03;
    ptr++;

    strcpy(ptr->name, "D");
    ptr->marks = 80;
    ptr->rollno = 04;
    ptr++;

    strcpy(ptr->name, "E");
    ptr->marks = 90;
    ptr->rollno = 05;
    ptr++;

    ptr = temp_add;
    
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

    ptr = temp_add;
    int n = 5;
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

    for (int i = 0; i < 5; i++, ptr++)
    {
        printf("Student %d details\n", i+1);
        printf("Student name : %s \n Marks : %d \n Roll NO. : %d\n", ptr->name, ptr->marks, ptr->rollno);

    }
    
    return 0;
}
