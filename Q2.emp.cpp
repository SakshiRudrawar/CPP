#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[20];
    double salary;
} Employee;

int main()
{
    int i;

    Employee arr[3];

    for (i = 0; i < 3; i++)
    {
        printf("Enter the id: ");
        scanf("%d", &arr[i].id);

        printf("Enter the name: ");
        scanf("%s", arr[i].name);

        printf("Enter the salary: ");
        scanf("%lf", &arr[i].salary);
    }

    for (i = 0; i < 3; i++)
    {
        printf("Employee id is: %d\n  Name: %s\n  Salary: %lf\n", arr[i].id, arr[i].name, arr[i].salary);
    }

    return 0;
}

