#include <iostream>
#include <ctime>
using namespace std;

time_t now = time(0);
tm *localTime = localtime(&now);

class Transaction
{
    int transactionID;
    string transactionType;
    bool transactionStatus;
    int amount;
    string date;

public:
    // * constructor Overloading
    Transaction(int transactionID)
    {
        this->transactionID = transactionID;
        transactionType = "Credit";
        transactionStatus = 1;
        amount = 5000;
        date = to_string(localTime->tm_mday) + "/" +
               to_string(localTime->tm_mon + 1) + "/" +
               to_string(localTime->tm_year + 1900);
        cout << "-----------------------------------------------------------------\nTransaction class (one)Initialised Successfully...\n-----------------------------------------------------------------\n";
    }

    Transaction(int transactionID, string transactionType)
    {
        this->transactionID = transactionID;
        this->transactionType = transactionType;
        transactionStatus = 1;
        amount = 5000;
        date = to_string(localTime->tm_mday) + "/" +
               to_string(localTime->tm_mon + 1) + "/" +
               to_string(localTime->tm_year + 1900);
        cout << "-----------------------------------------------------------------\nTransaction class (two) Initialised Successfully...\n-----------------------------------------------------------------\n";
    }

    Transaction(int transactionID, string transactionType, bool transactionStatus)
    {
        this->transactionID = transactionID;
        this->transactionType = transactionType;
        this->transactionStatus = transactionStatus;
        amount = 5000;
        date = to_string(localTime->tm_mday) + "/" +
               to_string(localTime->tm_mon + 1) + "/" +
               to_string(localTime->tm_year + 1900);
        cout << "-----------------------------------------------------------------\nTransaction class (three) Initialised Successfully...\n-----------------------------------------------------------------\n";
    }

    Transaction(int transactionID, string transactionType, bool transactionStatus, int amount)
    {
        this->transactionID = transactionID;
        this->transactionType = transactionType;
        this->transactionStatus = transactionStatus;
        this->amount = amount;
        date = to_string(localTime->tm_mday) + "/" +
               to_string(localTime->tm_mon + 1) + "/" +
               to_string(localTime->tm_year + 1900);
        cout << "-----------------------------------------------------------------\nTransaction class (four) Initialised Successfully...\n-----------------------------------------------------------------\n";
    }

    Transaction(int transactionID, string transactionType, bool transactionStatus, int amount, string date)
    {
        this->transactionID = transactionID;
        this->transactionType = transactionType;
        this->transactionStatus = transactionStatus;
        this->amount = amount;
        this->date = date;
        cout << "-----------------------------------------------------------------\nTransaction class (five) Initialised Successfully...\n-----------------------------------------------------------------\n";
    }
    // * getter
    void displayTransaction()
    {
        cout << "Transaction ID : " << transactionID << endl;
        cout << "Transaction Type : " << transactionType << endl;
        cout << "Transaction Status : " << (transactionStatus ? "Success" : "Failed") << endl;
        cout << "Transaction Amount : " << amount << endl;
        cout << "Transaction Date : " << date << endl;
        cout << "-----------------------------------------------------------------\n\n";
    }
};

int main()
{
    Transaction t1(101);
    t1.displayTransaction();
    Transaction t2(102, "Debit");
    t2.displayTransaction();
    Transaction t3(103, "Credit", 0);
    t3.displayTransaction();
    Transaction t4(104, "Debit", 1, 6789);
    t4.displayTransaction();
    Transaction t5(105, "Credit", 0, 1234, "12/03/2024");
    t5.displayTransaction();

    return 0;
}