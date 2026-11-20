#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int age = 97;
    string line = "This is a dummy line";
    ofstream fout("student.dat", ios::binary);

    fout.write((const char *)&age, sizeof(age));
    fout.write((const char *)&line, sizeof(line));

    fout.close();
    return 0;
}