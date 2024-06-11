#include<stdio.h>=
struct Triangle
{
	float base;
	float height;
	float side;
	float side1;
	
	void setbase(float base)
	{
		this->base=base;
	}
	
	float getbase()
	{
		return this->base;
	}
	
	void setheight(float height)
	{
		this->height=height;
	}
	
	void setside(float side)
	{
		this->side=side;
	}
	void setside1(float side1)
	{
		this->side1=side1;
	}
};

struct Rectangle
{
	float length;
	float breadth;
	
	void setlength(float length)
	{
		this->length=length;
	}
	void setbreadth(float breadth)
	{
		this->breadth=breadth;
	}
};

struct Circle
{
	float radius;
	
	void setradius(float radius)
	{
		this->radius=radius;
	}
};

struct ShapeOperation
{
	float area(Triangle t)
	{  
	  float temp;
	  temp=0.5 * t.base * t.height;
	  return temp;
		
	}
	float perimeter(Triangle t)
	{  
	  float temp;
	  temp=t.base+t.side+t.side1;
	  return temp;
		
	}
	
	float area(Rectangle r)
	{
		float temp;
		temp=r.length*r.breadth;
		return temp;
	}
	float perimeter(Rectangle r)
	{
		float temp;
		temp=2*(r.length+r.breadth);
		return temp;
	}
	
	float area(Circle c)
	{
		float temp;
		temp=3.14*c.radius*c.radius;
		return temp;
	}
	float perimeter(Circle c)
	{
		float temp;
		temp=2*3.14*c.radius;
		return temp;
	}
};

int main()
{   
 ShapeOperation s;
 int choice;
 printf("enter the choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 	case 1:
   {  
	Triangle t;
	t.setbase(10);
	t.setheight(20);
	t.setside(15);
	t.setside1(30);
	float t1=s.area(t);
	float t2=s.perimeter(t);
	printf("Area of Triangle %f",t1);
	printf("\nPerimeter of triangle %f",t2);
	break;
    }
    
   case 2:	
   {
	Rectangle r;
	r.setlength(15);
	r.setbreadth(10);
	float r1=s.area(r);
	float r2=s.perimeter(r);
	printf("\nArea of rectangle %f",r1);
	printf("\nPerimeter of rectangle %f",r2);
	break;
    }
    
    case 3:
    {
		
	Circle c;
	c.setradius(14);
	float c1=s.area(c);
	float c2=s.perimeter(c);
	printf("\nArea of Circle %f",c1);
	printf("\nPerimeter of Circle %f",c2);
	break;
    }

}
	
}
