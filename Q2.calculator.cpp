#include<stdio.h>

struct calculator
{

	int sum (int a,int b)
	{
		return a+b;	
	}
	
	int sub (int a,int b)
	{
		return a-b;	
	}
	
	int mul (int a,int b)
	{
		return a*b;	
	}
	
	int div (int a,int b)
	{
		return a/b;	
	}
	
	float sum(int a, float b)
	{
		return a+b;
	}
	
	float sub(int a, float b)
	{
		return a-b;
	}
	
	float mul(int a, float b)
	{
		return a*b;
	}
	
	float div( int a,float b)
	{
		return a/b;
	}
	
	float sum(float a,int b)
	{
		return a+b;	
	}
	
	float sub(float a,int b)
	{
		return a-b;	
	}
	
	float mul(float a,int b)
	{
		return a*b;	
	}
	
	float div(float a,int b)
	{
		return a/b;	
	}
	
	float sum(float a,float b)
	{
		return a+b;	
	}
	
	float sub(float a,float b)
	{
		return a-b;	
	}
	
	float mul(float a,float b)
	{
		return a*b;	
	}
	
	float div(float a,float b)
	{
		return a/b;	
	}
};

int main()
{
	int a=10,b=5;
	float i=32.5, j=40.8;
	calculator c1;
	
	printf("int addition:%d\n",c1.sum(a,b));
	printf("float addition:%f\n",c1.sum(a,j));
	printf("float addition:%f\n",c1.sum(i,b));
	printf("float addition:%f\n",c1.sum(i,j));
	
	printf("\nint substraction:%d\n",c1.sub(a,b));
	printf("float substraction:%f\n",c1.sub(a,j));
	printf("float substraction:%f\n",c1.sub(i,b));
	printf("float substraction:%f\n",c1.sub(i,j));
	
	printf("\nint multiplication:%d\n",c1.mul(a,b));
	printf("float multiplication:%f\n",c1.mul(a,j));
	printf("float multiplication:%f\n",c1.mul(i,b));
	printf("float multiplication:%f\n",c1.mul(i,j));
	
	printf("\nint division:%d\n",c1.div(a,b));
	printf("float division:%f\n",c1.div(a,j));
	printf("float division:%f\n",c1.div(i,b));
	printf("float division:%f\n",c1.div(i,j));
}
