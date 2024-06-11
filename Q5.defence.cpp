#include<iostream>
#include<cstring>

using namespace std;

struct DefenceForce
{
    char name[20], weapon[20], type[20];
    int noofsoldiers;

    DefenceForce()
    {
        cout << "\n\nDefault Constructor of Defence Force";

        strncpy(this->name, "not given", sizeof(this->name));
        strncpy(this->weapon, "not given", sizeof(this->weapon));
        strncpy(this->type, "Not given", sizeof(this->type));
        this->noofsoldiers = 0;
    }

    DefenceForce(char* nm, char* wp, char* tp, int s)
    {
        cout << "\nParameter Constructor of Defence Force" << "\n";

        strncpy(this->name, nm, sizeof(this->name));
        strncpy(this->weapon, wp, sizeof(this->weapon));
        strncpy(this->type, tp, sizeof(this->type));
        this->noofsoldiers = s;
    }

    virtual void display()
    {
        cout << "\nName of force: " << this->name;
        cout << "\nName of weapon: " << this->weapon;
        cout << "\nType: " << this->type;
        cout << "\nSoldiers: " << this->noofsoldiers;
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

    Army() : DefenceForce()
    {
        cout << "\nDefault Constructor of Army";

        this->truck = 0;
        strncpy(this->border, "not given", sizeof(this->border));
    }

    Army(char* nm, char* wp, char* tp, int s, int t, char* b) : DefenceForce(nm, wp, tp, s)
    {
        cout << "\nParameter Constructor of Army" << "\n";

        this->truck = t;
        strncpy(this->border, b, sizeof(this->border));
    }

    void display()
    {
        DefenceForce::display();
        cout << "\nNo of Trucks are: " << this->truck;
        cout << "\nName of Border is:  " << this->border;
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

    AirForce() : DefenceForce()
    {
        cout << "\nDefault Constructor of Air Force";

        this->plane = 0;
        this->pilot = 0;
    }

    AirForce(char* nm, char* wp, char* tp, int s, int p, int plt) : DefenceForce(nm, wp, tp, s)
    {
        cout << "\nParameter Constructor of Air force" << "\n";

        this->plane = p;
        this->pilot = plt;
    }

    void display()
    {
        DefenceForce::display();
        cout << "\nNo of Planes are: " << this->plane;
        cout << "\nNo of Pilots are:  " << this->pilot;
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

    Navy() : DefenceForce()
    {
        cout << "\nDefault Constructor of Navy";

        this->ship = 0;
        strncpy(this->founder, "not given", sizeof(this->founder));
    }

    Navy(char* nm, char* wp, char* tp, int s, int sh, char* fd) : DefenceForce(nm, wp, tp, s)
    {
        cout << "\nParameter Constructor of Navy" << "\n";

        this->ship = sh;
        strncpy(this->founder, fd, sizeof(this->founder));
    }

    void display()
    {
        DefenceForce::display();
        cout << "\nNo of Ships are: " << this->ship;
        cout << "\nName of Founder is:  " << this->founder;
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

    DefenceForce df1("Armed Forces", "Gun", "3no", 150000);
    df = &df1;
    df->display();
    cout << "\nDefence Force has a total: " << df->soldiersn();

    Army a2("Army", "Tank", "Armed Force", 50000, 200, "Kashmir");

    df = &a2;
    df->display();
    cout << "\nArmy Force has a total: " << df->soldiersn();

    AirForce af2("IAF", "Fighter Plane", "Air field force", 40000, 145, 2500);

    df = &af2;
    df->display();
    cout << "\nAir Force has a total: " << df->soldiersn();

    Navy n2("INS", "Submarine", "Naval Force", 60000, 170, "Chattrapati Shivaji Maharaj");

    df = &n2;
    df->display();
    cout << "\nNavy Force has a total: " << df->soldiersn() << "\n";

    return 0;
}

