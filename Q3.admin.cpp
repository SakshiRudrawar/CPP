#include<stdio.h>
#include<string.h>

struct admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
	
	void display()
	{
		printf("%d is %s his salary is %.2lf  and allowance is %.2lf \n", this->id, this->name , this ->salary, this->allowance );
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
	
	double setallowance(float al)
	{
		this -> allowance = al;
	}
	// get 
	int getroll()
	{
		return this -> id;
	}
	
	char* getname()
	{
		return this -> name;
	}
	
	double getsalary(double m)
	{
	  return this -> salary;
	}
	
	double getallowance(double al) 
	{
	   return this -> allowance;	
	}
};

int main()
{
	admin a1;
	
	a1.id =10;
	strcpy(a1.name , "sachin");
	a1.salary = 8000;
	a1.allowance = 1000;
	
	a1.display();	
}
















