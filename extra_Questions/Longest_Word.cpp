/*
* 12. FIND LONGEST WORD

* Accept a sentence and find the longest word.

* Example:
* Input:
* C++ programming is interesting

* Output:
* Longest Word = interesting

* Conditions:
* - Handle multiple spaces.
* - Do not use STL containers.
*/
#include <iostream>
using namespace std;

void longestWord(string str, int n)
{
    int count = 0;
    string longestWord = "";
    int start = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i == n || str[i] == ' ')
        {
            int k = 0;
            for (int j = start; j < i; j++)
            {
                k++;
            }

            if (k > count)
            {
                count = k;
                longestWord = "";
                for (int m = start; m <= i; m++)
                {
                    longestWord += str[m];
                }
            }

            start = i + 1;
        }
    }

    cout << "Longest Word : " << longestWord;
}

int main()
{
    string str;

    cout << "Enter String : ";
    // cin >> str;
    getline(cin, str);

    longestWord(str, str.length() - 1);

    return 0;
}