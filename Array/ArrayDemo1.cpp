#include <iostream>
using namespace std;
#define SIZE 5

int main()
{
    int size = 5;
    // * automatic memory allocation
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5] = {10, 20, 30, 40, 50};
    int arr3[5];

    // * manual memory allocation
    int *arr = new int[size];

   /*
    Feature             Automatic Allocation (Stack)        Manual Allocation (Heap)
    Controlled By       Compiler / Runtime environment      Developer (using new/delete or malloc/free)Memory Region              Stack                               Heap (Free store)
    Lifetime            Tied to the local scope             Persistent until explicitly freed by the programmer
                        (freed when } is reached)
    Size Determination  Must be known at compile-time       Can be determined at runtime (dynamic resizing)Speed               Extremely fast (pointer shift)      Slower (overhead from finding free memory blocks)Memory Limit        Small/Limited (typically 1MB - 8MB)  Very large (limited only by available system RAM)
   */
    return 0;
}