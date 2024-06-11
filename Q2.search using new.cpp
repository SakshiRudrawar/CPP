#include<stdio.h>
int main()
{
	int i, no;
	int n=5;
	int*arr;
	
	//arr = (int*)malloc(sizeof(int)*n);
	arr = new int[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter the number");
		scanf("%d", &arr[i]);		
	}
	
	printf("enter the number for search");
	scanf("%d", &no);
		
	int flag = 0;
	
	for(i=0; i<n; i++)
	{
		if(arr[i] == no)
		{
			printf("number is found ");
			scanf("%d", arr[i]);
			flag=1;
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("number is not found");
	}
	
	return 0;
}






