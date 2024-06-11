using namespace std;
#include<iostream>
#include<string.h>
struct Politician
{
	char name[20];
	char assembly[20], party[20];
	int vote;
	
	
	Politician()
	{
		cout<<"\n\nDefault Constructor of Politician";
		
		strcpy(this->name,"not given");
		strcpy(this->assembly,"not given");
		strcpy(this->party,"not given");
		this->vote=0;
		
		
	}
	
	Politician(char* nm, char* ass,char* pt,int v)
	{
		cout<<"\nParameter Constructor of Politician"<<"\n";
		
		strcpy(this->name,nm);
		strcpy(this->assembly,ass);
		strcpy(this->party,pt);
		this->vote=v;
		
		
		
	} 
	
virtual	void display()
	
	{
		cout<<"\nName:"<<this->name;
		cout<<"\nAssembly: "<<this->assembly;
		cout<<"\nParty: "<<this->party;
		cout<<"\nVotes:"<<this->vote;
	}
	
	
		virtual void behave()
	{
		cout<<"Politician elected by peoples from their respective Area"<<this->assembly<<"\n";
	}
};

struct Sarpanch : public Politician

{
	char village[20];
	int noward;
	
	Sarpanch(): Politician()
	{
		cout<<"\n\nDefault Constructor of Sarpanch";
		
		strcpy(this->village,"not given");
		this->noward=0;
		
		
	}
	
	Sarpanch(char* nm,char* ass,char* pt,int v,char* vl,int wd): Politician(nm,ass,pt,v)
	{
		cout<<"\n\nDefault Constructor of Sarpanch";
		
		strcpy(this->village,vl);
		this->noward=wd;
		
		
	}
	
	void display()
	{
		Politician::display();
		
		cout<<"\nVillage is: "<<village;
		cout<<"\nWards no are:"<<noward<<"\n";
	}
	
		virtual void behave()
	{
		cout<<"sarpanch is elected by peoples of village "<<this->village<<"\n";
	}
};


struct Mla : public Politician
{
	char district[20];
	int mop;
	
	Mla(): Politician()
	{
		cout<<"\n\nDefault Constructor of Mla";
		
		strcpy(this->district,"not given");
		this->mop=0;
		
		
	}
	
	Mla(char* nm,char* ass,char* pt,int v,char* dis,int m): Politician(nm,ass,pt,v)
	{
		cout<<"\n\nDefault Constructor of Mla";
		
		strcpy(this->district,dis);
		this->mop=m;
		
		
	}
	
	void display()
	{
		Politician::display();
		
		cout<<"\nDistrict is: "<<district;
		cout<<"\n Members of party:"<<mop<<"\n";
	}
	
	virtual void behave()
	{
		cout<<"MLA is elected by peoples of District "<<this->district<<"\n";
	}
	
};

int main()
{
	
	Politician* pol;
	Politician p1("modi","parliment","Bhartiy",50000000000);
	pol= &p1;
	
	pol->display();
	pol->behave();
	

	Sarpanch s2("Gaurav","Gramsabha","Bjp",20000,"Kawa",10);
	
   	pol =&s2;
	
	pol->display();
	pol->behave();
	
	
	Mla m2("Sanjay","Rajyasabha","NCP",5000000,"Yavatmal",200);
	
	pol =&m2;
	pol->display();
	pol->behave();
 
}
