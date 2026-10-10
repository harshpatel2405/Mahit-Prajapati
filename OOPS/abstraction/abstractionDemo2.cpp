/*
# C++ Abstraction Practice Challenge — Smart Payment System

**Difficulty:** High
**Topics:** Abstraction, Abstract Classes, Pure Virtual Functions, Inheritance, Encapsulation, Function Overriding, Runtime Polymorphism

## Problem Statement

* Develop a Smart Payment System for an online shopping application that supports three payment methods: Credit Card, UPI, and Digital Wallet.

All payment methods must follow a common structure, but each method must implement its own payment processing logic.

### Requirements

**1. Create an abstract class `Payment`**

* Private data members: `transactionId` and `amount`.
* A parameterized constructor to initialize both data members.
* A pure virtual function `processPayment()`.
* A pure virtual function `calculateFee()`.
* A concrete function `displayReceipt()` that displays the transaction ID, amount, and calculated fee.
* A virtual destructor.

**2. Create a class `CreditCardPayment`**

* Additional data member: `cardHolderName`.
* Override `processPayment()` to display a credit card payment message.
* Implement `calculateFee()` to return 2% of the payment amount.

**3. Create a class `UPIPayment`**

* Additional data member: `upiId`.
* Override `processPayment()` to display a UPI payment message.
* Implement `calculateFee()` to return a fixed fee of ₹5.

**4. Create a class `WalletPayment`**

* Additional data member: `walletProvider`.
* Override `processPayment()` to display a wallet payment message.
* Implement `calculateFee()` to return 1% of the payment amount.

**5. Implement `main()`**

* Create objects of all three payment methods.
* Store their addresses in an array of `Payment` pointers.
* Use a loop to call `processPayment()` and `displayReceipt()` for each payment.
* Calculate and display the total payment fees collected from all transactions.

### Expected Output

```text
===== SMART PAYMENT SYSTEM =====

Processing Credit Card Payment...
Transaction ID: TXN101
Amount: Rs. 5000
Payment Fee: Rs. 100
Payment Successful!

Processing UPI Payment...
Transaction ID: TXN102
Amount: Rs. 2000
Payment Fee: Rs. 5
Payment Successful!

Processing Wallet Payment...
Transaction ID: TXN103
Amount: Rs. 1000
Payment Fee: Rs. 10
Payment Successful!

Total Fees Collected: Rs. 115
```

*Output formatting may vary.*

### Rules

1. Do not create objects of the abstract class `Payment`.
2. Do not implement payment processing inside the base class.
3. Use `override` in all derived classes.
4. Keep the base class data members private.
5. Use base-class pointers to demonstrate runtime polymorphism.
6. Do not use `if-else` to determine the payment type.

### Bonus Challenge

Add a fourth payment method, `CryptoPayment`, with a configurable transaction fee percentage. It must work with the existing `main()` loop without changing the loop's logic.

*/
#include "PAYMENT.h"

int main()
{
    CreditCardPayment c1(101, 15000, "Harsh Patel");
    UPIPayment u1(102, 30000, "87628@yesg");
    WalletPayment w1(103, 45000, "Paytm");
    cout << endl;
    cout << endl;

    Payment *p1;
    p1 = &c1;
    p1->processPayment();
    p1->displayReceipt();
    cout << endl;

    Payment *p2;
    p2 = &u1;
    p2->processPayment();
    p2->displayReceipt();
    cout << endl;

    Payment *p3;
    p3 = &w1;
    p3->processPayment();
    p3->displayReceipt();

    return 0;
}