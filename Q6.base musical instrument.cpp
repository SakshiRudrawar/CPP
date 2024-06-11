#include<iostream>
#include<string>

using namespace std;

// Base class
class MusicalInstrument
{
protected:
    char name[30];
    double price;

public:
    MusicalInstrument(char*name, double price) : name(name), price(price) {}

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nPrice: $" << price;
    }
};

// Derived class Guitar
class Guitar : public MusicalInstrument
{
private:
    int strings;

public:
    Guitar(char* name, double price, int strings) : MusicalInstrument(name, price), strings(strings) {}

    void display()
    {
        MusicalInstrument::display();
        cout << "\nStrings: " << strings;
    }
};


class Piano : public MusicalInstrument
{
private:
    int keys;

public:
    Piano(char* name, double price, int keys) : MusicalInstrument(name, price), keys(keys) {}

    void display()
    {
        MusicalInstrument::display();
        cout << "\nKeys: " << keys;
    }
};

int main()
{
    Guitar g("Guitar", 500.0, 6);
    cout << "Guitar Details:";
    g.display();
    
    Piano p("Grand Piano", 5000.0, 88);
	cout << "\n\nPiano Details:";
    p.display();

    return 0;
}







