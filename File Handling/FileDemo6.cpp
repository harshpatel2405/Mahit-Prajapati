#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fp("data2.txt", ios::out | ios::in);

    cout << "Cursor : " << fp.tellg() << endl;
    fp << "This is a dummy data";

    cout << "Cursor : " << fp.tellg() << endl;

    fp.seekg(0, ios::beg);

    cout << "Cursor G : " << fp.tellg() << endl;
    cout << "Cursor P : " << fp.tellp() << endl;
    string line;
    // fp >> line;
    getline(fp, line);
    cout << "Line : " << line << endl;
    cout << "Cursor : " << fp.tellg() << endl;

    fp.close();
    return 0;
}