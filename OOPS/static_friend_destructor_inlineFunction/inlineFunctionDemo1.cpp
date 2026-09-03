#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

inline int cube(int x)
{
    return x * x * x;
}

int main()
{
    cout << square(5) << endl;
    cout << cube(5) << endl;
    return 0;
}