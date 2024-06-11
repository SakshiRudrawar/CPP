#include<stdio.h>
#include<string.h>

struct distance
{
	int feet;
	int inch;
	
	
   void display()
	{
		printf(" feet : %d  & inch: %d", this->feet, this->inch);
	}
	
	void setfeet(int a)
	{
	    this -> feet = a;	
	}
			
	void setinch(int b)
	{
	    this -> inch = b;	
	}
	
	// get 
	
	int getfeet()
	{
		return this -> feet;
	}
	
	int getinch()
	{
		return this -> inch;
	}
	
	
};

int main()
{
	distance d1;
	
	d1.feet =5;
	d1.inch =10;
		
	d1.display();	
}



	
	
	
	























