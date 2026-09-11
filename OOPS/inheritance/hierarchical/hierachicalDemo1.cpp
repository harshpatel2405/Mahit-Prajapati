#include <iostream>
using namespace std;

class Employee
{
    string name;
    int employeeId;
    double salary;

protected:
    Employee(string name, int employeeId, double salary) : name(name), employeeId(employeeId), salary(salary)
    {
        cout << "Employee Class Initialised .. " << endl;
    }

    void showEmployee()
    {
        cout << "Name : " << name << endl;
        cout << "Employee ID : " << employeeId << endl;
        cout << "Salary : " << salary << endl;
    }
};

class Developer : protected Employee
{
    string programmingLanguage;
    int projectsCompleted;

public:
    Developer(string name, int employeeId, double salary, string programmingLanguage, int projectsCompleted) : Employee(name, employeeId, salary)
    {
        this->programmingLanguage = programmingLanguage;
        this->projectsCompleted = projectsCompleted;
        cout << "Developer Class Initialised .. " << endl;
    }

    void showDeveloper()
    {
        showEmployee();
        cout << "Programming Language : " << programmingLanguage << endl;
        cout << "Projects Completed : " << projectsCompleted << endl;
    }
};

class Trainer : protected Employee
{
    string subject[2];
    int student;
public:
    Trainer(string name, int employeeId, double salary, string subject[], int student) : Employee(name, employeeId, salary)
    {
        this->subject[0] = subject[0];
        this->subject[1] = subject[1];
        this->student = student;
        cout << "Trainer Class Initialised .. " << endl;
    }

    void showTrainer()
    {
        showEmployee();
        cout << "Subject 1 : " << subject[0] << endl;
        cout << "Subject 2 : " << subject[1] << endl;
        cout << "Student : " << student << endl;
    }
};

int main()
{
    Developer d("Harsh", 101, 11111, "MERN", 10);
    d.showDeveloper();

    string subject[] = {"Mahs", "Science"};
    Trainer t("Ravi", 102, 22222, subject, 11);
    t.showTrainer();
    return 0;
}