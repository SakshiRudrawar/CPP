#include<stdio.h>
void discount(int&,int&,char&,int&,int&,int&,int&);

int main()
{
	int price,total,a,b,c,d;
	char ans;
	
	printf("Enter the price:");
	scanf("%d",&price);
	
	printf("Are you a student(y/n):",ans);
	scanf(" %c",&ans);
	
	discount(price, total, ans, a,  b, c, d);
	
	if(a==total)
	{
	printf("%d is the total after 20 discount",a);	
	}
	if(b==total)
	{
	printf("%d is the total after 10 discount",b);	
	}
	if(total==c)
	{
	printf("%d is the total after 15 discount",c);	
	}
	if(total==d)
	{
	printf("%d is the total after 0 discount",d);	
	}
	return 0;
	
}

void discount(int& price, int&total, char&ans, int&a, int&b, int&c, int&d)
{
	if(ans=='y')
	{
		if(price>=500)
		{
			a= total= price-(price*20/100);	
		//	printf("%d is the total after 20% discount",total);
		}
		else
		{
			 b= total= price-(price*10/100);
		//	printf("%d is the total after 10% discount",total);
		}
	}
	if(ans=='n')
	{
		if(price>=600)
		{
			c= total= price-(price*15/100);
		
		//	printf("%d is the total after 15% discount",total);
		}
		else
		{
			d= total= price;
			
		//	printf("%d id the total after 0% discount",total);
		}
	}
}








