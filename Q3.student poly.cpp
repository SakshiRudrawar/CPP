#include<iostream>
#include<cstring>
using namespace std;
struct Student{
    int roll;
    char sname[40];
    int std;
    Student()
    {
        //default constructor:
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
struct Sports :public Student{
    float weight;
    float height;
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
    void exel()
    {
        cout<<"\nstudent excelled in sports";
    }
};
struct Academics :public Student{
     float marks;

    Academics()
    {
        this->marks=0;

    }
    Academics(int r,char *nm,int std,float m):Student(r,nm,std)
    {
        this->marks=m;
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
    Student s1(9,"shahid",8);
    st=&s1;
    cout<<"\n-------------------------------------Student Details--------------------------------------------------------------------";
    st->display();
    st->exel();

    Sports s2(10,"parth",8,68,170.2);
    st=&s2;
    st->display();
    st->exel();

   
     Academics a1(11,"vaibhav",9,78);
     st=&a1;
    st->display();
    st->exel();

}