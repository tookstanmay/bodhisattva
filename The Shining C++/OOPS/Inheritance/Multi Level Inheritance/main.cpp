#include <bits/stdc++.h>
using namespace std;

class Boeing {
public:
    vector<string> materials;
    double payload;
    double fuel = 0;
    double velocity = 0;
    double acceleration;
    double wingspan;

    void set_velocity(double v) {
        this->velocity = v;
    }

    void fill_fuel(double intake) {
        this->fuel = intake;
    }
};

class Boeing_Commercial_Planes : public Boeing {
public:
    int passenger_capacity;
    double altitude;
    int parachutes = 20;
    bool auto_pilot = false;

    void set_altitude(double alt) {
        this->altitude = alt;
    }

    void turn_auto_pilot() {
        this->auto_pilot = !this->auto_pilot;
    }
};

class Boeing_747 : public Boeing_Commercial_Planes {
public:
    int engines;
    double range;

    void set_engines(int count) {
        this->engines = count;
    }

    void set_range(double r) {
        this->range = r;
    }
};

int main() {

    Boeing_747 New_Delhi_Chicago;
    New_Delhi_Chicago.fill_fuel(1000);
    New_Delhi_Chicago.wingspan = 21.34;
    New_Delhi_Chicago.set_altitude(20000);
    New_Delhi_Chicago.set_engines(4);

    cout << "Velocity: " << New_Delhi_Chicago.velocity << endl;
    cout << "Parachutes: " << New_Delhi_Chicago.parachutes << endl;

    return 0;
}

// Output
// Velocity: 0
// Parachutes: 20