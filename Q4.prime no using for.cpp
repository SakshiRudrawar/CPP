#include<stdio.h>
int main()
{
	int i, num, factors=0;
	
	printf("enter the number");
	scanf("%d",&num);
	
	for (i = 1; i <= num; i++) 
	 {
            if (num % i == 0) 
			{
                factors++;
            }
    }

        if (factors == 2) {
            printf("%d is a prime number\n", num);
        } else {
            printf("%d is not a prime number\n", num);
        }
        
    return 0;
  }

