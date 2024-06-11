#include<stdio.h>
#include<string.h>

struct student
{
	int roll;
	char name[20];
	double marks;
	
	void display()
	{
		printf("%d is %s and marks are %.2lf \n", this->roll, this->name , this ->marks);
	}
	
	void setroll(int a)
	{
		this -> roll = a;
	}
	
	void setname(char* nm)
	{
		strcpy(this -> name, nm);
	}
	
	double setmarks(double m)
	{
		this -> marks = m;
	}
	//get 
	
	int getroll()
	{
		return this -> roll;
	}
	
	char* getname()
	{
		return this -> name;
	}
	
	double getmarks(double m)
	{
	  return this -> marks;
	}	
	
};

int main()
{
	
	student s1, s2;
	
	s1.roll =10;
	strcpy(s1.name , "sachin");
	s1.marks = 80.80;
	
	s2.roll=20;
	strcpy(s2.name , "sakshi");
	s2.marks =80.00;
	
	s1.display();
	s2.display();
}








