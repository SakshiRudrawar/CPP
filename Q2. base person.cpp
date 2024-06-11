#include<iostream>
#include<string.h>

using namespace std;

struct person
{
    char name[20];
    int age;
    char gender[50];
    char qualification[20];

    person()
    {
        strcpy(this->name, "not given");
        this->age = 0;
        strcpy(this->gender, "never");
        strcpy(this->qualification, "none");
    }

    person(char* nm, int a, char* g, char* q)
    {
        strcpy(this->name, nm);
        this->age = a;
        strcpy(this->gender, g);
        strcpy(this->qualification, q);
    }

    void display()
    {
        cout << "\n name: " << this->name;
        cout << "\n age: " << this->age;
        cout << "\n gender: " << this->gender;
        cout << "\n qualification: " << this->qualification;
    }
};

struct student : public person
{
    int rollno;
    int std;
    double marks;

    student() : person()
    {
        this->rollno = 0;
        this->std = 0;
        this->marks = 0;
    }

    student(char* nm, int a, char* g, char* q, int r, int s, double m) : person(nm, a, g, q)
    {
        this->rollno = r;
        this->std = s;
        this->marks = m;
    }

    void display()
    {
        person::display();

        cout << "\n rollno: " << this->rollno;
        cout << "\n std: " << this->std;
        cout << "\n marks: " << this->marks;
        cout << "\n";
    }
};

struct emp : public person
{
    int e_id;
    double salary;
    double incentive;

    emp() : person()
    {
        this->e_id = 0;
        this->salary = 0;
        this->incentive = 0;
    }

    emp(char* nm, int a, char* g, char* q, int i, double s, double in) : person(nm, a, g, q)
    {
        this->e_id = i;
        this->salary = s;
        this->incentive = in;
    }

    void display()
    {
        person::display();

        cout << "\n e_id: " << e_id;
        cout << "\n salary: " << salary;
        cout << "\n incentive: " << incentive;
        cout << "\n";
    }
};

int main()
{
    student s1;
    student s2("sakshi", 22, "female", "btech", 12, 10, 90);
    s2.display();

    emp e1;
    emp e2("sachin", 23, "male", "btech", 111, 300000, 20000);
    e2.display();
}

