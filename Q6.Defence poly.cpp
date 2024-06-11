using namespace std;
#include<iostream>
#include<string.h>
struct DefenceForce
{
	char name[20],weapon[20],type[20];
	int noofsoldiers;
	
	
	
	DefenceForce()
	{
		cout<<"\n\nDefault Constructor of Defence Force";
		
		strcpy(this->name,"not given");
		strcpy(this->weapon,"not given");
		strcpy(this->type,"Not given");
		this->noofsoldiers=0;
		
		
	}
	
	DefenceForce(char* nm, char* wp, char* tp,int s)
	{
		cout<<"\nParameter Constructor of Defence Force"<<"\n";
		
		strcpy(this->name,nm);
		strcpy(this->weapon,wp);
	    strcpy(this->type,tp);
		this->noofsoldiers=s;
		
		
		
	} 



virtual void display()
{
	
	cout<<"\nName of force: " << this->name;
    cout<<"\nName of weapon: "<<this->weapon;
	cout<<"\ntype : "<<this->type;
	cout<<"\nSoldiers: "<<this->noofsoldiers;

 }
 
 
 virtual int soldiersn()
 {
 	
 	int sn;
 	sn = this->noofsoldiers;
 	
 	return sn;
 	
 }


};

struct Army : public DefenceForce
{
	int truck;
	char border[20];
	
 	Army():DefenceForce()
	{
	    cout<<"\nDefault Constructor of Army";

		this->truck=0;
		strcpy(this->border,"not given");
	}
	
	Army(char* nm,char* wp,char*tp,int s,int t,char* b ):DefenceForce(nm,wp,tp,s)
	{
		cout<<"\nParameter Constructor of Army"<<"\n";

		this->truck=t;
		strcpy(this->border,b);
	}
	
	void display()
	{
		DefenceForce::display();
		cout<<"\nNo of Truck are:"<<this->truck;
		cout<<"\nName of Border is:  "<<this->border;
	}
	
	
	int soldiersn()
 {
 	
 	int asn;
 	
 	asn = this->noofsoldiers + this->truck;
 	
 	return asn;
 	
 }
};

struct AirForce : public DefenceForce
{
	int plane;
	int pilot;
	
 	AirForce():DefenceForce()
	{
	    cout<<"\nDefault Constructor of Air Force";

		this->plane=0;
		this->pilot=0;
	}
	
	AirForce(char* nm,char* wp,char*tp,int s,int p,int plt ):DefenceForce(nm,wp,tp,s)
	{
		cout<<"\nParameter Constructor of Air force"<<"\n";

		this->plane=p;
		this->pilot=plt;
	}
	
	void display()
	{
		DefenceForce::display();
		cout<<"\nNo of Plane are:"<<this->plane;
		cout<<"\nNo of Pilot is:  "<<this->pilot;
	}
	
	int soldiersn()
 {
 	
 	int arsn;
 	arsn = this->noofsoldiers + this->plane;
 	
 	return arsn;
 	
 }
};


struct Navy : public DefenceForce
{
	int ship;
	char founder[50];
	
 	Navy():DefenceForce()
	{
	    cout<<"\nDefault Constructor of Navy";

		this->ship=0;
		strcpy(this->founder,"not given");
	}
	
	Navy(char* nm,char* wp,char*tp,int s,int sh,char* fd ):DefenceForce(nm,wp,tp,s)
	{
		cout<<"\nParameter Constructor of Navy"<<"\n";

		this->ship=sh;
		strcpy(this->founder,fd);
	}
	
	void display()
	{
		DefenceForce::display();
		cout<<"\nNo of ship are:"<<this->ship;
		cout<<"\nName of Founder is:  "<<this->founder;
	}
	
	
	int soldiersn()
 {
 	
 	int nsn;
 	nsn = this->noofsoldiers + this->ship;
 	
 	return nsn;
 	
 }
};



int main()
{
	DefenceForce* df;
	
	DefenceForce df1("Armedna","Gun","3no",150000);
	df = &df1;
	df->display();
	cout<<"\nDefence Force  has total: " <<df->soldiersn();
	
		
	Army a2("Army","Tank","Armed Force",50000,200,"Kashmir");
	
	df=&a2;
	df->display();
	cout<<"\nArmy Force  has total :" <<df->soldiersn();

	AirForce af2("IAF","Fighter Plane","Air field force",40000,145,2500);
	
	df= &af2;
	df->display();
	cout<<"\nAir Force has total: " <<df->soldiersn();
	
	
	Navy n2("INS","Submarine","Nval Force",60000,170,"Chattrapati Shivaji Maharaj");
	
   	df=& n2;
	df->display();
	cout<<"\nNavy Force  has total: " <<df->soldiersn()<<"\n";


	
}