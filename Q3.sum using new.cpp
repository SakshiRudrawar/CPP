#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, sum=0;
	int n=5;
	int*arr;
	
	//arr=(int*)malloc(sizeof(int)*n);
	 arr = new int[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter the number");
		scanf("%d", &arr[i]);
		sum= arr[0]+arr[1]+arr[2]+arr[3]+arr[4];	
		
	}
	printf("The sum is %d", sum);
	
}
