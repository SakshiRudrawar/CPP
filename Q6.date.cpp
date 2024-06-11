#include<stdio.h>
#include<string.h>

struct date
{
	int date;
	char month[20];
	int  year;
	
	void display()
	{
		printf("  %d/%s/%d \n", this->date, this->month , this ->year);
	}
	
	void setdate(int a)
	{
	    this -> date = a;	
	}
	
	void setmonth(char* mn)
	{
		strcpy(this -> month, mn);
	}
	
	double setyear(int y)
	{
		this -> year = y;
	}
	
	int getdate()
	{
		return this -> date;
	}
	
	char* getmonth()
	{
		return this -> month;
	}
	
	int getyear()
	{
	  return this -> year;
	}	
	
};

int main()
{
	date d1;
	
	d1.date = 04;
	strcpy(d1.month , "march");
	d1.year = 2002;
	
	d1.display();	
}
















