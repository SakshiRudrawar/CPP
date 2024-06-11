#include<stdio.h>
#include<string.h>

typedef struct admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
}admin;

int main()
{
	int i;
	
	admin arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the id");
		scanf("%d", &arr[i].id);
		
		printf("enter the name");
		scanf("%s", &arr[i].name);
		
		printf("enter the salary");
		scanf("%lf", &arr[i].salary);
		
		printf("enter the allowance");
		scanf("%lf", &arr[i].allowance);
	}
	
	for(i=0;i<3;i++)
	{
		printf("admin id is:%d\n  name: %s\n  salary:%lf\n  allowance:%lf\n" , arr[i].id, arr[i].name, arr[i].salary, arr[i].allowance);
	}
	return 0;
}
















