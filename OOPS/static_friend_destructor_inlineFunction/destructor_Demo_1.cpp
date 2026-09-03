#include <iostream>
using namespace std;

class Person
{

    string name;

public:
    Person(string name)
    {
        this->name = name;
        cout << "Object Created : " << name << endl;
    }

    void display()
    {
        cout << "Name : " << name << endl;
    }

    ~Person()
    {
        cout << "Object Destroyed : " << name << endl;
    }
};

int main()
{
    Person p1("p1");
    Person p2("p2");

    p1.display();
    p2.display();
    return 0;
}