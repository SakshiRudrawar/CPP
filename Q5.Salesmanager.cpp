#include<stdio.h>
#include<string.h>
struct SalesManager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	void display()
	{
		printf("Salesmanager Details: ");
		printf("\nSalesmanager Id: %d",this->id);
		printf("\nSalesmanager Name: %s",this->name);
		printf("\nSalesmanager Salary: %lf",this->salary);
		printf("\nSalesmanager Incentive: %lf",this->incentive);
		printf("\nSalesmanager Target: %s",this->target);
		
		
	}
	void setId(int m)
	{
		this->id=m;
	}
	int getId()
	{
		return this->id;
	}
	void setName(char* m)
	{
		strcpy(this->name,m);
	}
	char* getName()
	{
		return this->name;
	}
	void setSalary(double j)
	{
		this->salary=j;
	}
	double getSalary()
	{
		return this->salary;
	}
	void setIncentive(double i)
	{
		this->incentive=i;
	}
	double getIncentive()
	{
		return this->incentive;
	}
		void setTarget(int s)
	{
		this->target=s;
	}
	int getTarget()
	{
		return this->target;
	}
};
int main()
{
	SalesManager m;
	m.setId(15);
	m.setName("vijay");
	m.setSalary(55000);
	m.setIncentive(7500);
	m.setTarget(300);
	m.display();
}