#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 10;

    cout << "Program Started" << endl;

    try
    {
            throw 1;
        cout << a / b;
    }
    catch (int n)
    {
        cout << "Error : Division by Zero";
    }

    cout << "Program Ended" << endl;
    return 0;
}