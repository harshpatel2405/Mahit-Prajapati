#include <iostream>
using namespace std;

// ^ since this class has one PVM ,THIS CLASS IS ABSTRACT CLASS
class Bank
{
public:
    // & pure virtual method
    virtual void deposit(int amount) = 0;
};

class Customer : public Bank
{
public:
    void deposit(int amount) override
    {
        cout << "Deposit Method overrided and called";
    }

    // void demo()
    // {
    //     cout << "Dummy Method called";
    // }
};

int main()
{
    Bank *b;
    Customer obj;

    b = &obj;
    b->deposit(1500);

    return 0;
}