#include <iostream>
using namespace std;

class Number
{
public:
    int a;
    void setData(int a)
    {
        this->a = a;
        cout << "Number class Initialised Successfully...\n";
    }

    void getData()
    {
        cout << "A : " << a << endl;
    }

    int operator+(Number n2)
    {
        return this->a + n2.a;
    }

    Number operator-(Number n3)
    {
        Number temp;
        temp.a = this->a - n3.a;
        return temp;
    }
};

int main()
{
    Number n1, n2;

    n1.setData(12);
    n1.getData();
    n2.setData(13);
    n2.getData();

    Number n3;
    // int = object + object
    n3.a = n1 + n2;
    n3.getData();

    // object = object + object
    Number n4 = n2 - n3;
    n4.getData();
    return 0;
}
