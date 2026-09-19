#include <iostream>
using namespace std;

class Student
{
    static int count;
    int id;
    string name;
    double marks;

public:
    void setData(string name, double marks)
    {
        this->name = name;
        this->marks = marks;
        this->id = idCounter();
        cout << "Student Class Initialised Successfully..\n";
    }

    int idCounter()
    {
        return ++count;
    }

    void getData()
    {
        cout << "\n-------------------------\nID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl
             << "-------------------------\n";
    }

    Student operator+(Student obj)
    {
        Student temp;
        temp.id = idCounter();
        temp.name = "Combine";
        temp.marks = (this->marks + obj.marks) / 2;
        return temp;
    }

    Student operator+(int value)
    {
        Student temp = *this;
        temp.marks = this->marks + 5;

        return temp;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;

    s1.setData("Harsh", 99);
    s2.setData("Mahit", 77);

    s1.getData();
    s2.getData();

    // * object with object
    Student s3 = s1 + s2;
    s3.getData();

    // * object with value
    Student s4 = s3 + 5;
    s4.getData();

    return 0;
}