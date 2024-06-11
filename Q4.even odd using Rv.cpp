#include<stdio.h>

int evenodd(int&, int&, int&);

int main()
{
	int number,j,k;
	printf("Enter the number:",number);
	scanf("%d",&number);
	
	evenodd(number, j, k);
	
	if(j==number)
	{
		printf("%d Is a even number",j);
	}
	if(k==number)
	{
		printf("%d Is a odd number",k);
	}
	return 0;
}
int evenodd(int& number, int& j, int& k)
{
	
	if(number%2==0)
	{
	 j = number;//	printf("%d is a even number",number);
	}
	else
	{
	 k = number;//	printf("%d is a odd number",number);
	}
}




