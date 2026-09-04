#include <iostream>
using namespace std;

class Device
{
    string brand;
    string model;
    double price;
    int warrantyYears;

protected:
    void setDeviceData(string brand, string model, double price, int warrantyYears)
    {
        this->brand = brand;
        this->model = model;
        this->price = price;
        this->warrantyYears = warrantyYears;
        cout << "Device Class data set Successfully..." << endl;
    }

    void getDeviceData()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Price : " << price << endl;
        cout << "Warranty Years : " << warrantyYears << endl;
    }
};

class Laptop : protected Device
{
    int ram;
    int storage;
    string processor;
    double screenSize;

public:
    void setLaptopData(string brand, string model, double price, int warrantyYears, int r, int s, string p, double ss)
    {
        setDeviceData(brand, model, price, warrantyYears);
        ram = r;
        storage = s;
        processor = p;
        screenSize = ss;
        cout << "Laptop class data set successfully" << endl;
    }

    void getLaptopData()
    {
        getDeviceData();
        cout << "Ram : " << ram << endl;
        cout << "Storage : " << storage << endl;
        cout << "Processor : " << processor << endl;
        cout << "Screen Size : " << screenSize << endl;
    }
};

int main()
{
    Laptop Dell;
    Dell.setLaptopData("Dell", "Inspiron 3500", 67999, 3, 16, 512, "Intel I5 11th GEN", 15.6);
    Dell.getLaptopData();
    return 0;
}