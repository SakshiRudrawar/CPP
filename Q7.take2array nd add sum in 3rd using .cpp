#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	
	int*arr;
	int n=5;
	//arr = (int*)malloc(sizeof(int)*n);
	arr = new int[n];
	
	int* brr;
	int m=5;
	//brr = (int*)malloc(sizeof(int)*m);
	brr = new int[n];
	
	int* crr;
	int p=5;
	//crr = (int*)malloc(sizeof(int)*p);
	crr =new int[n];
	
	for(i=0;i<n;i++)
	{
		printf("print first array element");
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<m;i++)
	{
		printf("print second array element");
		scanf("%d", &brr[i]);	
	}
	
	for(i=0;i<p;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf(" \n sum of array is %d", crr[i]);
	}
	
	return 0;
	
    
}
