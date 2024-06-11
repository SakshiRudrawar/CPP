#include<stdio.h>
#include<math.h>
int salary(int&,int&,int&,int&,int&);

int main()
{
	int basic_salary,da,ta,har,total_salary;
	
    	printf("Enter the basic_salary:");
    	scanf("%d",&basic_salary);
    	
    	salary( basic_salary, da, ta, har, total_salary);
    	
    		printf("da is=%d\n",da);
        	printf("ta is=%d\n",ta);
        	printf("har is=%d\n",har);
        	printf("total_salary is=%d\n",total_salary);
}

int salary(int& basic_salary, int& da, int& ta, int& har, int& total_salary)
{
	if(basic_salary<=5000)
	{
		da= basic_salary*10/100;
		ta= basic_salary*20/100;
		har= basic_salary*25/100;
	}
	else
	{
		da= basic_salary*15/100;
		ta= basic_salary*25/100;
	    har= basic_salary*30/100;
	}
	
	total_salary= basic_salary+ da+ ta+ har;
}







