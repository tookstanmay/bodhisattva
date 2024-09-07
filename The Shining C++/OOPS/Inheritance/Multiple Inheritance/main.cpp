#include <iostream>
using namespace std;

class Vehicle {
public:
    void move() {
        cout << "Vehicle is moving." << endl;
    }
};

class Engine {
public:
    void start() {
        cout << "Engine is starting." << endl;
    }
};

class Car : public Vehicle, public Engine {
public:
    void display() {
        move();
        start();
    }
};

int main() {
    Car car;
    car.display();
    return 0;
}

// output
// Vehicle is moving.
// Engine is starting.