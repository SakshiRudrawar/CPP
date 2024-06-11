#include<stdio.h>
#include<string.h>

typedef struct HR
{
	int id;
	char name[20];
	double salary;
	double commission;
}HR;

int main()
{
	int i;
	
	 HR arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the id");
		scanf("%d", &arr[i].id);
		
		printf("enter the name");
		scanf("%s", &arr[i].name);
		
		printf("enter the salary");
		scanf("%lf", &arr[i].salary);
		
		printf("enter the commissions");
		scanf("%lf", &arr[i].commission);
		
		
	}
	
	for(i=0;i<3;i++)
	{
		printf("HR id is :%d\n  name: %s\n  salary:%lf\n  allowance:%lf\n" , arr[i].id, arr[i].name, arr[i].salary, arr[i].commission);
	}
	return 0;
}
















