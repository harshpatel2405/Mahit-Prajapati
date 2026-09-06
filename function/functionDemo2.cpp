#include <iostream>
using namespace std;

void changeV(int x)
{
    x = 90;
}

void changeR(int *x)
{
    *x = 90;
}

void changeP(int &x)
{
    x = 90;
}

void printName(const string &name)
{
    cout << "Hello " << name << endl;
}

int main()
{
    int x = 78;

    // * call by value
    cout << "1. Before X : " << x << endl;
    changeV(x);
    cout << "1. After X : " << x << endl
         << endl;

    //  * call by reference
    int y = 78;
    cout << "2. Before Y : " << y << endl;
    changeR(&y);
    cout << "2. After Y : " << y << endl
         << endl;

    // * pass by reference
    int z = 67;
    cout << "3. Before Z : " << z << endl;
    changeP(z);
    cout << "3. After Z : " << z << endl;

    // * const reference
    string name = "Harsh Patel";
    printName(name);
    return 0;
}