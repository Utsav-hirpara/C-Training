#include <stdio.h>

struct details
{
    char name[100];
    int marks;
    int rollno;
};


int main(void)
{    
    struct details arr[5] = {{.name = "A", .marks = 50, .rollno = 01}, 
                             {.name = "B", .marks = 60, .rollno = 02},
                             {.name = "C", .marks = 70, .rollno = 03},
                             {.name = "D", .marks = 80, .rollno = 04},
                             {.name = "E", .marks = 90, .rollno = 05}};
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d details\n", i+1);
        printf("Student name : %s \n Marks : %d \n Roll NO. : %d\n", arr[i].name, arr[i].marks, arr[i].rollno);
    }

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int max = i;
        for (int j =  i + 1; j < n; j++)
        {
            if(arr[j].marks > arr[max].marks)
                max = j;
        }
         if (max != i) {
            struct details temp = arr[max];
            arr[max] = arr[i];
            arr[i] = temp;
         }
    }

     for (int i = 0; i < 5; i++)
    {
        printf("Student %d details\n", i+1);
        printf("Student name : %s \n Marks : %d \n Roll NO. : %d\n", arr[i].name, arr[i].marks, arr[i].rollno);
    }
    
    return 0;
}
