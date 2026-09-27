/*
* 2. MOVE ZEROES TO END
* Given an integer array, move all zeroes to the end while maintaining the original order of non-zero elements.

* Example:
* Input:
* 0 5 0 3 8 0 2

* Output:
* 5 3 8 2 0 0 0

* Conditions:
* - Do not create another array.
* - Do not sort the array.
* - Preserve the order of non-zero elements.
*/

#include "arrayInputHeaderFile.h"

int main()
{
    int n = 7;
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);

    // & input Array
    inputArray(arr, n);

    cout << "Before Moving Zeros :\t";
    displayArray(arr, length);
    ;
    // * arranged non zero elements in front of the array
    int position = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    // * remaining part filled with 0
    while (position < length)
        arr[position++] = 0;

    cout << "After Moving Zeros :\t";
    displayArray(arr, length);

    return 0;
}