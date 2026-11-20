#include <iostream>
// * fstream -- ifstream + ofstream
#include <fstream>
// #include<ifstream>

using namespace std;

int main()
{
    // ofstream fout("data.txt");
    
    ofstream fout;
    fout.open("data.txt");

    fout << "This is second dummy data\n";
    fout << "This is a dummy data\n";

    int age = 90;
    fout << "My age is " << age;

    cout
        << "Data added successfullly in file..";

    fout.close();

    return 0;
}