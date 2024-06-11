#include<stdio.h>

int angle(int&,int&,int&,int&,int&);

int main()
{
	int rectangle,perimeter,circle,circumference,choice;
	
	    printf("Enter the your choice 1-rectangle or 2-circle:",choice);
    	scanf("%d",&choice);
    	
    	angle(rectangle, perimeter, circle, circumference, choice);
    	
    	if(choice==1)
    	{
	    printf("The rectangle is:%d\n",rectangle);
	    printf("The perimeter is:%d\n",perimeter);
		}
	    if(choice==2)
	    {
	    printf("The redius of circle is:%d\n",circle);
	    printf("The circumference is:%d\n",circumference);
	    }
	
}

int angle(int&rectangle, int&perimeter, int&circle, int&circumference, int&choice)
	{
		int length,width,radius;
		
		if(choice==1)
	{
		printf("Enter the length:",length);
		scanf("%d",&length);
		printf("Enter the width:",width);
		scanf("%d",&width);
		rectangle=length*width;
		perimeter=length+width;
	}
	
	if(choice==2)
	{	
	    printf("Enter the radius:",radius);
		scanf("%d",&radius);
		
		circle = 3.14*radius*radius;
     	circumference = 2*3.14*radius;
		
	}	
}










