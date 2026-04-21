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
void sort( struct details *sptr);


int main(void)
{    
    struct details *ptr = NULL;
    ptr = init(ptr);
    ptr = init(ptr);
    
    struct details *temp_add = ptr;
    ptr = temp_add;
    display(ptr);

    ptr = temp_add;
    sort(ptr);
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
    }
}
void sort( struct details *sptr)
{
    if (sptr == NULL)
    {
        printf("First Initialize the details.\n");
        return;
    }
    for (int i = 0; i < N - 1; i++)
    {
        int max = i;
        for (int j =  i + 1; j < N; j++)
        {
            if((sptr+j)->marks > (sptr + max) ->marks)
                max = j;
        }
         if (max != i) {
            struct details temp = *(sptr+max);
            *(sptr+max) = *(sptr+i);
            *(sptr+i) = temp;
         }
    }

    for (int i = 0; i < N; i++, sptr++)
    {
        printf("Student %d details\n", i+1);
        printf("Student name : %s \n Marks : %d \n Roll NO. : %d\n", sptr->name, sptr->marks, sptr->rollno);

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
    
    strcpy(fillptr->name, "A");
    fillptr->marks = 50;
    fillptr->rollno = 01;
    fillptr++;

    strcpy(fillptr->name, "B");
    fillptr->marks = 60;
    fillptr->rollno = 02;
    fillptr++;

    strcpy(fillptr->name, "C");
    fillptr->marks = 70;
    fillptr->rollno = 03;
    fillptr++;

    strcpy(fillptr->name, "D");
    fillptr->marks = 80;
    fillptr->rollno = 04;
    fillptr++;

    strcpy(fillptr->name, "E");
    fillptr->marks = 90;
    fillptr->rollno = 05;

    printf("Initialization done\n");

    return temp;
}