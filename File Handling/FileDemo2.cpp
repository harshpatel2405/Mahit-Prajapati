#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float marks = 90.89;
    ofstream fout("data.txt", ios::app);

    fout << "\nMarks : " << marks << endl;

    fout.close();
    return 0;
}

// task : write name , age , marks , and address into file 