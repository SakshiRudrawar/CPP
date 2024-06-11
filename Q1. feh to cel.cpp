#include<stdio.h>
int main()
{
	float fehrenheit , celsius;
	
	printf("enter the temp in fehrenheit");
	scanf("%f",&fehrenheit);
	
	celsius = (fehrenheit-32) / 1.8;
	printf("\n temperature in celsius %f", celsius);
	
	return 0;
	
}
