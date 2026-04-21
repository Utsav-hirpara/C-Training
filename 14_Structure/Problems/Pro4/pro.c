/*
Write a program to define a structure Student with fields:
- name, roll_num, marks
-Create two function get_detail and print_detail, get_detail takes inputs from the user and 
 fill the structure and print_detail print those details
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

struct details
{
    char name[100];
    int marks;
    int rollno;
};

struct details *init(struct details *fillptr);
void display(struct details *fptr);

int main(void)
{    
    struct details *ptr = NULL;
    display(ptr);
    ptr = init(ptr);
    //ptr = init(ptr);
    struct details *temp_add = ptr;
    ptr = temp_add;
    display(ptr);
    free(ptr);
    
    return 0;
}

void display(struct details *fptr)
{
    if (fptr == NULL)
    {
        printf("First Initialize the details.\n");
        return;
    }
    

    for (int i = 0; i < N; i++, fptr++)
    {
        printf("Student %d details\n", i+1);
        printf("Student name : %s \n Marks : %d \n Roll NO. : %d\n", fptr->name, fptr->marks, fptr->rollno);
        printf("\n");
    }
}

struct details *init(struct details *fillptr)
{
    if (fillptr != NULL)
    {
        printf("Already initialized\n");
        return fillptr;
    }
    
    fillptr = (struct details*)malloc(5 * sizeof(struct details));
    struct details *temp = fillptr;
    
    for (int i = 0; i < N; i++)
    {
        printf("Enter details of %d student : \n", i+1);
        printf("Format : student_name student_marks student_roll_no\n");

        scanf("%s %d %d", &fillptr->name, &fillptr->marks, &fillptr->rollno);
        
        fillptr++;
        printf("\n");
    }

    printf("Initialization done\n");

    return temp;
}