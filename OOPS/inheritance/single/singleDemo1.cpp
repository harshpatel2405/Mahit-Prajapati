#include <iostream>
using namespace std;

class Person
{
    // * default : private (accessible only within class)
protected:
    int age = 11;
    string name = "Krishna";
};

class Student : protected Person
{
    int rollNo = 101;
    float marks[3] = {30, 40, 50};

public:
    void getData()
    {
        cout << "Age : " << age << endl;
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Marks : " << marks[0] << "\t" << marks[1] << "\t" << marks[2] << endl;
    }
};

int main()
{
    Student s;

    s.getData();

    return 0;
}