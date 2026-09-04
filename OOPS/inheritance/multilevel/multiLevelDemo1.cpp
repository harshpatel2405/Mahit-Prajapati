#include <iostream>
using namespace std;

class Vehicle
{
    string brand;
    string model;

public:
    Vehicle(string brand, string model) : brand(brand), model(model)
    {
        cout << "Vehicle class Initialised successfully" << endl;
    }

    void getVehicleData()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
    }
};

class Car : public Vehicle
{
    int numberOfDoors;
    double price;

public:
    Car(string brand, string model, int nd, double pr) : numberOfDoors(nd), price(pr), Vehicle(brand, model)
    {
        cout << "Car Class Initialised Successfully" << endl;
    }

    void getCarData()
    {
        getVehicleData();
        cout << "Number Of Doors : " << numberOfDoors << endl;
        cout << "Price : " << price << endl;
    }
};

class ElectricCar : public Car
{
    int batteryCapacity;
    int chargingTime;

public:
    ElectricCar(string brand, string model, int nd, double pr, int bc, int ct) : batteryCapacity(bc), chargingTime(ct), Car(brand, model, nd, pr)
    {
        cout << "Electric Car Class Initialised Successfully.." << endl;
    }

    void getElectricCarData()
    {
        getCarData();
        cout << "Battery Capacity : " << batteryCapacity << endl;
        cout << "Charging Time : " << chargingTime << endl;
    }
};

int main()
{
    ElectricCar ec("MG", "Windsor", 4, 1545999, 20000, 5);
    ec.getElectricCarData();

    ec.getCarData();
    ec.getVehicleData();
    return 0;
}