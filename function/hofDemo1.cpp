#include <iostream>
using namespace std;

int demo1(int a, int b)
{
    return a - b;
}

// int demo2(int a, int b, auto func)// * works with c++ v-20 and above
int demo2(int a, int b, int (*func)(int, int))
{
    return func(a, b);
}

int main()
{
    cout << demo2(15, 2, demo1);

    return 0;
}