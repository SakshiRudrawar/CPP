#include<stdio.h>
#include<string.h>
struct Hr
{
	int id;
	char name[10];
	double salary;
	double commission;
	void display()
	{
		printf("Hr id: %d");
		printf("\nHr Name: %s");
		printf("\nHr Salary Id: %lf");
		printf("\nHr Commission: %lf");
	}
	void setId(int n)
	{
		this->id=n;
	}
	int getId()
	{
		return this->id;
	}
	void setName(char* n)
	{
		strcpy(this->name,n);
	}
	char* getName()
	{
		return this->name;
	}
	void setSalary(double m)
	{
		this->salary=m;
	}
	double getSalary()
	{
		return this->salary;
	}
	void setCommission(double mm)
	{
		this->commission=mm;
	}
	double getCommssion()
	{
		return this->commission;
	}
};
int main()
{
	Hr h;
	h.setId(11);
	h.setName("om");
	h.setSalary(12000);
	h.setCommission(7200);
	h.display();
	
}