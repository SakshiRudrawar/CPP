#include<stdio.h>
#include<string.h>
struct Admin{
	int id;
	char name[20];
	double salary;
	int allowance;
	void display()
	{
		printf("id:%d",this->id);
		printf("\nName:%s \nsalary: %lf \nallowance:%d",this->name,this->salary,this->allowance);
	}
	void setId(int n)
	{
		this->id=n;
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
	void setSalary(double n)
	{
		this->salary=n;
	}
	double getSalary()
	{
		return this->salary;
	}
	void setAllowance(int m)
	{
		this->allowance=m;
	}
	int getAllowance()
	{
		return this->allowance;
	}
	
};
int main()
{
	Admin a,a2;
	a.setId(10);
	a.setName("Nikhil");
	a.setSalary(28788);
	a.setAllowance(78292);
	a.display();
	
	a2.setId(20);
	a2.setName("Ashish");
	a2.setSalary(28800);
	a2.setAllowance(70500);
	a2.display();
	
	
}