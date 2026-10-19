#include <iostream>
using namespace std;

void function()
{
    throw 1;
}

int main()
{
    try
    {
        // function();
        // throw runtime_error("Run time error called");
        throw invalid_argument("Invalid Argument error called");
    }
    catch (const exception &e)
    {
        cout << e.what();
    }
    catch (int e)
    {
        cout << "Exception from function handled : " << e << endl;
    }
    return 0;
}