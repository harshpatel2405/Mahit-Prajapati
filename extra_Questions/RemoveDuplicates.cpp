/*
* 3. REMOVE DUPLICATES

* Remove duplicate elements from an array.

* Example:
* Input:
* 10 20 10 30 20 40 30

* Output:
* 10 20 30 40

* Conditions:
* - Do not use set or vector.
* - Do not use another array.
* - Modify the original array.
*/

#include "arrayInputHeaderFile.h"

int main()
{
    int n = 7;
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);

    // & input Array
    inputArray(arr, n);

    cout << "Before Removing Duplicates :\t";
    displayArray(arr, length);

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                // ^ delete element
                for (int k = j; k < length - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                length--;
                j--;
            }
        }
    }

    cout << "After Removing Duplicates :\t";
    displayArray(arr, length);

    return 0;
}