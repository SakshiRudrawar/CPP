#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int n=5;
	int*arr;
	
	//arr = (int *)malloc(sizeof(int) * n);//typecasting and then size of array.
	arr = new int[n];
	
	
	for(i=0; i<n; i++)
	{
		printf("enter the number");
		scanf("%d", &arr[i]);
	}
	// min
	
	int min=arr[0];
	for(i=0; i<n; i++)
	{
		if(min>arr[i])
		{
			min= arr[i];
		}
	}
	printf("the minimum num is %d\n", min);
	
	// max 
	
	int max=arr[0];
	for(i=0; i<n; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("the mmaximum number is %d", max);
	
	return 0;	
}







