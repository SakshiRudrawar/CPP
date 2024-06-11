//Q2 range of prime no
#include<stdio.h>
int main() 
{
    int n,i,j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers in the range 1 to %d are: ", n);
    
    for ( i = 2; i <= n; ++i) 
	{
        int Prime = 1;
        for (j = 2; j * j <= i; ++j) 
		{
            if (i % j == 0) 
			{
                Prime = 0;
                break;
            }
        }
        if (Prime) 
		{
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}


