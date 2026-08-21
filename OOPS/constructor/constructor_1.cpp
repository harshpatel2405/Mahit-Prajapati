#include <iostream>
using namespace std;

class Person
{
    // * data members / properties / variables
    string name;
    int age;
    double height;
    double weight;

    // * member functions / behaviour / methods
public:
    //  & default constructor
    Person()
    {
        name = "Harsh";
        age = 22;
        weight = 100;
        height = 190;
        cout << "data has been set successfully.." << endl;
    }

    // & parameterized constructor
    Person(string name, int age, double w, double height)
    {
        this->name = name;
        this->age = age;
        this->height = height;
        this->weight = w;
        cout << "Custom Data has been set" << endl;
    }

    void getData()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl;
        cout << "Height : " << height << endl;
    }
};

int main()
{
    // ! constructor calling
    Person p;                       // & default
    Person p1("Vasu", 23, 67, 180); // & parameterized

    // * printing values  (fetch)
    p.getData();
    // p1.getData();

    // cout << Person :: name;
    return 0;
}