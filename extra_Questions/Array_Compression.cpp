/*
* 5. ARRAY COMPRESSION

* Remove consecutive duplicate elements from an array.

* Example:
* Input:
* 1 1 1 2 2 3 3 3 4 5 5

* Output:
* 1 2 3 4 5

* Conditions:
* - Do not sort the array.
* - Do not use another array.
*/

#include "arrayInputHeaderFile.h"
using namespace std;

int main()
{
    int n = 11, k;
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);

    // & input Array
    inputArray(arr, n);

    cout << "Before Array Compression :\t";
    displayArray(arr, n);

    for (int i = 0; i < n;)
    {
        if (i < n - 1 && arr[i] == arr[i + 1])
        {
            // & left shift
            for (int j = i + 1; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            continue;
        }
        i++;
    }

    cout << "After Array Compression :\t";
    displayArray(arr, n);
    return 0;
}