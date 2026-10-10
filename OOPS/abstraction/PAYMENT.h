#ifndef PAYMENT_H // * check if payment_h already exists or not
#define PAYMENT_H // * provide a name to recognise as it is included

#include <iostream>

using namespace std;

class Payment
{
    int transactionId;
    double amount;

public:
    Payment(int ti, double a)
    {
        this->transactionId = ti;
        this->amount = a;
        cout << "Payment Class Initialized Successfully" << endl;
    }

    virtual void processPayment() = 0;
    virtual double calculateFee() = 0;

    double getAmount()
    {
        return amount;
    }

    void displayReceipt()
    {
        cout << "Transaction ID : " << transactionId << endl;
        cout << "Amount : " << amount << endl;
        cout << "Fee : " << calculateFee() << endl;
    }

    ~Payment()
    {
        cout << "Payment class Destructor called" << endl;
    }
};

class CreditCardPayment : public Payment
{
    string cardHolderName;

public:
    CreditCardPayment(int ti, double a, string chn) : Payment(ti, a)
    {
        this->cardHolderName = chn;
        cout << "Credit Card Class Initialised Successfully..\n";
    }

    void processPayment() override
    {
        cout << "Payment Done Through Credit Card" << endl;
    }

    double calculateFee() override
    {
        return getAmount() * 0.02;
    }
};

class UPIPayment : public Payment
{
    string upiID;

public:
    UPIPayment(int ti, double a, string upiId) : Payment(ti, a)
    {
        this->upiID = upiId;
        cout << "UPI Class Initialised Successfully..\n";
    }

    void processPayment() override
    {
        cout << "Payment Done Through UPI" << endl;
    }

    double calculateFee() override
    {
        return 5;
    }
};

class WalletPayment : public Payment
{
    string walletProvider;

public:
    WalletPayment(int ti, double a, string wp) : Payment(ti, a)
    {
        this->walletProvider = wp;
        cout << "Wallet Class Initialised Successfully..\n";
    }

    void processPayment() override
    {
        cout << "Payment Done Through Wallet Payment" << endl;
    }

    double calculateFee() override
    {
        return getAmount() * 0.01;
    }
};

#endif
