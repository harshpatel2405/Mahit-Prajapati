#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}

int main()
{

    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(15);
    v.push_back(15);
    v.push_back(15);
    v.push_back(15);
    display();
    // cout << v[0];

    // v.pop_back();
    // v.pop_back();
    // display();

    cout << "SIZE : " << v.size() << endl;
    cout << "IS Vector Empty ? : " << v.empty() << endl;
    cout << "Front Element : " << v.front() << endl;
    cout << "last Element : " << v.back() << endl;
    // cout << "Element at 2nd index : " << v.at(2) << endl;


    // v.insert(v.begin(), 99);
    // display();

    cout << "Capacity : " << v.capacity() << endl;

    // v.clear();
    // display();

    return 0;
}