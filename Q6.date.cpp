#include<stdio.h>
#include<string.h>

typedef struct date
{
	int date;
	char month[20];
	int  year;
}date;

int main()
{
	int i;
	
	date arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the date");
		scanf("%d", &arr[i].date);
		
		printf("enter the month");
		scanf("%s", &arr[i].month);
		
		printf("enter the year");
		scanf("%d", &arr[i].year);		
		
	}
	
	for(i=0;i<3;i++)
	{
		printf("current date is :%d/%s/%d \n" , arr[i].date, arr[i].month, arr[i].year );
	}
	return 0;
}
















