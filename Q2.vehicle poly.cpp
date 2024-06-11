#include<iostream>
#include<string.h>

using namespace std;

struct vehicle
{
    char company_name[50];
    int model_no;
    char color[20]; 
    char brake[30];

    vehicle()
    {
        strcpy(this->company_name, "not given");
        this->model_no = 0;
        strcpy(this->color, "not given");
        strcpy(this->brake, "not given");
    }

    vehicle(char* cnm, int m, char* c, char* b)
    {
        strcpy(this->company_name, cnm);
        this->model_no = m;
        strcpy(this->color, c);
        strcpy(this->brake, b);
    }

    virtual void display()
    {
        cout << "\n company_name: " << this->company_name;
        cout << "\n model_no: " << this->model_no;
        cout << "\n color: " << this->color;
        cout << "\n brake: " << this->brake;
    }
    
    virtual void getBrake()
    {
    	cout << "disk and drum breaks are used in vehicle ";
    }
};

struct car : public vehicle
{
    int doors;
    int mirrors; 
    int AC;

    car() : vehicle()
    {
        this->doors = 0;
        this->mirrors = 0;
        this->AC = 0;
    }

    car(char* cnm, int m, char* c, char* b, int d, int mrr, int a) : vehicle(cnm, m, c, b)
    {
        this->doors = d;
        this->mirrors = mrr;
        this->AC = a;
    }

    void display() 
    {
        vehicle::display();

        cout << "\n doors: " << this->doors;
        cout << "\n mirrors: " << this->mirrors;
        cout << "\n AC: " << this->AC;
        cout << "\n";
    }
    
    void getBrake() 
    {
        cout << " drum brake used in a car";
    }
};

struct bike : public vehicle
{
    int stand;
    char helmet_color[20]; 

    bike() : vehicle()
    {
        this->stand = 0;
        strcpy(this->helmet_color, "not given");
    }

    bike(char* cnm, int m, char* c, char* b, int s, char* hc) : vehicle(cnm, m, c, b)
    {
        this->stand = s;
        strcpy(this->helmet_color, hc);
    }

    void display() 
    {
        vehicle::display();

        cout << "\n stand:" << stand;
        cout << "\n helmet_color: " << helmet_color;
        cout << "\n";
    }
    
    void getBrake() 
    {
        cout << " disk brake used in a bike";
    }
};

int main()
{
    vehicle* vp;
    vehicle v1("yehma", 435, "white", "air");
    vp = &v1;
    vp->display();
    cout << "\ntype of brake is: ";
    vp->getBrake();
    cout << endl;

    car c1("honda", 345, "black", "drum", 4, 6, 1); 
    vp = &c1; 
    vp->display();
    cout << "\ntype of brake is: ";
    vp->getBrake();
    cout << endl;

   
    bike b1("hundia", 6670, "grey", "disk", 1, "black" ); 
    vp = &b1; 
    vp->display();
    cout << "\ntype of brake is: ";
    vp->getBrake();
    cout << endl;

    return 0;
}

