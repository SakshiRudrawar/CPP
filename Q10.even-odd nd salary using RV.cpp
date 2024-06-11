#include 
<stdio.h>

void evenodd(int, int &, int &, int &);

int main()
{
    int ch, da = 0, ta = 0, har = 0, total_salary = 0, num1 = 0, num2 = 0;

    printf("Even Odd press 1\nBasic Salary press 2\n");
    printf("Enter your choice:");
    scanf("%d", &ch);

    evenodd(ch, total_salary, num1, num2);

    if (ch == 1)
    {
        // Check if the entered number is even or odd directly
        if (num1 == 1)
        {
            printf("Given number is even\n");
        }
        else
        {
            printf("Given number is odd\n");
        }
    }

    if (ch == 2)
    {
        printf("DA is=%d\n", da);
        printf("TA is=%d\n", ta);
        printf("HRA is=%d\n", har);
        printf("Total Salary is=%d\n", total_salary);
    }

    return 0;
}

void evenodd(int ch, int &total_salary, int &num1, int &num2)
{
    if (ch == 1)
    {
        int number;
        printf("Enter the number:");
        scanf("%d", &number);

        // Set num1 or num2 based on whether the entered number is even or odd
        if (number % 2 == 0)
        {
            num1 = 1;
        }
        else
        {
            num2 = 2;
        }
    }

    if (ch == 2)
    {
        int basic_salary;
        printf("Enter the basic_salary:");
        scanf("%d", &basic_salary);

        if (basic_salary <= 5000)
        {
            total_salary = basic_salary + basic_salary * 0.10 + basic_salary * 0.20 + basic_salary * 0.25;
        }
        else
        {
            total_salary = basic_salary + basic_salary * 0.15 + basic_salary * 0.25 + basic_salary * 0.30;
        }
    }
}

