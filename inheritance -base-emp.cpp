#include<iostream>
#include<string.h>

using namespace std;

struct employee
{
    int id;
    char name[20];
    double salary;

    employee()
    {
        this->id = 0;
        strcpy(this->name, "not given");
        this->salary = 0;
    }

    employee(int i, char* nm, double s)
    {
        this->id = i;
        strcpy(this->name, nm);
        this->salary = s;
    }

    void display()
    {
        cout << "\n id :" << this->id;
        cout << "\n name :" << this->name;
        cout << "\n salary :" << this->salary;
    }

    double calsal()
    {
        return salary;
    }
};

struct salesManager : public employee
{
    double incentive;
    int target;

    salesManager()
    {
        this->incentive = 0;
        this->target = 0;
    }

    salesManager(int i, char* nm, double s, double in, int t) : employee(i, nm, s)
    {
        this->incentive = in;
        this->target = t;
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
        return salary + incentive;
    }
};

struct admin : public employee
{
    double allowance;

    admin()
    {
        this->id = 0;
        strcpy(this->name, "not given");
        this->salary = 0;
        this->allowance = 0;  // Corrected initialization
    }

    admin(int i, char* nm, double s, double a) : employee(i, nm, s)
    {
        this->allowance = a;
    }

    void display()
    {
        employee::display();
        cout << "\n allowance :" << this->allowance;
        cout << "\n";
    }

    double calsal()
    {
        return salary + allowance;
    }
};

struct HR : public employee
{
    double comissions;

    HR()
    {
        this->comissions = 0;
    }

    HR(int i, char* nm, double s, double c) : employee(i, nm, s)
    {
        this->comissions = c;
    }

    void display()
    {
        employee::display();
        cout << "\n comissions : " << this->comissions;
        cout << "\n";
    }

    double calsal()
    {
        return salary + comissions;
    }
};

int main()
{
    employee e1;
    employee e2(101, "sakshi", 30000);
    e2.display();
    cout << "total salary is : " << e2.calsal();

    salesManager s1;
    salesManager s2(101, "sachin", 30000, 10000, 5);
    s2.display();
    cout << "total salary is : " << s2.calsal();

    admin a1;
    admin a2(101, "yogini", 30000, 400);
    a2.display();
    cout << "total salary is : " << a2.calsal();

    HR h1;
    HR h2(101, "akash", 30000, 400);
    h2.display();
    cout << "total salary is : " << h2.calsal();
}

