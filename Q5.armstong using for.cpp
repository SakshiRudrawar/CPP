#include<stdio.h>
int main()
{
	int rem, temp=0,sum, no;
	
	printf("enter the number");
	scanf("%d",&no);
	
	temp=no;
	
	for(i=0; no>0; no++)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}
	
	if(temp == sum)
	{
		printf("given no. is armstrong number");
	}
	else
	{
		printf("given no. is not a armstrong number");
	}
	return 0;

}
