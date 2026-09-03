#include <iostream>
using namespace std;

int globalCount = 0;

void counter1()
{
    int count = 0;
    cout << "Count : " << count++ << endl;
}

void counter2()
{
    static int count = 0;
    int normalVariable = 123;
    cout << "Count : " << count++ << "\tnormal variable : " << normalVariable << endl;
}

void counter3()
{
    static int count = 0;
    int normalVariable = 123;
    cout << "Count : " << count++ << "\tnormal variable : " << normalVariable << "\tGlobal Count : " << globalCount++ << endl;
}

int main()
{
    // counter1();
    // counter1();
    // counter1();

    // counter2();
    // counter2();
    // counter2();

    counter3();
    counter3();
    counter3();
    return 0;
}