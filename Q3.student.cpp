#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    int roll;
    char sname[40];
    int std;
    
    public:
    Student()
    {
        this->roll=0;
        strcpy(this->sname,"not given");
        this->std=0;

    }
    Student(int r,char* nm,int s)
    {
        this->roll=r;
        strcpy(this->sname,nm);
        this->std=s;
    }
    
    void setroll(int r)
    {
         this->roll=r;	
	}
	
	
    void setname(char*nm)
    {
    	strcpy(this->sname,"nm");
	}
	
	
    void setstd(int s)
    {
    	this->std=s;	
	}
	
	
    int getroll()
    {
       return this->roll;	
	}
	
	
    char* getname()
    {
       return this->sname;	
	}
	
	
    int getstd()
    {
       return this->std;	
	}
	
	
    virtual void display()
    {
       // cout<<"\n-----------------------------------------------------------------------------------";
        cout<<"\nStudent Roll No:"<<this->roll;
        cout<<"\nStudent Name:"<<this->sname;
        cout<<"\nStudent std:"<<this->std;
    }
    virtual void exel()
    {
        cout<<"\nstudent excellation";
    }

};

class Sports :public Student
{
    float weight;
    float height;
    
    public:
    Sports()
    {
       this->weight=0;
       this->height=0;

    }
    
    Sports(int r,char * nm,int std,float w,float h):Student(r,nm,std)
    {
           this->weight=w;
           this->height=h;

    }
    void display()
    {
        cout<<"\n----------------------------------------Sports student---------------------------------------------------------------";
        Student::display();
        cout<<"\nWeight:"<<this->weight;
        cout<<"\nHeight:"<<this->height;
    }
    
    void setweight(float w)
    {
    	this->weight=w;
	}
	
	 void setheight(float h)
    {
    	this->height=h;	
	} 
	
	float getweight()
    {
        return this->weight;
	} 
	
	float setheight()
    {
    	return this->height;	
	}
	
    void exel()
    {
        cout<<"\nstudent excelled in sports";
    }
};

class Academics :public Student
{
     float marks;

	public:
    Academics()
    {
        this->marks=0;
    }
    
    Academics(int r,char *nm,int std,float m):Student(r,nm,std)
    {
        this->marks=m;
    }
    
    void setmarks(float m)
    {
    	this->marks=m;
	}
	
	float getmarks()
	{
		return this->marks;
	}
    
    
    
   void display()
   {
    cout<<"\n---------------------------------------Academics Student---------------------------------------------------------------";
    Student::display();
   cout<<"\nMarks  are:"<<this->marks;

   }
   void exel()
   {
    cout<<"\nstudent excelled in academics";
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
   }
};
int main()
{
    Student * st;
    Student s1(9,"sakshi",8);
    st=&s1;
    cout<<"\n-------------------------------------Student Details--------------------------------------------------------------------";
    st->display();
    st->exel();

    Sports s2(10,"ketaki",8,68,170.2);
    st=&s2;
    st->display();
    st->exel();

   
     Academics a1(11,"yogini",9,78);
     st=&a1;
    st->display();
    st->exel();

}






