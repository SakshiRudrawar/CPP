#include<stdio.h>
int main()
{
	float salary, da, ta, hra, totalsalary; 
	
	printf("enter the salary :");
	scanf("%f", &salary);
		
	if(salary<=5000)
	{
		da=0.1*salary;
		printf("da is 10 percent: %f" , da);
		ta=0.2*salary;
		printf("\nta is 20 percent : %f" , ta);
		hra=0.25*salary;
		printf("\nhra is 25 percent : %f" , hra);
	}
	else
	{
		da=0.15*salary;
		printf("\nda is 15 percent: %f" , da);
		ta=0.25*salary;
		printf("\nta is 25 percent: %f" , ta);
		hra=0.30*salary;
		printf("\nhra is 30 percent: %f" , hra);
	}
	
	totalsalary= salary+da+ta+hra;
	printf("\ntotalsalary: %f", totalsalary);
	
return 0;
	
	
}
