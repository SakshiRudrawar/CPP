#include<stdio.h>
#include<string.h>

typedef struct Time
{
	int hour;
	int min;
	int sec;
}Time;

int main()
{
	int i;
	
    Time arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the hour");
		scanf("%d", &arr[i].hour);
		
		printf("enter the min");
		scanf("%d", &arr[i].min);
		
		printf("enter the sec");
		scanf("%d", &arr[i].sec);		
		
	}
	
	for(i=0;i<3;i++)
	{
		printf("current time : %d :%d :%d \n" , arr[i].hour, arr[i].min, arr[i].sec );
	}
	return 0;
}
















