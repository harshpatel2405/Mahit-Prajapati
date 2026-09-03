#include <iostream>
using namespace std;

class Student
{
    int age;
    double marks;
    string name;
    static int studentCount;

public:
    Student()
    {
        age = 12;
        marks = 34.34;
        name = "harsh";
        studentCount++;
    }

    static int getStudentCount()
    {
        return studentCount;
    }
};

int Student ::studentCount = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    cout << "Student Count : " << Student::getStudentCount();
    return 0;
}