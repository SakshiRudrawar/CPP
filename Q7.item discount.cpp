#include<stdio.h>

int discount(int&, int&, int&, int&, int&, int&, int&);

int main()
{
	int price,total,a,b,c,d,e;
	
	    printf("Enter the price:");
    	scanf("%d",&price);
    	
    discount(price, total, a, b, c, d, e);
    
    if(total==a)
    {
       	printf("%d is the total after 20 discount",a);	
	}
	if(total==b)
	{
       	printf("%d is the total after 15 discount",b);
	}
    if(total==c)
    {
    	printf("%d is the total after 10 discount",c);
	}
	if(total==d)
	{
		printf("%d is the total after 5 discount",d);
	}
	if(total==e)
    {
       	printf("%d is the total after 0 discount",e);
	}
	return 0;
}

int discount(int& price, int& total, int& a, int& b, int& c, int& d, int& e)
{
	if(price>=5000)
	{
		    a= total= price-(price*0.20);
	
		
	}
	if(price>=3000 && price<4999)
	{
			b= total= price-(price*0.15);	
	}
	
	if(price>=2000 && price<2999)
	{
		    c=  total= price-(price* 0.10);
	}
	
	if(price>=500 && price<1999)
	{
		    d= total= price-(price*0.5);
	}
	
	if(price<500)
	{
		    e= total= price-(price* 0.10);
	}
}




