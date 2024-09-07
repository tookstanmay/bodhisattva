#include <bits/stdc++.h>
using namespace std;

class Engine {
private:
    bool isRunning;
    double horsePower;
    string fuelType;

public:
    Engine(double hp, string fuel) : isRunning(false), horsePower(hp), fuelType(fuel) {}

    void start() {
        if (isRunning) {
            cout << "Engine is already running." << endl;
            return;
        }
        isRunning = true;
        cout << "Engine started." << endl;
    }

    void stop() {
        if (!isRunning) {
            cout << "Engine is already stopped." << endl;
            return;
        }
        isRunning = false;
        cout << "Engine stopped." << endl;
    }

    double getHorsePower() {
        return horsePower;
    }

    string getFuelType() {
        return fuelType;
    }
};

class Car {
private:
    Engine engine;
    string modelName;
    int year;

public:
    Car(string model, int yr, double hp, string fuel) : engine(hp, fuel), modelName(model), year(yr) {}

    void drive() {
        engine.start();
        cout << modelName << " is driving." << endl;
    }

    void stop() {
        engine.stop();
    }

    double getHorsePower() {
        return engine.getHorsePower();
    }

    string getFuelType() {
        return engine.getFuelType();
    }

    void printInfo() {
        cout << "Car Model: " << modelName << endl;
        cout << "Year: " << year << endl;
        cout << "Horse Power: " << engine.getHorsePower() << endl;
        cout << "Fuel Type: " << engine.getFuelType() << endl;
    }
};

int main() {
    Car c1("Ford Mustang", 2023, 460, "Gasoline");
    c1.printInfo();
    c1.drive();
    c1.stop();

    return 0;
}

// Output
// Car Model: Ford Mustang
// Year: 2023
// Horse Power: 460
// Fuel Type: Gasoline
// Engine started.
// Ford Mustang is driving.
// Engine stopped.