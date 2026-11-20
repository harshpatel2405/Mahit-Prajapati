/*
* 11. REVERSE WORDS

* Accept a sentence and reverse the order of the words,
* but do not reverse the characters inside each word.

* Example:
* Input:
* C++ is very powerful

* Output:
* powerful very is C++
*/

#include <iostream>
using namespace std;

void reverseWords(string str, int n)
{
    int end = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            for (int j = i + 1; j <= end; j++)
            {
                cout << str[j];
            }
            cout << " ";
            end = i - 1;
        }
    }

    for (int i = 0; i <= end; i++)
    {
        cout << str[i];
    }
}

int main()
{
    string str;

    cout << "Enter String : ";
    // cin >> str;
    getline(cin, str);

    reverseWords(str, str.length());

    // cout << "String : " << str;
    return 0;
}