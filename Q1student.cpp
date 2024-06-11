#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
	int marks;
	
	//setter
	void setroll(int a)                 
	{
		this->roll=a;
	}
	//getter
	int getroll()                       //getter
	{
		return this->roll;
	}
	void display()                      //display
	{
		printf("\n%d is %s and marks: %d",this->roll,this->name,this->marks);
	}
	void setname(char* n)                 
	{
		strcpy(this->name,n);
	}
	char* getname()                   //getter
	{
		return this->name;
	}
	void setmark(int m)
	{
		this->marks=m;
	}
	int getmark()
	{
		return this->marks;
	}
	
};
int main()
{
	student s1,s2;
	
	//setter
	s1.setroll(10);
	s2.setroll(20);
	
	s1.setname("ajit");                     //setter
	s2.setname ("jay"); 
	s1.setmark(89);
	s2.setmark(98);                   //setter
	s1.display();
	s2.display();

//	if(s1.getroll()<s2.getroll())
//	{
//		printf("\ns1 is older than the s2");
//	}
}