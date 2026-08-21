#include <iostream>
using namespace std;

class Person
{
    // * data members / properties / variables
    // private:
    // protected:
public:
    string name;
    int age;
    double height;
    double weight;
};

int main()
{
    Person p;

    // * assign value
    p.name = "Harsh";
    p.age = 22;
    p.weight = 100;
    p.height = 190;

    // * printing values  (fetch)
    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "Weight : " << p.weight << endl;
    cout << "Height : " << p.height << endl;

    // cout << Person :: name;
    return 0;
}