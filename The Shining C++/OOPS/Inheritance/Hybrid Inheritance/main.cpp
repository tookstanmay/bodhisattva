#include <bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    double mileage;
    int doors;
    string color;
    string fuel_type;
};

class Car : public Vehicle {
public:
    bool transmission;
    double speed;

    void accelerate(double acc, double time) {
        this->speed += (acc * time);
    }

    void breaking(double ret, double time) {
        this->speed -= (ret * time);
    }
};

class Truck : public Vehicle {
public:
    double capacity_tonnes;
    double ground_clearance;
    int height;
    int length;
    int width;
};

class Ford_F150 : public Car, public Truck {
public:
    string model_name;
    double max_torque;
    double rim_size;
    string breaking_type;

    Ford_F150() {
        this->model_name = "Ford F150";
        this->max_torque = 650;
        this->capacity_tonnes = 1.474;
        this->transmission = false;
        this->Truck::mileage = 8; // resolving ambuiguity arising as both Car and Truck inherit Vehicle
        this->rim_size = 18;
    }

    void print() {
        // writing between "\033[1m \033[0m" makes text bold
        cout << "\033[1m Model: \033[0m" << this->model_name << endl;
        cout << "\033[1m Torque: \033[0m" << this->max_torque << " Nm" << endl;
        cout << "\033[1m Capacity: \033[0m" << this->capacity_tonnes * 1000 << " kg" << endl;
        cout << "\033[1m Transmission: \033[0m" << (transmission == true ? "Manual" : "Automatic") << endl;
        cout << "\033[1m Mileage: \033[0m" << this->Truck::mileage << " kmpl" << endl;
        cout << "\033[1m Rim Size: \033[0m" << this->rim_size << " inches" << endl;
    }
};

int main() {

    Ford_F150 ftruck1;
    ftruck1.print();

    return 0;
}

// output
// Model: Ford F150
// Torque: 650 Nm
// Capacity: 1474 kg
// Transmission: Automatic
// Mileage: 8 kmpl
// Rim Size: 18 inches