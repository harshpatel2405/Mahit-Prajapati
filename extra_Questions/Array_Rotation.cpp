/*
* 4. ARRAY ROTATION

* Rotate an array to the RIGHT by k positions.

* Example:
* Input:
* 1 2 3 4 5

* k = 2

* Output:
* 4 5 1 2 3

* Conditions:
* - Do not create another array.
* - k can be greater than n.
*/
#include "arrayInputHeaderFile.h"
using namespace std;

int main()
{
    int n = 7, k;
    int arr[n];
    int length = sizeof(arr) / sizeof(arr[0]);

    // & input Array
    inputArray(arr, n);

    printf("Enter Value for k (k can be greater than n) : ");
    cin >> k;

    cout << "Before Right Shift :\t";
    displayArray(arr, length);

    if (k > n)
        k -= n;

    for (int i = 1; i <= k; i++)
    {
        int temp = arr[n - 1];
        // & right rotation
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    cout << "After Right Shift :\t";
    displayArray(arr, length);
    return 0;
}
