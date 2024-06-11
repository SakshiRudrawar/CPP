#include <iostream>
#include <cstring>

using namespace std;

class employee
{
    int id;
    char name[20];
    double salary;

public:
    employee()
    {
    	this->id=0;
        strcpy(this->name, "not given");
        this->salary=0;
    }

    employee(int i, char *nm, double s)
    {
    	this->id=i;
        strcpy(this->name, nm);
        this->salary=s;
    }

    void setid(int i)
    {
        this->id = i;
    }

    void setname(char *a)
    {
        strcpy(this->name, a);
    }

    void setsalary(double s)
    {
        this->salary = s;
    }

    int getid()
    {
        return this->id;
    }

    char *getname()
    {
        return this->name;
    }

    double getsalary()
    {
        return this->salary;
    }

    virtual void display()
    {
        cout << "\n id :" << this->id;
        cout << "\n name :" << this->name;
        cout << "\n salary :" << this->salary;
    }

    virtual double calsal()
    {
        return getsalary();
    }
};

class salesManager : public employee
{
    double incentive;
    int target;

public:
    salesManager() 
    {
        this->incentive = 0;
        this->target = 0; 
    }

    salesManager(int i, char *nm, double s, double in, int t) : employee(i, nm, s)
    {
        this->incentive = in;
        this->target = t;
    }

    void setincentive(double in)
    {
        this->incentive = in;
    }

    void settarget(int t)
    {
        this->target = t;
    }

    double getincentive()
    {
        return this->incentive;
    }

    int gettarget()
    {
        return this->target;
    }

    void display()
    {
        employee::display();
        cout << "\n incentive : " << this->incentive;
        cout << "\n target :" << this->target;
        cout << "\n";
    }

    double calsal()
    {
        return getsalary() + incentive;
    }
};

class admin : public employee
{
    double allowance;

public:
	
    admin() 
    {
        this->allowance=0;
    }

    admin(int i, char *nm, double s, double a) : employee(i, nm, s)
    {
        this->allowance = a;
    }

    void setallowance(double al)
    {
        this->allowance = al;
    }

    double getallowance()
    {
        return this->allowance;
    }

    void display()
    {
        employee::display();
        cout << "\n allowance :" << this->allowance;
        cout << "\n";
    }

    double calsal()
    {
        return getsalary() + allowance;
    }
};

class HR : public employee
{
    double commissions;

public:
	
    HR() 
    {
        this->commissions = 0;
    }

    HR(int i, char *nm, double s, double c) : employee(i, nm, s) 
    {
        this->commissions = c;
    }

    void setcommissions(double c)
    {
        this->commissions = c;
    }

    double getcommissions()
    {
        return this->commissions;
    }

    void display()
    {
        employee::display();
        cout << "\n commissions : " << this->commissions;
        cout << "\n";
    }

    double calsal()
    {
        return getsalary() + commissions;
    }
};

void displayEmployeeDetails(employee *ep)
{
    ep->display();
    cout << "Total salary is: " << ep->calsal() << endl;

    salesManager *sp = dynamic_cast<salesManager *>(ep);
    
    if (sp != NULL)
    {
        cout << "Incentive for sales manager after downcasting: " << sp->getincentive() << endl;
    }

    admin *ap = dynamic_cast<admin *>(ep);
    
    if (ap != NULL)
    {
        cout << "Allowance for admin after downcasting: " << ap->getallowance() << endl;
    }

    HR *hp = dynamic_cast<HR *>(ep);
    
    if (hp != NULL)
    {
        cout << "Commissions for HR after downcasting 
		: " << hp->getcommissions() << endl;
    }
}

int main()
{
    employee e1(101, "sakshi", 30000);
    displayEmployeeDetails(&e1);

    salesManager s1(102, "vaishnavi", 40000, 5000, 10);
    displayEmployeeDetails(&s1);

    admin a1(103, "dipali", 35000, 2000);
    displayEmployeeDetails(&a1);

    HR h1(104, "mayuri", 38000, 3000);
    displayEmployeeDetails(&h1);

    return 0;
}






