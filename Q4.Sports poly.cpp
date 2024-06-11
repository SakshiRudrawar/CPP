#include<iostream>
using namespace std;
#include<cstring>
struct Sports{
    char pname[40];
    int Nplayers;
    char Aname[40];

    Sports()
    {
        strcpy(this->pname,"not given");
        this->Nplayers=0;
        strcpy(this->Aname,"not given");


    }
    Sports(char * pnm,int p,char * A)
    {
        strcpy(this->pname,pnm);
        this->Nplayers=p;
        strcpy(this->Aname,A);

    }
    virtual void display()
    {
        cout<<"\nPlayer Name :"<<this->pname;
        cout<<"\nNumber of Players:"<<this->Nplayers;
        cout<<"\nAssociate Board Name:"<<this->Aname;

    }


    
};
struct Cricket : public Sports{
    int  runs;
    int wicket;
    Cricket()
    {
        this->runs=0;
        this->wicket=0;

    }
    Cricket(char* pnm,int p,char*A,int r,int w):Sports(pnm,p,A)
    {
        this->runs=r;
        this->wicket=w;

    }

    void display()
    {
         cout<<"\n---------------------------------------Cricket Details--------------------------------------------------------";
        Sports::display();
        cout<<"\nNo of Runs:"<<this->runs;
        cout<<"\nNo of Wickets:"<<this->wicket;

    }

};
struct Football : public Sports{
    int  Goals;
    int Faul; 
    Football()
    {
        this->Goals=0;
        this->Faul=0;

    }
    Football(char*pnm,int p,char*A,int G,int F):Sports(pnm,p,A)
    {
        this->Goals=G;
        this->Faul=F;

    }
    void display()
    {
        cout<<"\n--------------------------------------------FootBall Details------------------------------------------------";
        Sports::display();
        cout<<"\nNo of Goals:"<<this->Goals;
        cout<<"\nNo of Faul:"<<this->Faul;
        cout<<"\n-------------------------------------------------------------------------------------------------------------";

    }

};
int main()
{
       Sports * sp;
       Sports s1("Shahid",10,"Kashmir");
       sp=&s1;
       
       cout<<"\n---------------------------------------Sports Details--------------------------------------------------------";
           sp->display();

       Cricket c1("parth",11,"BCCI",264,5);
       sp=&c1;
       sp->display();

       Football f1("vaibhav",9,"Bundesliga",4,1);
       sp=&f1;
       sp->display();

}

