#include<stdio.h>
#include<stdio.h>
struct Complex
{
	float real;
	float imaginary;

	void display()
	{
		printf("Real: %f and Imaginary: %f",this->real,this->imaginary);
	}
	void setReal(float f)
	{
		this->real=f;
	}
	float getReal()
	{
		return this->real;
	}
	void setImaginary(float s){
		this->imaginary=s;
	}
	float getImaginary()
	{
		return this->imaginary;
	}
};
int main(){
	Complex d;
	d.setReal(10.42);
	d.setImaginary(23.53);
	d.display();
	
}