#include <iostream>
using namespace std;

template <typename T>
// * T is datatype , a and b are variable
void add(T a, T b)
{
    cout << "Addition : " << a + b << endl;
}

template <typename T, typename U>
void subtract(T a, U b)
{
    cout << "Subtraction : " << a - b << endl;
}

template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

int main()
{
    add(10, 20);
    add(10.23f, 20.23f);
    add(10.23, 20.23);

    subtract(10, 4);
    subtract(10, 4.2f);
    subtract(10.1f, 4);
    subtract(10.1f, 4.2);
    subtract(10.1, 4.2f);
    subtract(10.1, 4.2);

    cout << multiply(10, 20) << endl;
    cout << multiply(10.23f, 20.23f) << endl;
    cout << multiply(10.23, 20.23) << endl;

    return 0;
}