#include<stdio.h>
#include<string.h>
struct Product
{
	int id;
	char name[20];
	int quantity;
	double price;
	void display()
	{
		printf("Product Id: %d",this->id);
		printf("\nProduct Name: %s",this->name);
		printf("\nProduct quantity: %d",this->quantity);
		printf("\nProduct Price: %lf",this->price);
	}
	void setId(int n)
	{
		this->id=n;
	}
	int getId()
	{
		return this->id;
	}
	void setName(char* m)
	{
		strcpy(this->name,m);
	}
	char* getName()
	{
		return this->name;
	}
	void setQuantity(int m)
	{
		this->quantity=m;
	}
	int getQuantity()
	{
		return this->quantity;
	}
	void setPrice(double k)
	{
		this->price=k;
	}
	double getPrice()
	{
		return this->price;
	}
};
int main()
{
	Product p;
	p.setId(10);
	p.setName("Surya");
	p.setQuantity(50);
	p.setPrice(15000);
	p.display();
	
}