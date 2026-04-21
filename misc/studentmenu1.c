/*
Write a menu-driven C program to manage student records using structures and functions.
- Define a structure Student (members: name, roll_num, marks)
- The application should store details of maximum 5 students using an array of structures.
- Implement a continuous menu-driven system that runs until the user selects exit:
- Add Student Details, Display Student Details, Delete Student Record (by Roll Number), Exit
*/

#include <stdio.h>
#include <errno.h>
#include <stdbool.h>

#define MAX 5
#define ARRMAX 30

struct Student 
{
    char name[ARRMAX];
    int marks;
    int rollno;
};

void addStudent(struct Student *arr, int *count);
void displayStudents(const struct Student *arr, int count);
void deleteStudent(struct Student *arr, int *count);
bool isempty(int count);

int main(void)
{
    struct Student arr[MAX];
    int count = 0, choice, ret;
    

    while(1)
    {
    printf("----------------------------------------\n");
    printf("Menu \n");
    printf("1 : add student\n");
    printf("2 : display students\n");
    printf("3 : delete student\n");
    printf("4 : exit\n\n");
    printf("Enter choice : ");
    ret = scanf("%d", &choice);
    if (ret != 1)
    {
        printf("Enter correct choice\n");
        return -EINVAL;
    }
    
    printf("\n");

    switch (choice)
    {
    case 1 : addStudent(arr, &count);
                break;

    case 2 : displayStudents(arr, count);
                break;

    case 3 : deleteStudent(arr, &count);
                break;

    case 4 : return 0;

    default : printf("Invalid Choice\n");
                break;
    }
    }
}

void addStudent(struct Student *arr, int *count)
{
    if (*count > 4)
    {
        printf("List is full\n");
        return;
    }
    
    printf("Enter name : ");
    scanf("%s", arr[*count].name);

    printf("Enter marks : ");
    scanf("%d", &arr[*count].marks);

    printf("Enter roll number : ");
    scanf("%d", &arr[*count].rollno);

    printf("Added successfully\n");
    (*count)++;
}
void displayStudents(const struct Student *arr, int count)
{

    if (isempty(count))
    {
        printf("Detail section is empty\n");
        return;
    }
    
    printf("Student log \n");
    for (int i = 0; i < count; i++)
    {
        printf("Name : %s\n", arr[i].name);
        printf("Marks : %d\n", arr[i].marks);
        printf("Roll Number : %d\n", arr[i].rollno);
    }    
}

void deleteStudent(struct Student *arr, int *count)
{
    int a;
    if (isempty(*count))
    {
        printf("No log to delete\n");
        return;
    }
    printf("Enter roll number to delete : ");
    scanf("%d", &a);
    
    for (int i = 0; i < *count; i++)
    {
        if (arr[i].rollno == a)
        {
            for (int j = i; j < *count-1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*count)--;
            return;
        }        
    }    
}

bool isempty(int count)
{
    if (!count)
        return true;

    return false;   
}