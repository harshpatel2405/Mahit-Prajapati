#include <iostream>
using namespace std;

auto add = [](int a, int b)
{
    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
};

int main()
{
    add(10, 13);

    int x = 10;
    auto demo = [&]()
    {
        x = 90;
        cout << "X : " << x << endl;
    };
    
    demo();
    cout << "X : " << x << endl;

    return 0;
}