/*
* 9. SWAP ADJACENT ELEMENTS USING POINTERS

* Create a function:

* void swapPairs(int *arr, int n)

* Swap every pair of adjacent elements.

* Example:
* Input:
* 10 20 30 40 50 60

* Output:
* 20 10 40 30 60 50

* Condition:
* - Use pointers.
* - If the array size is odd, leave the last element unchanged.
*/

#include "arrayInputHeaderFile.h"
using namespace std;

void swapPairs(int *arr, int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i != n - 1)
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + i + 1);
            *(arr + i + 1) = temp;
        }
    }
}

int main()
{
    int n = 5;
    int arr[n];

    // & input Array
    inputArray(arr, n);

    cout << "Before Swapping :\t";
    displayArray(arr, n);

    swapPairs(arr, n);

    cout << "After Swapping :\t";
    displayArray(arr, n);
    return 0;
}