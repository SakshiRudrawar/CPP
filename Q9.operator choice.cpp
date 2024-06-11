#include<stdio.h>
int main()
{
	double num1, num2, result;
	char ch;
	
	printf("enter the first number");
	scanf("%lf",&num1);
	
	printf("enter the second number");
	scanf("%lf",&num2);
	
	printf("enter the operator choice (+, -, *, /, %,): ");
	scanf(" %c ", &ch);
	
	if(ch == '+' )
      {
		result=num1+num2;
	 	printf("result is %lf", result);
      }
	 	
	if(ch =='-')
		{
			
	 	result=num1-num2;
	 	printf("result is %lf", result);
	 	
	    }
	    
	if(ch == '*')
		{
	 	
	 	result= num1 * num2;
	 	printf("result is %lf", result);
	 	
	   }
	   
	if(ch == '/')
		{
			
		result=num1/num2;
	    printf("result is %lf", result);
		
		}
	 	
	if(ch == '%') 
		{
				
	 	  result=(int)num1 % (int)num2;
	      printf("result is %lf", result);	
	      
		}
	
	return 0; 
}







