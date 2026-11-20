/*
* 6. FIND MISSING NUMBER

* An array contains numbers from 1 to n, but exactly one
* number is missing.

* Find the missing number.

* Example:
* Input:
* 1 2 3 5 6

* Output:
* Missing = 4

* Conditions:
* - Do not sort.
* - Do not use another array.
* - Use a function.
*/

#include "arrayInputHeaderFile.h"
using namespace std;

int findMissingElement(int *arr, int length)
{
    int finalSum = (length * (length + 1)) / 2;

    // & finding
    for (int i = 0; i < length - 1; i++)
    {
        finalSum -= *(arr + i);
    }

    return finalSum;
}

int main()
{
    int n = 11;
    int arr[n];

    // & input Array
    inputArray(arr, n - 1);

    cout << "Array With Missing Element :\t";
    displayArray(arr, n - 1);

    int missingElement = findMissingElement(arr, n);

    cout << "Missing Element : " << missingElement;
    return 0;
}