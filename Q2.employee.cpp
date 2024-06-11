#include<stdio.h>
#include<string.h>

struct emp
{
	int id;
	char name[20];
	double salary;
	
	void display()
	{
		printf("%d is %s and salary is %.2lf \n", this->id, this->name , this ->salary);
	}
	
	void setid(int a)
	{
	    this -> id = a;	
	}
	
	void setname(char* nm)
	{
		strcpy(this -> name, nm);
	}
	
	double setsalary(double m)
	{
		this -> salary = m;
	}
	
	int getroll()
	{
		return this -> id;
	}
	
	char* getname()
	{
		return this -> name;
	}
	
	double getsalary()
	{
	  return this -> salary;
	}	
	
};

int main()
{
	emp e1;
	
	e1.id =10;
	strcpy(e1.name , "sachin");
	e1.salary = 8000;
	
	e1.display();	
}








