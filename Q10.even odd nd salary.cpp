#include<stdio.h>
int main()
{
	int choice , num;
	float result;
	
	printf("1. check even or odd");
	printf("\n 2.calculate basic salary");
	printf("\nenter the choice 1 or 2");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("enter the number");
		scanf("%d", &num);
		
		if(num%2==0)
		{
			printf("number is even", num);
		}
		else
		{
			printf("number is odd", num);
		}
	}
	
	else if(choice==2)
	{
		float num;
		printf("enter the basic salary");
		scanf("%f",num);
		
		if(num <= 5000)
		{
			result = num+0.10 * num+0.20 * num+0.25 * num;
		}
		else
		{
			result =  num+0.15 * num+0.25 * num+0.30 * num;
		}
		
		printf("total salary %ln", result);
	}
	
	else
	{
		printf("Invalid choice");
	}
	return 0;
}














