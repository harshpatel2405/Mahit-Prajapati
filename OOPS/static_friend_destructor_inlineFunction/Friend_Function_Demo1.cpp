#include <iostream>
using namespace std;

class AppleINDIA
{
    int modelNumber = 11232;
    string name = "Apple Ultra prime";
    double price = 23456;
    int SecretpatentNumber = 888;

public:
    void getData()
    {
        cout << "Model number : " << modelNumber << endl;
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
    }

    friend void getSecretPatentNumberSteveJobs(AppleINDIA a);
};

void getSecretPatentNumberSteveJobs(AppleINDIA a)
{
    cout << "Patent Number : " << a.SecretpatentNumber << endl;
}

int main()
{
    AppleINDIA a;
    
    a.getData();

    getSecretPatentNumberSteveJobs(a);
    return 0;
}