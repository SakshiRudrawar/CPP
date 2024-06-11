#include <stdio.h>
#include<stdlib.h>

int main() {
    int i,j, factors = 0;
    int n=7;
    int *arr;
    
    arr = (int*)malloc(sizeof(int)*n);

    for (i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
	{
         factors = 0; 

        if (arr[i] <= 1) 
		{
            factors = 1; 
        } 
		else 
		{
            for (j = 2; j * j <= arr[i]; j++) 
			{
                if (arr[i] % j == 0) 
				{
                    factors++;
                    break;
                }
            }
        }

        if (factors == 0) 
		{
            printf("%d is a prime number\n", arr[i]);
        } 
    }
    return 0;
}


