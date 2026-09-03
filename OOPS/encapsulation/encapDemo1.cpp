/*
QUESTION 1 — STUDENT RESULT SYSTEM
Create a C++ program for managing student results.

Requirements:

* 1. Create a class Student with private data members:
   - name
   - rollNo
   - marks1
   - marks2
   - marks3

* 2. Use a parameterized constructor to initialize all student details.

*3. Create an inline function calculateTotal() that returns the total marks.

* 4. Create an inline function calculatePercentage() that returns the percentage.
* 5. Apply encapsulation:
   - Keep all data members private.
   - Create appropriate getter functions.
   - Do not directly access data members from main().

* 6. Create a static data member studentCount that keeps track of how many Student objects have been created.
* 7. Create a static member function getStudentCount() to display the number of students.
* 8. Create a friend function compareMarks(Student, Student) that compares the total marks of two students and displays who scored higher.

* 9. Create a destructor that displays:

Student object destroyed: <name>

* 10. In main():
- Create at least 3 Student objects.
- Display their details, total and percentage.
- Compare two students using the friend function.
- Display the total number of students using the static function.
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    double marks1;
    double marks2;
    double marks3;
    static int studentCount;

public:
    // * parameterized constructor
    Student(string name, int rn, double m1, double m2, double m3)
    {
        this->name = name;
        this->rollNo = rn;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        studentCount++;
        cout << "Student " << studentCount << " Created Successfully..\n";
    }

    // * inline functions
    inline double calculateTotal()
    {
        return marks1 + marks2 + marks3;
    }

    inline double calculatePercentage()
    {
        return calculateTotal() / 3;
    }

    // * getter functions
    string getName()
    {
        return name;
    }

    int getRollNumber()
    {
        return rollNo;
    }

    static int getStudentCount()
    {
        return studentCount;
    }

    // * destructor
    ~Student()
    {
        cout << "Student Object Destroyed : " << name << endl;
    }

    // * friend function
    friend void compareMarks(Student, Student);
};

void compareMarks(Student a, Student b)
{
    cout << a.name << " : " << a.calculateTotal() << "\t" << b.name << " : " << b.calculateTotal() << endl;
    if (a.calculateTotal() < b.calculateTotal())
    {
        cout << b.name << " has scored higher marks than " << a.name << endl
             << endl;
    }
    else
    {
        cout << a.name << " has scored higher marks than " << b.name << endl
             << endl;
    }
}
int Student ::studentCount = 0;

int main()
{
    Student Harsh("Harsh", 101, 78, 89, 100);
    Student Mahit("Mahit", 102, 98, 87, 76);
    Student Vedant("Vedant", 103, 84, 73, 62);

    // * Student 1 Info
    cout << "Harsh\n-----\nTotal : " << Harsh.calculateTotal() << endl;
    cout << "Percentage : " << Harsh.calculatePercentage() << endl;

    // * Student 2 Info
    cout << "\nMahit\n-----\nTotal : " << Mahit.calculateTotal() << endl;
    cout << "Percentage : " << Mahit.calculatePercentage() << endl;

    // * Student 3 Info
    cout << "\nVedant\n-----\nTotal : " << Vedant.calculateTotal() << endl;
    cout << "Percentage : " << Harsh.calculatePercentage() << endl
         << endl;

    // * comapare mahit and harsh
    compareMarks(Harsh, Mahit);
    compareMarks(Vedant, Mahit);

    // * total students
    cout << "\nTotal Students Registered : " << Student ::getStudentCount() << endl
         << endl;
    return 0;
}