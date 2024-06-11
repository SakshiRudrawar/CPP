#include<iostream>
#include<string.h>

using namespace std;

struct Hardware
{
    char brand[50];
    int model_no;
    int ram;
    char os[30];

    Hardware()
    {
        strcpy(this->brand, "not given");
        this->model_no = 0;
        this->ram = 0;
        strcpy(this->os, "not given");
    }

    Hardware(char* brand, int model_no, int ram, char* os)
    {
        strcpy(this->brand, brand);
        this->model_no = model_no;
        this->ram = ram;
        strcpy(this->os, os);
    }

    void display()
    {
        cout << "\nBrand: " << this->brand;
        cout << "\nModel No: " << this->model_no;
        cout << "\nRAM: " << this->ram << "GB";
        cout << "\nOS: " << this->os;
    }
};


struct Mobile : public Hardware
{
    char sim_slot[20];

    Mobile() : Hardware()
    {
        strcpy(this->sim_slot, "not given");
    }

    Mobile(char* brand, int model_no, int ram, char* os, char* sim_slot) : Hardware(brand, model_no, ram, os)
    {
        strcpy(this->sim_slot, sim_slot);
    }

    void display()
    {
        Hardware::display();
        cout << "\nSIM Slot: " << this->sim_slot;
    }
};


struct Laptop : public Hardware
{
    char mouse[20];
    char keyboard[20];
    char cpu[30];

    Laptop() : Hardware()
    {
        strcpy(this->mouse, "not given");
        strcpy(this->keyboard, "not given");
        strcpy(this->cpu, "not given");
    }

    Laptop(char* brand, int model_no, int ram, char* os, char* mouse, char* keyboard, char* cpu) : Hardware(brand, model_no, ram, os)
    {
        strcpy(this->mouse, mouse);
        strcpy(this->keyboard, keyboard);
        strcpy(this->cpu, cpu);
    }

    void display()
    {
        Hardware::display();
        cout << "\nMouse: " << this->mouse;
        cout << "\nKeyboard: " << this->keyboard;
        cout << "\nCPU: " << this->cpu;
    }
};

int main()
{
    Mobile mobile1;
    Mobile mobile2("Samsung", 123, 4, "Android", "Dual");

    cout << "\n\nMobile 2:";
    mobile2.display();

    Laptop laptop1;
    Laptop laptop2("Dell", 456, 8, "Windows", "Touchpad", "QWERTY", "Intel i5");


    cout << "\n\nLaptop 2:";
    laptop2.display();

    return 0;
}








