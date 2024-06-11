#include<stdio.h>
int married(int&, int&, char&);

int main()
{
	int Age,num;
	char gender;
	
	printf("Enter the age:");
	scanf("%d",&Age);
	
	printf("Enter your gender(m/f):");
	scanf(" %c",&gender);
	
	married(Age,num,gender);
	
	if(num==1)
	{
	 printf("Eligibal");	
	}
	if(num==2)
	{
	 printf(" NOT Eligibal");	
	}
	if(num==3)
	{
	 printf("Eligibal");	
	}
	if(num==4)
	{
	 printf(" NOT Eligibal");
	}
	
	return 0;
}

int married(int& Age, int& num, char& gender)
{
	if(gender=='m')
	{
		if(Age>=21)
		{
		  num=1; //printf("Eligibal");
		}
		else
		{
		   num=2;//	printf("Not Eligibal");
		}
	}
	if(gender=='f')
	{
		if(Age>=18)
		{
		  num=4;	//printf("Eligibal");
		}
		else
		{
		  num=5;	//printf("Not Eligibal");
		}
	}
}







