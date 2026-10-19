#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int index;
    int a, b;
    int arr[n] = {10, 20, 30, 40, 50};
    try
    {
        // * 1st risky code
        cout << "Enter index you want to access in array : ";
        cin >> index;

        if (index >= n || index < 0)
        {
            throw 0;
        }

        cout << arr[index];

        // * 2nd risky code
        cout << "Enter two values : ";
        cin >> a >> b;

        if (b == 0)
        {
            throw 'a';
        }
        cout << a / b;

        // * risky code
        // throw 3.14;
        throw "Random string";
    }
    catch (int n)
    {
        cout << "Array Index out of Bounds";
    }
    catch (char ch)
    {
        cout << "Division by zero not possible";
    }
    catch (const char *message)
    {
        cout << message;
    }
    catch (...) // * catch - all
    {
        cout << "General exception";
    }
    return 0;
}