/*
# C++ Advanced OOP Challenge — Smart Hospital Management System

**Difficulty:** Complex / High
**Expected Code Length:** 80–100 lines
**Concepts:** Abstraction, Inheritance, Runtime Polymorphism, Encapsulation

## Problem Statement

Develop a **Smart Hospital Management System** that manages different types of hospital employees. The system must support Doctors and Nurses, each having different responsibilities and salary calculation rules.

Your program must demonstrate all four pillars of Object-Oriented Programming without unnecessary code duplication.

### Requirements

**1. Abstract Base Class: `HospitalEmployee`**

Create an abstract class containing:

* Private data members: `employeeId`, `name`, and `baseSalary`.
* A parameterized constructor to initialize all data members.
* Public getter functions to access private data.
* A pure virtual function `calculateSalary()`.
* A pure virtual function `displayDetails()`.
* A virtual destructor.

**2. Derived Class: `Doctor`**

* Additional private data member: `consultationBonus`.
* Override `calculateSalary()` to return the base salary plus the consultation bonus.
* Override `displayDetails()` to display the employee's details and calculated salary.

**3. Derived Class: `Nurse`**

* Additional private data member: `nightShiftAllowance`.
* Override `calculateSalary()` to return the base salary plus the night shift allowance.
* Override `displayDetails()` to display the employee's details and calculated salary.

**4. Implement `main()`**

* Create at least two doctors and two nurses with different salary details.
* Store all employees in an array of `HospitalEmployee` pointers.
* Use a single loop to display every employee's details and calculated salary.
* Calculate and display the hospital's total monthly salary expense.
* Ensure the program works through base-class pointers without checking employee types using `if-else` or `switch`.

### Sample Output

```text
===== HOSPITAL EMPLOYEE REPORT =====

Employee ID: D101
Name: Dr. Rahul
Role: Doctor
Monthly Salary: Rs. 85000

Employee ID: N101
Name: Priya
Role: Nurse
Monthly Salary: Rs. 42000

...

Total Monthly Salary Expense: Rs. 254000
```

*The displayed amounts are illustrative; use your own input values.*

### Constraints

1. `HospitalEmployee` must remain abstract.
2. All data members must be private.
3. Derived classes must use constructor initialization to initialize the base class.
4. Use `override` for overridden functions.
5. Demonstrate runtime polymorphism through base-class pointers.
6. Do not duplicate common employee details or salary-reporting logic unnecessarily.
7. Do not use `if-else` or `switch` to identify an employee's type.
8. Ensure proper memory management and avoid memory leaks.

### Bonus Challenge

Add a `Surgeon` class whose salary includes a surgery bonus. The existing reporting loop must work without modification.

**Goal:** Write the shortest clean solution possible while correctly demonstrating all four OOP pillars.

*/
#include <iostream>
using namespace std;

class HospitalEmployee
{
    int employeeId;
    string name;
    double salary;

public:
    HospitalEmployee(int eId, string name, double salary)
    {
        this->employeeId = eId;
        this->name = name;
        this->salary = salary;

        cout << "Hospital Class.. " << endl;
    }

    int getEId()
    {
        return employeeId;
    }

    string getName()
    {
        return name;
    }

    double getSalary()
    {
        return salary;
    }

    virtual double calculateSalary() = 0;
    virtual void displayDetails() = 0;
};

class Doctor : public HospitalEmployee
{
    double consultationBonus;

public:
    Doctor(int eId, string name, double salary, double consultationBonus) : HospitalEmployee(eId, name, salary)
    {
        this->consultationBonus = consultationBonus;
        cout << "Doctor Class .." << endl;
    }

    double calculateSalary() override
    {
        return getSalary() + consultationBonus;
    }

    void displayDetails()
    {
        cout << "Employee Id : " << getEId() << endl;
        cout << "Employee Name : " << getName() << endl;
        cout << "Employee Salary : " << getSalary() << endl;
        cout << "Employee Calculated Salary : " << calculateSalary() << endl;
    }
};

class Nurse : public HospitalEmployee
{
    double nightShiftAllowance;

public:
    Nurse(int eId, string name, double salary, double nightShiftAllowance) : HospitalEmployee(eId, name, salary)
    {
        this->nightShiftAllowance = nightShiftAllowance;
        cout << "Nurse Class .." << endl;
    }

    double calculateSalary() override
    {
        return getSalary() + nightShiftAllowance;
    }

    void displayDetails()
    {
        cout << "Employee Id : " << getEId() << endl;
        cout << "Employee Name : " << getName() << endl;
        cout << "Employee Salary : " << getSalary() << endl;
        cout << "Employee Calculated Salary : " << calculateSalary() << endl;
    }
};

int main()
{
    Doctor d1(101, "Mahit", 10000, 1000);
    Doctor d2(102, "Dhruv", 20000, 2000);
    Nurse n1(201, "abc", 5000, 100);
    Nurse n2(202, "xyz", 6000, 100);
    // HospitalEmployee * employees[4] = {&d1 , &d2 , &n1 , &n2};
    HospitalEmployee *employees[4];
    employees[0] = &d1;
    employees[1] = &d2;
    employees[2] = &n1;
    employees[3] = &n2;

    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        employees[i]->displayDetails();
        cout << endl;
    }

    // HospitalEmployee *h1;
    // HospitalEmployee *h2;
    // HospitalEmployee *h3;
    // HospitalEmployee *h4;

    // Doctor d1(101, "Mahit", 10000, 1000);
    // h1 = &d1;
    // Doctor d2(102, "Dhruv", 20000, 2000);
    // h2 = &d2;

    // Nurse n1(201, "abc", 5000, 100);
    // h3 = &n1;
    // Nurse n2(202, "xyz", 6000, 100);
    // h4 = &n2;

    // cout << "\n";
    // h1->displayDetails();
    // cout << "\n";
    // h2->displayDetails();
    // cout << "\n";
    // h3->displayDetails();
    // cout << "\n";
    // h4->displayDetails();

    return 0;
}