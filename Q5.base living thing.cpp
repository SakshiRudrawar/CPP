#include<iostream>
#include<string>

using namespace std;

// Base class
struct MusicalInstrument
{
    string name;
    double price;

    MusicalInstrument()
    {
        name = "not given";
        price = 0.0;
    }

    MusicalInstrument(const string& name, double price) : name(name), price(price) {}

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nPrice: $" << price;
    }
};

// Derived class Guitar
struct Guitar : public MusicalInstrument
{
    int strings;

    Guitar() : MusicalInstrument()
    {
        strings = 0;
    }

    Guitar(const string& name, double price, int strings) : MusicalInstrument(name, price), strings(strings) {}

    void display()
    {
        MusicalInstrument::display();
        cout << "\nStrings: " << strings;
    }
};

// Derived class Piano
struct Piano : public MusicalInstrument
{
    int keys;

    Piano() : MusicalInstrument()
    {
        keys = 0;
    }

    Piano(const string& name, double price, int keys) : MusicalInstrument(name, price), keys(keys) {}

    void display()
    {
        MusicalInstrument::display();
        cout << "\nKeys: " << keys;
    }
};

int main()
{
    Guitar guitar1;
    Guitar guitar2("Acoustic Guitar", 500.0, 6);

    cout << "\n\nGuitar ";
    guitar2.display();

    Piano piano1;
    Piano piano2("Grand Piano", 5000.0, 88);

    cout << "\n\nPiano ";
    piano2.display();

    return 0;
}

