#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    // Create file and write data
    file.open("student.txt", ios::out);

    file << "Hello Students!";
    file.close();

    // Open again using trunc
    file.open("student.txt", ios::out | ios::trunc);

    file << "Welcome to C++!";
    file.close();

    // Read file
    file.open("student.txt", ios::in);

    string line;
    getline(file, line);

    cout << line;

    file.close();

    return 0;
}