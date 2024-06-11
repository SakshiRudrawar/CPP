#include<stdio.h>
#include<string.h>
 struct Employee
{
	int id;
	char name[20];
	double salary;
	
	void setId(int v)
	{
		this->id=v;
	}
	int getId()
	{
		return this->id;
	}
	void setName(char* nm)
	{
		strcpy(this->name,nm);
	}
	char* getName()
	{
		return this->name;
	}
	void setSalary(double s)
	{
		this->salary=s;
		//printf("\n %lx ",salary);
	}
	double getSalary()
	{
		return this->salary;
	}
	void display()
	{
		printf("\nEmployee id:%d",this->id);
		printf("\nEmployee Name:%s",this->name);
		printf("\nEmployee Salary: %lf",this->salary);
	}
};
int main()
{	
	Employee s1,s2;
	s1.setId(1);
	s1.setName("shri");
	s1.setSalary(50000.00);
	s2.setId(2);
	s2.setName("aditya");
	s2.setSalary(40000.00);
	s1.display();
	s2.display();
}