#include <iostream>
using namespace std;

void welcome(string user = "Guest")
{
    cout << "Welcome , " << user << endl;
}

void add(int a, int b)
{
    cout << "Adddition is " << a + b << endl;
}
void add(int a, float b)
{
    cout << "Adddition is " << a + b << endl;
}

inline int square(int x)
{
    return x * x;
}

int main()
{
    welcome();
    welcome("Harsh");

    add(10, 20);
    add(10, 20.89f);
    add(10.90, 20.89f);

    cout << square(5) << endl;
    return 0;
}