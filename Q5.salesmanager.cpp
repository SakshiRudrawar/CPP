#include<stdio.h>
#include<string.h>

struct salesmanager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	char target[70];
	
    void display()
	{
		printf("%d is %s his salary is %.2lf  , commission is %.2lf  & target is %s \n", this->id, this->name , this ->salary, this ->incentive , this -> target );
	}
	
	void setid(int a)
	{
	    this -> id = a;	
	}
	
	void setname(char* nm)
	{
		strcpy(this -> name, nm);
	}
	
	void setsalary(double m)
	{
		this -> salary = m;
	}
	
	void setincentive(float al)
	{
		this ->incentive  = al;
	}
	
	void settarget(char* t )
	{
		strcpy(this ->target , t);
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
	
	double getincentive(double al) 
	{
	   return this -> incentive;	
	}
	
	char* gettarget()
	{
		return this -> target;
	}
};

int main()
{
	salesmanager s1;
	
	s1.id =10;
	strcpy(s1.name , "sachin");
	s1.salary = 8000;
	s1.incentive = 1000;
	strcpy(s1.target , "15 days");
	
	
	s1.display();	
}



	
	
	
	









