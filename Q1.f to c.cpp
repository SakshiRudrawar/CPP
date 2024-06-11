#include<stdio.h>

float temp(float&,float&);

int main()
{
	float celsius,fahrenheit;
	
	 printf("Enter the  tempeture in clesius:");
	 scanf("%f",&celsius);
	 
	printf("Before celsius=%f\n",celsius); 
	
	temp(fahrenheit, celsius);
	
	printf("After fahrenheit=%f",fahrenheit); 
	
	return 0;
}

float temp(float& x,float& y)
{
    x= (y * 9/5) + 32;
}
