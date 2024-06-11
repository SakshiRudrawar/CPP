#include<stdio.h>

int main()
{
    int last_digit, second_last_digit, number, sum = 0;
    
    printf("Enter the number: ");
    scanf("%d", &number);

    last_digit = number % 10;
    number /= 10;
    second_last_digit = number % 10;

    sum = last_digit + second_last_digit;

    printf("The sum of the second and last digits is %d\n", sum);

    return 0;
}

