#include<stdio.h>
int main()
{
	int i=1,num;
	long long factorial=1;
	printf("enter rhe number");
	scanf("%d",&num);
	
	while(i<=num)
	{
		factorial *= i;
		i++;
		
	}
	
	printf("the factorial of a no : %d" , factorial);
	
	return 0;
}
