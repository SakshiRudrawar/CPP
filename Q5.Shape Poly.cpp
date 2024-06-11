using namespace std;
#include<iostream>
#include<string.h>
struct Shape
{
	char name[20];
	char type[20];
	double area;
	
	
	Shape()
	{
		cout<<"\n\nDefault Constructor of Shape";
		
		strcpy(this->name,"not given");
		strcpy(this->type,"not given");
		this->area=0;
		
		
	}
	
	Shape(char* nm, char* tp,double a)
	{
		cout<<"\nParameter Constructor of Shape"<<"\n";
		
		strcpy(this->name,nm);
		strcpy(this->type,tp);
		this->area=a;
		
		
		
	} 
	
virtual	void display()
	
	{
		cout<<"\nName:"<<this->name;
		cout<<"\nType: "<<this->type;
		cout<<"\nArea:"<<this->area;
	}
	
	virtual void example()
	{
		cout<<"Everything is in shape"<<"\n";
	}

};

struct Circle : public Shape
{
	double diameter,radius;
	
	Circle():Shape()
	{
		cout<<"\nDefault Constructor of Circle";
		this->diameter=0;
		this->radius=0;

	}
	
	Circle(char* nm,char* tp,double a,double d,double r):Shape(nm,tp,a)
	{
	  
	  cout<<"\nParameterized Constructor of Circle";
      this->diameter=d;
      this->radius=r;
	}
	
	void display()
	{
		Shape::display();
		cout<<"\nDiameter is: "<<this->diameter;
		cout<<"\nRadius is: "<<this->radius<<"\n";
	}
	
	virtual void example()
	{
		cout<<"pipes"<<"\n";
	}
	
};


struct Triangle : public Shape
{
	double base,height;
	
	Triangle():Shape()
	{
		cout<<"\nDefault Constructor of Triangle";
		this->base=0;
		this->height=0;

	}
	
	Triangle(char* nm,char* tp,double a,double b,double h):Shape(nm,tp,a)
	{
	  
	  cout<<"\nParameterized Constructor of Triangle";
      this->base=b;
      this->height=h;
	}
	
	void display()
	{
		Shape::display();
		cout<<"\nBase is: "<<this->base;
		cout<<"\nHeight is: "<<this->height<<"\n";
	}
	
	virtual void example()
	{
		cout<<"Sandwitch"<<"\n";
	}
	
	
};

struct Rectangle : public Shape
{
	double length,breadth;
	
	Rectangle():Shape()
	{
		cout<<"\nDefault Constructor of Rectangle";
		this->length=0;
		this->breadth=0;

	}
	
	Rectangle(char* nm,char* tp,double a,double l,double bd):Shape(nm,tp,a)
	{
	  
	  cout<<"\nParameterized Constructor of Circle";
      this->length=l;
      this->breadth=bd;
	}
	
	void display()
	{
		Shape::display();
		cout<<"\nLength is: "<<this->length;
		cout<<"\nBreadth is: "<<this->breadth<<"\n";
	}
	
	virtual void example()
	{
		cout<<"Truck Head"<<"\n";
	}
	
	
};


int main()
{
	
	Shape* sp;
	Shape s;
	
	sp = &s;
	sp->display();
	sp->example();
	
	
	
	Circle c2("Cylinder","cylindric",45,10,4.5);
	sp =&c2;
	sp->display();
	sp->example();
	
	
	Triangle t2("Samosa","Triangular",200,10,20);
	sp = &t2;
	sp->display();
	sp->example();
	
	
	Rectangle r2("Box","Kit",500,50,10);
	sp = &r2;
	
	sp->display();
	sp->example();
	
	
	
}
