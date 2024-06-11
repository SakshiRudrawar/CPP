#include<stdio.h>
int compare(int&, int&, int&);

int main()
{
	int a=10 , b=40, c=30, max;
	max=compare(a , b, c);
	printf("maximum number is %d", max);
	return 0;
}

int compare(int& a , int& b , int& c)
{
	int max;
	
	if(a>b && a>c)
	 {
	 	max=a;
	 }
	 
	if(b>a && b>c)
	{
	    max =b;
	}
	
		if(c>a && c>b)
	{
		max = c;
	}
	
	return max;
}




