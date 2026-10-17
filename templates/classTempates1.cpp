#include <iostream>
using namespace std;

template <class T>

class Database
{
public:
    T obj;
    void show()
    {
        obj.show();
    }
};

class Student
{
public:
    void show()
    {
        cout << "Student class show method called." << endl;
    }
};

class TeachingAssistant
{
public:
    void show()
    {
        cout << "Teaching Assistant class show method called." << endl;
    }
};

int main()
{
    Database<Student> d1;
    Database<TeachingAssistant> d2;

    d1.show();
    d2.show();
    return 0;
}