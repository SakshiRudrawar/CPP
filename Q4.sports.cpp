#include<iostream>
#include<cstring>

using namespace std;

class Sports
{
    char pname[40];
    int Nplayers;
    char Aname[40];

public:

    Sports()
    {
        strcpy(this->pname, "not given");
        this->Nplayers = 0;
        strcpy(this->Aname, "not given");
    }

    Sports(char* pnm, int p, char* A)
    {
        strcpy(this->pname, pnm);
        this->Nplayers = p;
        strcpy(this->Aname, A);
    }

    void setpname(char* pnm)
    {
        strcpy(this->pname, pnm);
    }

    void setNplayers(int n)
    {
        this->Nplayers = n;
    }

    void setAname(char* anm)
    {
        strcpy(this->Aname, anm);
    }

    char* getpname()
    {
        return this->pname;
    }

    int getNplayers()
    {
        return this->Nplayers;
    }

    char* getAname()
    {
        return this->Aname;
    }

    virtual void display()
    {
        cout << "\nPlayer Name: " << this->pname;
        cout << "\nNumber of Players: " << this->Nplayers;
        cout << "\nAssociate Board Name: " << this->Aname;
        
    }

    virtual void player()
    {
        cout << "\nPlayers play a sport";
    }
};

class Cricket : public Sports
{
    int runs;
    int wickets;

public:
    Cricket()
    {
        this->runs = 0;
        this->wickets = 0;
    }

    Cricket(char* pnm, int p, char* A, int r, int w) : Sports(pnm, p, A)
    {
        this->runs = r;
        this->wickets = w;
    }

    void setruns(int r)
    {
        this->runs = r;
    }

    void setwickets(int w)
    {
        this->wickets = w;
    }

    int getruns()
    {
        return this->runs;
    }

    int getwickets()
    {
        return this->wickets;
    }

    void display()
    {
        cout << "\n---------------------------------------Cricket Details---------------------------------------------";
        Sports::display();
        cout << "\nNo of Runs: " << this->runs;
        cout << "\nNo of Wickets: " << this->wickets;
        cout << "\n--------------------------------------------------------------------------------------------------";
    }

    void player()
    {
        Sports::player();
        cout << " - Playing cricket";
    }
};

struct Football : public Sports
{
    int Goals;
    int Faul;

public:

    Football()
    {
        this->Goals = 0;
        this->Faul = 0;
    }

    Football(char* pnm, int p, char* A, int G, int F) : Sports(pnm, p, A)
    {
        this->Goals = G;
        this->Faul = F;
    }

    void setGoals(int g)
    {
        this->Goals = g;
    }

    void setFaul(int f)
    {
        this->Faul = f;
    }

    int getGoals()
    {
        return this->Goals;
    }

    int getFaul()
    {
        return this->Faul;
    }

    void display()
    {
        cout << "\n--------------------------------------------Football Details----------------------------------------";
        Sports::display();
        cout << "\nNo of Goals: " << this->Goals;
        cout << "\nNo of Faul: " << this->Faul;
        cout << "\n--------------------------------------------------------------------------------------------------";
    }

    void player()
    {
        Sports::player();
        cout << " - Playing football";
    }
};

int main()
{
    Sports* sp;
    Sports s1("Sakshi", 10, "UP");
    sp = &s1;

    cout << "\n---------------------------------------Sports Details--------------------------------------------------";
    sp->display();
    sp->player(); 
    cout << "\n--------------------------------------------------------------------------------------------------" << endl;

    Cricket c1("vaishnavi", 11, "BCCI", 264, 5);
    sp = &c1;
    sp->display();
    sp->player(); 
    cout << "\n--------------------------------------------------------------------------------------------------" << endl;

    Football f1("ketaki", 9, "Bundesliga", 4, 1);
    sp = &f1;
    sp->display();
    sp->player(); 
    cout << "\n--------------------------------------------------------------------------------------------------" << endl;

    return 0;
}

