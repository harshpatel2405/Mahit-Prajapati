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
    friend Student operator+(int value, Student obj);

    friend ostream &operator<<(ostream &out, Student &obj)
    {
        out << "\n-------------------------\nID : " << obj.id << endl;
        out << "Name : " << obj.name << endl;
        out << "Marks : " << obj.marks << endl
            << "-------------------------\n";

        return out;
    }
};

int Student::count = 0;

Student operator+(int value, Student obj)
{
    Student temp = obj;
    temp.marks = obj.marks + value;
    return temp;
}

int main()
{
    Student s1;
    Student s2;
    s1.setData("Harsh", 99);
    s2.setData("Mahit", 77);

    cout << s1;
    cout << s2;

    // * value with object
    Student s3 = 5 + s2;
    cout << s3;
    return 0;
}
