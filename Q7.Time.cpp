#include<stdio.h>
struct Time
{
	int hour;
	int min;
	int sec;
	void display()
	{
		printf("Hour:%d Minutes:%d Second:%d",this->hour,this->min,this->sec);
	}
	void setHour(int h)
	{
		this->hour=h;
	}
	int getHour()
	{
		return this->hour;
	}
	void setMin(int m)
	{
		this->min=m;
	}
	int getMin()
	{
		return this->min;
	}
	void setSec(int s)
	{
		this->sec=s;
	}
	int getSec()
	{
		return this->sec;
	}
};
int main()
{
	Time t;
	t.setHour(5);
	t.setMin(34);
	t.setSec(50);
	t.display();
}