#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    int rollNo;
    float marks;

public:
    Student(string n, int a, int r, float m)
    {
        name = n;
        age = a;
        rollNo = r;
        marks = m;
    }

    Student(Student &stu)
    {
        name = "Mr. " + stu.name;
        age = stu.age;
        marks = stu.marks - 34;
        rollNo = stu.rollNo + 1;
    }

    void getData()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s("Harsh", 22, 121, 98);
    Student s1(s);
    s.getData();
    s1.getData();
    return 0;
}