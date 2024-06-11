#include<stdio.h>
struct Distance
{
	float feet;
	float inch;
	
	void display()
	{
		printf("Feet: %f and Inch: %f",this->feet,this->inch);
	}
	void setFeet(float f)
	{
		this->feet=f;
	}
	float getFeet()
	{
		return this->feet;
	}
	void setInch(float s){
		this->inch=s;
	}
	float getInch()
	{
		return this->inch;
	}
};
int main(){
	Distance d;
	d.setFeet(5.5);
	d.setInch(60.10);
	d.display();
	
}