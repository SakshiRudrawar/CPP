#include<stdio.h>
int main()
{
	int number , i=1;
	
	printf("enter the number");
	scanf("%d",&number);
	
	while(i<=10)
	{
		printf(" \n%d * %d = %d", number , i ,(number*i));
		i++;	
	}
	return 0;	

}
