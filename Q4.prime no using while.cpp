#include <stdio.h>

int main() 
{
    int num, factors = 0, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) 
	{
        if (num % i == 0) {
            factors++;
        }
        i++;
    } 

    if (factors == 2) 
	{
        printf("%d is a prime number\n", num);
    } 
	else
	 {
        printf("%d is not a prime number\n", num);
     }

    return 0;
}

