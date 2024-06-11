#include<stdio.h>
#include<string.h>

typedef struct distance
{
	int feet;
	int inch;
	
}distance;

int main()
{
	int i;
	
	 distance arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the feet");
		scanf("%d", &arr[i].feet);
		
		printf("enter the inch");
		scanf("%s", &arr[i].inch);

		
	}
	
	for(i=0;i<3;i++)
	{
		printf("distance : feet:%d\n  inch:%d\n  " , arr[i].feet, arr[i].inch );
	}
	return 0;
}
















