/*
<=========================================================================================>

QUESTION 2 — BANK ACCOUNT

Create a*  C++ program to simulate a simple bank account system.

Requirements:

* 1. Create a class BankAccount with private data members:
   - accountNumber
   - holderName
   - balance

* 2. Use a parameterized constructor to initialize account details.

* 3. Create the following public functions:

   void deposit(double amount);
   void withdraw(double amount);
   void display();

* 4. Apply encapsulation:
   - balance must be private.
   - The balance should only be changed through deposit() and withdraw().
   - Do not allow withdrawal if the amount is greater than the balance.

* 5. Create an inline function:

   inline double getBalance();

   It should return the current balance.

* 6. Create a static data member totalAccounts that counts how many BankAccount objects have been created.

* 7. Create a static function:

   static void showTotalAccounts();

   It should display the total number of accounts.

* 8. Create a friend function:

   friend void compareBalance(BankAccount, BankAccount);

   It should compare the balances of two accounts and display which account has a higher balance.

* 9. Create a destructor that displays:

Account <accountNumber> destroyed

* 10. In main():
   - Create 3 BankAccount objects.
   - Deposit money into different accounts.
   - Withdraw money from at least one account.
   - Display account details.
   - Compare two accounts using the friend function.
   - Display total accounts.


<=========================================================================================>
*/
#include <iostream>
using namespace std;

class BankAccount
{

    int accountNo;
    string holderName;
    double balance;
    static int totalAccount;

public:
    BankAccount(int accountNo, string holderName, double balance)
    {
        this->accountNo = accountNo;
        this->holderName = holderName;
        this->balance = balance;
        totalAccount++;
        cout << "Account " << totalAccount << " created successfully.." << endl;
    }

    double deposit(double ammount)
    {
        balance += ammount;
    }

    double withdraw(double ammount)
    {
        balance -= ammount;
    }

    inline double getAccountNo()
    {
        return accountNo;
    }

    inline string getHolderName()
    {
        return holderName;
    }

    inline double getBalance()
    {
        return balance;
    }

    static int showTotalAccount()
    {
        return totalAccount;
    }

    friend void compareBalance(BankAccount, BankAccount);

    ~BankAccount()
    {
        cout << accountNo << " destroyed" << endl;
    }
};

void compareBalance(BankAccount a, BankAccount b)
{
    cout << a.holderName << " : " << a.getBalance() << "\t" << b.holderName << " : " << b.getBalance() << endl;

    if (a.getBalance() < b.getBalance())
    {
        cout << b.holderName << " has higher balance than " << a.holderName << endl
             << endl;
    }
    else
    {
        cout << a.holderName << " has higher balance than " << b.holderName << endl
             << endl;
    }
}

int BankAccount ::totalAccount = 0;

int main()
{
    BankAccount b1(01, "b1", 1000);
    BankAccount b2(02, "b2", 5000);
    BankAccount b3(03, "b3", 10000);

    b1.deposit(1000);
    cout << "\nb1 balance after deposit: " << b1.getBalance() << endl;
    b2.deposit(5000);
    cout << "\nb2 balance after deposit: " << b2.getBalance() << endl;
    b3.deposit(10000);
    cout << "\nb3 balance after deposit: " << b3.getBalance() << endl;

    b1.withdraw(2000);
    cout << "\nb1 balance after withdraw : " << b1.getBalance() << endl;

    cout << "\nb1 : " << b1.getAccountNo() << " " << b1.getHolderName() << " " << b1.getBalance() << endl;
    cout << "\nb2 : " << b2.getAccountNo() << " " << b2.getHolderName() << " " << b2.getBalance() << endl;
    cout << "\nb3 : " << b3.getAccountNo() << " " << b3.getHolderName() << " " << b3.getBalance() << endl;

    compareBalance(b1, b2);

    cout << "\nTotal Accounts : " << BankAccount::showTotalAccount() << endl;
}