#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
    Character Array
    ----------------
    Sequence of characters character by character.

    Common C-style string functions:
    strlen()
    strcat()
    strcmp()
    strupr()
    strlwr()
    strrev()

    String
    ----------------
    Sequence of characters / complete text.

    Header file:
    #include <string>
*/

int main()
{
    // ============================================================
    // 1. STRING INPUT
    // ============================================================

    string str;

    cout << "1. Enter a string : ";
    getline(cin, str);

    cout << "String : " << str << endl;


    // ============================================================
    // 2. ACCESS CHARACTER USING []
    // ============================================================

    cout << "\n2. Access 4th Index using [] : "
         << str[4] << endl;


    // ============================================================
    // 3. ACCESS CHARACTER USING at()
    // ============================================================

    cout << "3. Access 4th Index using at() : "
         << str.at(4) << endl;


    // ============================================================
    // 4. length()
    // ============================================================

    cout << "4. Length : "
         << str.length() << endl;


    // ============================================================
    // 5. empty()
    // ============================================================

    cout << "5. Is String Empty : "
         << (str.empty() ? "YES" : "NO") << endl;


    // ============================================================
    // 6. append()
    // ============================================================

    str.append("XYZ");

    cout << "6. Appending XYZ : "
         << str << endl;


    // ============================================================
    // 7. insert()
    // ============================================================

    str.insert(2, "U");

    cout << "7. Inserting U at index 2 : "
         << str << endl;


    // ============================================================
    // 8. push_back()
    // ============================================================

    str.push_back('@');

    cout << "8. Push Back @ : "
         << str << endl;


    // ============================================================
    // 9. pop_back()
    // ============================================================

    str.pop_back();

    cout << "9. Pop Back : "
         << str << endl;


    // ============================================================
    // 10. front()
    // ============================================================

    cout << "10. First Character : "
         << str.front() << endl;


    // ============================================================
    // 11. back()
    // ============================================================

    cout << "11. Last Character : "
         << str.back() << endl;


    // ============================================================
    // 12. find()
    // ============================================================

    cout << "12. Find XYZ : "
         << str.find("XYZ") << endl;


    // ============================================================
    // 13. substr()
    // ============================================================

    cout << "13. Get Substring : "
         << str.substr(4, 2) << endl;


    // ============================================================
    // 14. erase()
    // ============================================================

    cout << "14. Erase Characters : "
         << str.erase(4, 2) << endl;


    // ============================================================
    // 15. reverse()
    // ============================================================

    reverse(str.begin(), str.end());

    cout << "15. Reversed String : "
         << str << endl;


    // ============================================================
    // 16. STRING TO NUMBER
    // ============================================================

    string n = "123tHarsh2004";

    int num = stoi(n);

    cout << "16. String to Number : "
         << num << endl;


    // ============================================================
    // 17. NUMBER TO STRING
    // ============================================================

    num = 89;

    string con = to_string(num);

    cout << "17. Number to String : "
         << con << endl;


    // ============================================================
    // 18. ITERATE STRING USING LOOP
    // ============================================================

    cout << "18. Characters : ";

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }

    cout << endl;


    // ============================================================
    // 19. clear()
    // ============================================================

    str.clear();

    cout << "19. Clear Complete String : "
         << str << endl;


    // ============================================================
    // 20. compare()
    // ============================================================

    string fruit1 = "apple";
    string fruit2 = "Banana";

    int result = fruit1.compare(fruit2);

    cout << "20. Apple VS Banana : ";

    if (result == 0)
    {
        cout << "Both Strings Are Same";
    }
    else if (result < 0)
    {
        cout << "String 1 is Smaller";
    }
    else
    {
        cout << "String 1 is Larger";
    }

    cout << endl;


    // ============================================================
    // 21. CONCATENATION USING +
    // ============================================================

    string concat = "Harsh Patel";

    cout << "21. Concatenation : "
         << concat + " Hello" << endl;


    return 0;
}


/*
===============================================================================
                    C++ STRING METHODS EXPLANATION
===============================================================================

1. getline()
-------------------------------------------------------------------------------
Used to take a complete line as input, including spaces.

Example:
    string name;
    getline(cin, name);

Input:
    Harsh Patel

Output:
    Harsh Patel


2. [] OPERATOR
-------------------------------------------------------------------------------
Used to access a character using its index.

Index starts from 0.

Example:
    string str = "Hello";

    str[0]     -> H
    str[1]     -> e
    str[4]     -> o

It does not perform bounds checking.


3. at()
-------------------------------------------------------------------------------
Used to access a character using its index.

Example:
    string str = "Hello";

    str.at(0)  -> H
    str.at(2)  -> l

Difference:

    str[10]     -> No bounds checking
    str.at(10)  -> Performs bounds checking


4. length()
-------------------------------------------------------------------------------
Returns the number of characters in the string.

Example:
    string str = "Hello";

    str.length() -> 5


5. empty()
-------------------------------------------------------------------------------
Checks whether the string is empty.

Returns:
    true  -> String is empty
    false -> String is not empty

Example:
    string str = "";

    str.empty() -> true


6. append()
-------------------------------------------------------------------------------
Adds another string at the end of the existing string.

Example:
    string str = "Hello";

    str.append(" World");

    Result:
    Hello World


7. insert()
-------------------------------------------------------------------------------
Inserts a string at a specific index.

Syntax:
    str.insert(index, string);

Example:
    string str = "Hello";

    str.insert(2, "XX");

    Result:
    HeXXllo


8. push_back()
-------------------------------------------------------------------------------
Adds a single character at the end of the string.

Example:
    string str = "Hello";

    str.push_back('!');

    Result:
    Hello!


9. pop_back()
-------------------------------------------------------------------------------
Removes the last character from the string.

Example:
    string str = "Hello!";

    str.pop_back();

    Result:
    Hello


10. front()
-------------------------------------------------------------------------------
Returns the first character of the string.

Example:
    string str = "Hello";

    str.front() -> H


11. back()
-------------------------------------------------------------------------------
Returns the last character of the string.

Example:
    string str = "Hello";

    str.back() -> o


12. find()
-------------------------------------------------------------------------------
Searches for a string or character inside another string.

Returns the index where the searched text starts.

Example:
    string str = "Hello World";

    str.find("World") -> 6

If the text is not found, it returns:

    string::npos


Example:
    if (str.find("World") != string::npos)
    {
        cout << "Found";
    }


13. substr()
-------------------------------------------------------------------------------
Returns a portion of the original string.

Syntax:
    str.substr(startIndex, length);

Example:
    string str = "Hello World";

    str.substr(0, 5) -> Hello
    str.substr(6, 5) -> World


14. erase()
-------------------------------------------------------------------------------
Removes characters from the string.

Syntax:
    str.erase(startIndex, numberOfCharacters);

Example:
    string str = "Hello World";

    str.erase(5, 1);

    Result:
    HelloWorld


15. reverse()
-------------------------------------------------------------------------------
Reverses the characters of a string.

It is provided by:

    #include <algorithm>

Example:
    string str = "Hello";

    reverse(str.begin(), str.end());

    Result:
    olleH


16. stoi()
-------------------------------------------------------------------------------
Converts a string into an integer.

Example:
    string str = "123";

    int num = stoi(str);

    Result:
    123

Important:
If the string starts with a valid number and then contains
non-numeric characters, stoi() converts the initial numeric part.

Example:
    stoi("123Harsh2004") -> 123


17. to_string()
-------------------------------------------------------------------------------
Converts a number into a string.

Example:
    int num = 89;

    string str = to_string(num);

    Result:
    "89"


18. STRING ITERATION
-------------------------------------------------------------------------------
A string can be accessed character by character using a loop.

Example:
    string str = "Hello";

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }

Output:
    Hello


19. clear()
-------------------------------------------------------------------------------
Removes all characters from the string.

Example:
    string str = "Hello";

    str.clear();

    Result:
    ""

The string becomes empty.


20. compare()
-------------------------------------------------------------------------------
Compares two strings.

Example:
    string s1 = "Apple";
    string s2 = "Banana";

    int result = s1.compare(s2);

Return value:

    0       -> Both strings are equal
    < 0     -> First string is smaller
    > 0     -> First string is larger

Example:

    if (s1.compare(s2) == 0)
        cout << "Same";

Important:
Do NOT assume that the return value will always be exactly -1 or 1.
It only guarantees negative, zero, or positive.


21. + OPERATOR
-------------------------------------------------------------------------------
Used to concatenate two strings.

Example:
    string first = "Harsh";
    string last = "Patel";

    string full = first + " " + last;

Result:
    Harsh Patel


===============================================================================
                         IMPORTANT EXTRA OPERATIONS
===============================================================================

size()
-------------------------------------------------------------------------------
Same basic purpose as length().

    str.size()
    str.length()

Both return the number of characters.


+=
-------------------------------------------------------------------------------
Used to append a string.

Example:
    string str = "Hello";

    str += " World";

Result:
    Hello World


==, !=, <, >, <=, >=
-------------------------------------------------------------------------------
Strings can be directly compared using comparison operators.

Example:

    string s1 = "Apple";
    string s2 = "Apple";

    if (s1 == s2)
        cout << "Same";


===============================================================================
*/