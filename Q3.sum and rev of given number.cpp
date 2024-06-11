#include<stdio.h>
int main()
{
	int no, r1, r2, r3, r4, r5, r6, q1, q2, q3, q4, q5, sum, rev;
	
	printf("enter the 6 digit number");
	scanf("%d",&no);
	
	
	r1=no%10;
	q1=no/10;
	
	r2=q1%10;
	q2=q1/10;
	
	r3=q2%10;
	q3=q2/10;
	
	r4=q3*10;
	q4=q3/10;
	
	r5=q4*10;
	q5=q4/10;
	
	r6=q5/10;
	
    sum = r1+r2+r3+r4+r5+r6;
    Printf("sum of 6 digit number is :%d");
    
    rev= r1*100000 + r2*10000 + r3*1000 + r4*100 + r5*10 + r6;
    printf("revese of the given number is : %d ");
    
    return 0;
		
	
	
}
