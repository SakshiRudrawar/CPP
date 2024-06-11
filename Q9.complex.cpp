#include <stdio.h>

struct complex 
{
    double real;
    double imaginary;
    
    void display()
	{
		printf(" real : %.2lf  & imaginary : %.2lf ", this->real, this->imaginary);
	}
	
	void setreal(double a)
	{
	    this -> real = a;	
	}
			
	void setimaginary(double b)
	{
	    this -> imaginary = b;	
	}
	
	// get 
	
	int getreal()
	{
		return this -> real;
	}
	
	int getimaginary()
	{
		return this -> imaginary;
	}
	
	
};

int main()
{
	complex c1;
	
	c1.real =5;
	c1.imaginary =10;
		
	c1.display();	
}



	
	
	
	

