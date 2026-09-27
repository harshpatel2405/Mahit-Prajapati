#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    // Animal a;
    // a.sound();

    // Dog d;
    // d.sound();

    Animal *a;
    Dog d;
    a = &d;

    a->sound();
    return 0;
}