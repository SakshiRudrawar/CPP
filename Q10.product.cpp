#include<stdio.h>
#include<string.h>

struct product
{
	int id;
	char name[20];
	int quantity;
	double price;
	
	
	void display()
	{
		printf(" id : %d  name: %s  quality:  %d  and  price : %.2lf \n", this->id, this->name , this ->quantity, this ->price );
	}
	
	void setid(int a)
	{
	    this -> id = a;	
	}
	
	void setname(char* nm)
	{
		strcpy(this -> name, nm);
	}
	
	void setquantity(int q)
	{
		this -> quantity = q;
	}
	
	void setprice(double p)
	{
		this -> price = p;
	}
	// get 
	
	int getid()
	{
		return this -> id;
	}
	
	char* getname()
	{
		return this -> name;
	}
	
	int  getquantity(int q)
	{
	  return this -> quantity;
	}
	
	double getprice(double p) 
	{
	   return this -> price;	
	}
};

int main()
{
	product p1;
	
	p1.id =10;
	strcpy(p1.name , "sachin");
	p1.quantity = 6;
	p1.price = 1000;
	
	p1.display();	
}



	
	
	
	
	
	
	
	
	
