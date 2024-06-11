#include<stdio.h>
#include<string.h>

struct HR
{
	int id;
	char name[20];
	double salary;
	double commission;
	
	void display()
	{
		printf("%d is %s his salary is %.2lf  and commission is %.2lf \n", this->id, this->name , this ->salary, this ->commission );
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
	
	double setcommission(float al)
	{
		this ->commission  = al;
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
	
	double getcommissions(double al) 
	{
	   return this -> commission;	
	}
};

int main()
{
	HR h1;
	
	h1.id =10;
	strcpy(h1.name , "sachin");
	h1.salary = 8000;
	h1.commission = 1000;
	
	h1.display();	
}



	
	
	
	
	
	
	
	
	
	












