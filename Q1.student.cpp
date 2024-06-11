
#include <stdio.h>
#include <string.h>

typedef struct student
{
    int roll_no;
    char name[20];
    double marks;
} Student;  

int main()
{
    int i;

    Student arr[3];

    for (i = 0; i < 3; i++)
    {
        printf("Enter the roll number: ");
        scanf("%d", &arr[i].roll_no);

        printf("Enter the name: ");
        scanf("%s", arr[i].name);

        printf("Enter the marks: ");
        scanf("%lf", &arr[i].marks);
    }

    for (i = 0; i < 3; i++)
    {
        printf("Student Roll No: %d\n  Name: %s\n  Marks: %lf\n", arr[i].roll_no, arr[i].name, arr[i].marks);
    }

    return 0;
}

