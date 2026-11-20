#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ifstream fin("data.txt", ios::in);

    // * single word
    // fin >> line;

    // * single line
    // getline(fin ,line);
    // cout << "Line : " << line;

    // * all data
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}