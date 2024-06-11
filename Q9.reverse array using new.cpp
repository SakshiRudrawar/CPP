#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,temp;
	int n=5;
	int* arr;
	
	//arr = (int*)malloc(sizeof(int)*n);
	arr = new int[n];
	for(i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<2;i++)
	{
		temp=arr[i];
		arr[i]=arr[4-i];
		arr[4-i]=temp;
	}
	
	printf("Reversed array");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
}
