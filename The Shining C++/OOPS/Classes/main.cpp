#include <bits/stdc++.h>
using namespace std;

class Cars {
public:
    int wheels = 4;
    int doors;
    float speed;
    double mileage;
    double tank_size_in_ltr;

    Cars(int drs, double mlg, double tank_size) {
        this->doors = drs;
        this->mileage = mlg;
        this->tank_size_in_ltr = tank_size;
    }

    void increase_speed(float acceleration, float time) {
        this->speed += (acceleration * time);
    }
};

int main() {

    Cars mustang(2, 16.5, 42.7);
    mustang.speed = 12;
    float time = 12.2;
    float acceleration = 18.2;

    mustang.increase_speed(acceleration, time);
    cout << mustang.speed << endl;

    return 0;
}