#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int age ;
    string line;
    ifstream fin("student.dat", ios::binary);

    fin.read((char *)&age, sizeof(age));
    // fin.read(line, sizeof(line));

    cout << "Age : " << age << endl;

    fin.close();
    return 0;
}