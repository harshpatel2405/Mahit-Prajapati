#include <iostream>
using namespace std;

auto outer()
{
    cout << "Outer Function started.." << endl;
    auto inner = []()
    {
        cout << "Inner Function Started.." << endl;
        cout << "Inner Function Ended.." << endl;
        return 9 + 8;
    };
    cout << "Outer Function Ended.." << endl;

    return inner;
}

int main()
{
    auto ans = outer;
    cout << ans();

    return 0;
}