#include <iostream>
using namespace std;

class InsufficientBalance : public runtime_error
{
public:
    InsufficientBalance() : runtime_error("Insufficient balance")
    {
    }
};

class BankAccount
{
    double balance;

public:
    BankAccount(double b) : balance(b)
    {
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            throw invalid_argument("Enter proper args");
        }

        if (amount > balance)
        {
            throw InsufficientBalance();
        }

        balance -= amount;
        cout << "Withdrawl Successful" << endl;
    }
};

int main()
{
    BankAccount ba(10000);
    try
    {

        ba.withdraw(1500);
        ba.withdraw(9500);
    }
    catch (const InsufficientBalance &e)
    {
        cout << e.what();
    }
    catch (const exception &e)
    {
        cout << e.what();
    }
    return 0;
}