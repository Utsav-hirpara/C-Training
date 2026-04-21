/*
Write a menu-driven C program to manage student records using structures and functions.
- Define a structure Student (members: name, roll_num, marks)
- The application should store details of maximum 5 students using an array of structures.
- Implement a continuous menu-driven system that runs until the user selects exit:
- Add Student Details, Display Student Details, Delete Student Record (by Roll Number), Exit
*/

#include <stdio.h>
#include <string.h>

#define MAX 5

struct Student
{
    char name[50];
    int roll_num;
    float marks;
};

void addStudent(struct Student s[], int *count);
void displayStudents(struct Student s[], int count);
void deleteStudent(struct Student s[], int *count);

int main(void)
{
    struct Student s[MAX];
    int count = 0;
    int choice;

    while (1)
    {
        printf("\n--- Student Record Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Delete Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent(s, &count);
                break;

            case 2:
                displayStudents(s, count);
                break;

            case 3:
                deleteStudent(s, &count);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}

void addStudent(struct Student s[], int *count)
{
    if (*count >= MAX)
    {
        printf("Record is full!\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", s[*count].name);

    printf("Enter roll number: ");
    scanf("%d", &s[*count].roll_num);

    printf("Enter marks: ");
    scanf("%f", &s[*count].marks);

    (*count)++;
    printf("Student added successfully.\n");
}

void displayStudents(struct Student s[], int count)
{
    if (count == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_num);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

void deleteStudent(struct Student s[], int *count)
{
    if (*count == 0)
    {
        printf("No records to delete.\n");
        return;
    }

    int roll, found = 0;

    printf("Enter roll number to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < *count; i++)
    {
        if (s[i].roll_num == roll)
        {
            found = 1;

            // Shift elements left
            for (int j = i; j < *count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            (*count)--;
            printf("Student record deleted.\n");
            break;
        }
    }

    if (!found)
    {
        printf("Record not found.\n");
    }
}