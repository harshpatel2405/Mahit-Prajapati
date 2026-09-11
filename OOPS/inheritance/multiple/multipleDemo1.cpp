#include <iostream>
using namespace std;

/*
WearableDevice          Watch
      \                   /
       \                 /
            SmartWatch
*/

class WearableDevice
{
protected:
    string brand;
    int batteryLevel;

    WearableDevice(string brand, int batteryLevel)
    {
        this->batteryLevel = batteryLevel;
        this->brand = brand;
        cout << "Wearble Class Initialised Successfully..." << endl;
    }

    void showWearbleDevice()
    {
        cout << "Brand : " << brand << endl;
        cout << "Battery Level : " << batteryLevel << endl;
    }
};

class Watch
{
protected:
    bool hasAlarm;
    bool hasStopwatch;

    Watch(bool hasAlarm, bool hasStopWatch) : hasAlarm(hasAlarm), hasStopwatch(hasStopwatch)
    {
        cout << "Watch Class Initialised Successfully..." << endl;
    }

    void showWatch()
    {
        cout << "Has Alarm : " << ((hasAlarm) ? "Yes" : "No") << endl;
        cout << "Has StopWatch : " << ((hasStopwatch) ? "Yes" : "No") << endl;
    }
};

class SmartWatch : protected WearableDevice, protected Watch
{
    bool hasGPS;
    bool hasBluetooth;
    int stepCount;
    int heartRate;

public:
    SmartWatch(string brand, int batteryLevel, bool hasAlarm, bool hasStopWatch, bool hasGPS, bool hasBluetooth, int stepCount, int heartRate) : Watch(hasAlarm, hasStopWatch), WearableDevice(brand, batteryLevel)
    {
        this->hasGPS = hasGPS;
        this->hasBluetooth = hasBluetooth;
        this->stepCount = stepCount;
        this->heartRate = heartRate;

        cout << "Smart Watch Class Initialised Successfully..." << endl;
    }

    void showSmartWatch()
    {
        showWearbleDevice();
        showWatch();
        cout << "Has GPS : " << ((hasGPS) ? "Yes" : "No") << endl;
        cout << "Has Bluetooth : " << ((hasBluetooth) ? "Yes" : "No") << endl;
        cout << "Step Count : " << stepCount << endl;
        cout << "Heart Rate : " << heartRate << endl;
    }
};

int main()
{
    SmartWatch Swatch("Samsung", 100, true, true, true, true, 10000, 120);
    Swatch.showSmartWatch();
    return 0;
}