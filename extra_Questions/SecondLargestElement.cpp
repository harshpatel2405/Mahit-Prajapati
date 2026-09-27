/*
* 1. SECOND LARGEST ELEMENT

* Accept n integers and find the second largest DISTINCT  element in the array.

* Example:
* Input: 7
* 10 50 20 50 40 30 10

* Output:
* Second Largest = 40

* Conditions:
* - Do not sort the array.
* - Duplicate values should not be considered separately.
* - Handle the case where a second distinct element does not exist.
*/

#include "arrayInputHeaderFile.h"
int main()
{
    int n = 7;
    int arr[n];

    // & length
    int length = sizeof(arr) / sizeof(arr[0]);

    // & input Array
    inputArray(arr, length);

    int largest = arr[0];

    // * largest array element
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // * finding second largest
    int secondLargest;
    bool found = false;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < largest)
        {
            if (!found || arr[i] > secondLargest)
            {
                secondLargest = arr[i];
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "Second Distinct element does not exist...\n";
    }
    else
    {
        cout << "Largest : " << largest << endl;
        cout << "Second Largest : " << secondLargest << endl;
    }

    return 0;
}