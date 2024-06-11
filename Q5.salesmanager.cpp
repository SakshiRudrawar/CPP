#include<stdio.h>
#include<string.h>

typedef struct salesManager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	char target[70];
}salesManager;

int main()
{
	int i;
	
	salesManager arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the id");
		scanf("%d", &arr[i].id);
		
		printf("enter the name");
		scanf("%s", &arr[i].name);
		
		printf("enter the salary");
		scanf("%lf", &arr[i].salary);
		
		printf("enter the incentive");
		scanf("%lf", &arr[i].incentive);
		
		printf("enter the target");
		scanf("%s",&arr[i].target);
		
		
	}
	
	for(i=0;i<3;i++)
	{
		printf("salesman id is :%d\n  name: %s\n  salary:%lf\n  allowance:%lf\n  target:%s\n" , arr[i].id, arr[i].name, arr[i].salary, arr[i].incentive, arr[i].target );
	}
	return 0;
}
















