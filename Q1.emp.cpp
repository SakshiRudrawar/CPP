#include<iostream>
#include<string.h>

using namespace std;

class employee
{
//private:
    int id;
    char name[20];
    double salary;

public:
    employee()
    {
        this->id = 0;
        strcpy(this->name, "not given");
        this->salary = 0;
    }

    employee(int i, char *nm, double s)
    {
        this->id = i;
        strcpy(this->name, nm);
        this->salary = s;
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
//private:
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
//private:
    double allowance;

public:
    admin()
    {
        this->allowance = 0;
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
//private:
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

int main()
{
	employee*ep;
	employee e1(101, "sakshi", 30000);
	ep=&e1;
	ep->display();
	cout<<"total salary is : "	<< ep->calsal();
	

	salesManager s1(101, "sakshi", 30000, 10000, 5);
	ep=&s1;
	ep->display();
	cout<<"total salary is : "	<< ep->calsal();
	
	
	admin a1(101, "sakshi", 30000, 400);
	ep=&a1;
	ep->display();
	cout<<"total salary is : "	<< ep->calsal();
	

	HR h1(101, "sakshi", 30000, 400);
	ep=&h1;
	ep->display();
	cout<<"total salary is : "	<< ep->calsal();

}





