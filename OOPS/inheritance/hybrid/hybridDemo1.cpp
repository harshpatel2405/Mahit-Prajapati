#include <iostream>
using namespace std;

class Person
{
public:
    void showPerson()
    {
        cout << "person class called...\n";
    }
};

class Student : virtual public Person
{
public:
    void showStudent()
    {
        cout << "Student class called...\n";
    }
};

class Employee : virtual public Person
{
public:
    void showEmployee()
    {
        cout << "Employee class called...\n";
    }
};

class Teacher : public Student, public Employee
{
public:
    void showTeacher()
    {
        cout << "Teacher class called...\n";
    }
};

int main()
{
    Teacher Ramesh;

    // * here show person is being got from student and emplopyee (duplicate copies -- ambigous)
    // * solution is make base class virtual (while inheriting)
    Ramesh.showPerson();
    Ramesh.showStudent();
    Ramesh.showEmployee();
    Ramesh.showTeacher();
    return 0;
}