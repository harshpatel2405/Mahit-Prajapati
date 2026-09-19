#include <iostream>
using namespace std;

class Number
{
public:
    void add(int x, int y)
    {
        cout << "Two Parameters -- Add (int) Method -- " << x + y << endl;
    }
    void add(float x, float y)
    {
        cout << "Two Parameters -- Add (float) Method -- " << x + y << endl;
    }

    void add(int x, int y, int z)
    {
        cout << "Three Parameters -- Add Method -- " << x + y + z << endl;
    }

    void add(int x, int y, int z, int p)
    {
        cout << "Four Parameters -- Add Method -- " << x + y + z + p << endl;
    }
};

int main()
{
    Number n;

    n.add(10, 20);
    n.add(10, 20, 30);
    n.add(10, 20, 30, 40);
    n.add(11.3f, 6.5f);
    return 0;
}