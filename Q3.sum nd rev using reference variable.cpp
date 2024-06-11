#include<stdio.h>
int add(int&,int&,int&,int&,int&);
int main()
{
	int num1,num2,num3,sum,rev;
	printf("Enter the num1:",num1);
	scanf("%d",&num1);
	printf("Enter the num2:",num2);
	scanf("%d",&num2);
	printf("Enter the num3:",num3);
	scanf("%d",&num3);
	add(num1,num2,num3,rev,sum);
	printf("The revers number is: %d\n The sum of number is: %d",rev,sum);
	
	return 0;
}

int add(int& a,int& b,int& c,int& rev,int& sum)
{
	
	rev=c*100+b*10+a;
    sum=a+b+c;
	
}
