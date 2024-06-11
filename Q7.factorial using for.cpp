#include<stdio.h>
int main()
{
	int i, num;
	long long factorial=1;
	
	printf("enter the number");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		factorial *= i;	// factorial = factorial * i
	}
	
	printf("factorial of the given num is %d", factorial);
	return 0;
	
}
