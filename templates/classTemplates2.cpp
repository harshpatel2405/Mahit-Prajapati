#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int an, string ah, double b)
    {
        accountHolder = ah;
        accountNumber = an;
        balance = b;
        cout << "Bank Account Class Initialised successfully...." << endl;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "Amount should be greater than 0" << endl;
            return;
        }

        balance += amount;
        cout << amount << " depositted sucessfully in account number " << accountNumber << " and account holder is " << accountHolder << endl;
    }

    virtual void withdraw(int amount)
    {
        if (amount <= 0 || amount > balance)
        {
            cout << "Enter correct amout which can be withdrawn" << endl;
            return;
        }
        balance -= amount;
        cout << amount << " withdrawn successfully" << endl;
    }

    virtual void displayDetails()
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance : " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }

    void setBalance(int amount)
    {
        balance -= amount;
    }
};

class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    SavingsAccount(int an, string ah, double b, double ir) : BankAccount(an, ah, b), interestRate(ir)
    {
        cout << "Savings Account class initialised successfully." << endl;
    }

    double calculateInterest()
    {
        return getBalance() * interestRate / 100;
    }

    void displayDetails() override
    {
        BankAccount::displayDetails();
        cout << "Interest rate : " << interestRate << "%" << endl
             << endl;
    }
};

class CurrentAccount : public BankAccount
{
    double overdraftLimit;

public:
    CurrentAccount(int an, string ah, double b, double od) : BankAccount(an, ah, b), overdraftLimit(od)
    {
        cout << "Current Account class initialised successfully." << endl;
    }

    void withdraw(int amount) override
    {
        if (amount <= 0)
        {
            cout << "Enter proper amount " << endl;
            return;
        }

        if (amount > (getBalance() + overdraftLimit))
        {
            cout << "Enter amount less than balance and overdraft facility" << endl;
            return;
        }

        if (amount > getBalance())
        {
            cout << "Amount to be withdrawn  : " << amount << endl;
            cout << "Balance : " << getBalance() << endl;
            double extra = amount - getBalance();
            setBalance(getBalance());
            cout << "Amount above balance  : " << extra << endl;
            cout << "oVERDRAFT LIMIT AVAILABLE : " << overdraftLimit << endl;
            overdraftLimit -= extra;
            cout << "Amount withdrawn successfully.." << endl;

            return;
        }

        setBalance(amount);
        cout << "Amount withdrawn successfullly " << endl;
    }

    void displayDetails() override
    {
        BankAccount::displayDetails();
        cout << "Overdraft Limit : " << overdraftLimit << endl
             << endl;
    }
};

template <typename T>
class AccountManager
{
    T Obj;

public:
    AccountManager(T obj) : Obj(obj)
    {
    }

    void display()
    {
        Obj.displayDetails();
    }

    void deposit(int amount)
    {
        // int amount;
        // cout << "Enter amount to be depositted :  ";
        // cin >> amount;
        Obj.deposit(amount);
    }

    void processwithdrawl(int amount)
    {
        // int amount;
        // cout << "Enter amount to be Withdrawn :  ";
        // cin >> amount;
        Obj.withdraw(amount);
    }
};

int main()
{
    SavingsAccount s(101, "Rahul", 10000, 5);
    CurrentAccount c(102, "Amit", 5000, 2000);

    // BankAccount *b1;
    // b1 = &s;
    // b1->displayDetails();

    // BankAccount *b2;
    // b2 = &c;
    // b2->displayDetails();

    AccountManager<SavingsAccount> a(s);
    AccountManager<CurrentAccount> b(c);

    a.display();
    b.display();

    a.deposit(2000);
    a.processwithdrawl(3000);
    b.processwithdrawl(6000);
    b.processwithdrawl(3000);

    b.display();

    return 0;
}

// - Deposit 2000 into Rahul's account.
// - Withdraw 3000 from Rahul's account.
// - Withdraw 6000 from Amit's account.
// - Attempt to withdraw 3000 more from Amit's account.