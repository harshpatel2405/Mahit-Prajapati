#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    for (int x : arr)
    {
        cout << x << "\t";
    }
    cout << endl;

    char name[20] = "Harsh Patel";
    for (char ch : name)
    {
        cout << ch;
    }
    cout << endl;
    
    string str = "This is CPP";
    for (char ch : str)
    {
        cout << ch;
    }
    cout << endl;

    return 0;
}
