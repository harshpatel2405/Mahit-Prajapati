#include <iostream>
using namespace std;

// int calculate(int a, int b, auto func) // * works with c++ v-20 and above
int calculate(int a, int b, int (*func)(int, int))
{
    return func(a, b);
}

int main()
{
    cout << calculate(10, 15, [](int x, int y)
                      { return x + y; });
    return 0;
}