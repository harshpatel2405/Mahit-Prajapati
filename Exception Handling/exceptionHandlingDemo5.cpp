#include <iostream>
using namespace std;

class CustomException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "This is our own custom what method";
    }
};

int main()
{
    try
    {
        throw CustomException();
    }
    catch (const CustomException &e)
    {
        cout << e.what();
    }
    return 0;
}