#include<stdio.h>
#include<string.h>
struct Date
{
	int date;
	int month;
	int year;
	void display()
	{
		printf("The Date is:");
		printf("\n%d/%d/%d",this->date,this->month,this->year);
	}
	void setDate(int d)
	{
		this->date=d;
	}
	int getDate()
	{
		return this->date;
	}
	void setMonth(int dd)
	{
		this->month=dd;
	}
	int getMonth()
	{
		return this->month;
	}
	void setYear(int dd)
	{
		this->year=dd;
	}
	int getYear()
	{
		return this->year;
	}
};
int main()
{
	Date d;
	d.setDate(12);
	d.setMonth(12);
	d.setYear(2012);
	d.display();
	
}