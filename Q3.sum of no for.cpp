#include<stdio.h>
int main()
{
	int i , num, sum=0;
	
	printf("enter the number");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	 {
	 	sum = sum+i;
	 }
	 
	printf("sum of num is %d" ,  sum);
	return 0;
}

