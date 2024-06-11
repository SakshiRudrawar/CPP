#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int n=5;
	int* arr;
	
	//arr= (int*)malloc(sizeof(int)*5);
	arr = new int[5];
	
	for(i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i+=2)
	{
		printf(" \n the alternative numbers are %d ",arr[i]);
	}
	
	return 0;
}
