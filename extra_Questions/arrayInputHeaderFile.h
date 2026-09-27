#ifndef ARRAYINPUTHEADERFILE_H
#define ARRAYINPUTHEADERFILE_H
#include <iostream>
using namespace std;

void inputArray(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }
}

void displayArray(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

#endif