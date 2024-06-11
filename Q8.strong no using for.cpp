#include <stdio.h>

int main() 
{
    int number, remainder, factorial, sum = 0, temp, i;

    printf("Enter the number: ");
    scanf("%d", &number);
    temp = number;

    for( ; number > 0;);  
	{
        remainder = number % 10;
        factorial = 1;

        for (i = 1; i <= remainder; i++) 
		{
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if (sum == temp) 
	{
        printf("%d is a strong number\n", temp);
    } 
	else
	{
        printf("%d is not a strong number\n", temp);
    }
    return 0;
}

