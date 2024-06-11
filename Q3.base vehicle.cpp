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

    void display()
    {
        cout << "\n company_name: " << this->company_name;
        cout << "\n model_no: " << this->model_no;
        cout << "\n color: " << this->color;
        cout << "\n brake: " << this->brake;
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
};

int main()
{
    car c1;
    car c2("honda", 345, "black", "disc", 4, 6, 1); 
    c2.display();

    bike b1;
    bike b2("hundia", 6670, "grey", "drum", 1, "black" ); 
    b2.display();
    return 0;
}

