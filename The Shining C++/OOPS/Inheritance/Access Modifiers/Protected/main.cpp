#include <bits/stdc++.h>
using namespace std;

class Chevy {
public:
    int tires;
    Chevy() {
        cout << "Call from Chevy!" << endl;
    }

protected:
    string color;

private:
    int doors;
};

class Camaro : protected Chevy {
public:
    Camaro() {
        cout << "Heart of Chevy, Camaro" << endl;
        cout << tires << endl;
        cout << color << endl;

        // cannot access this
        // cout<< doors<< endl;
    }
};

int main() {

    Camaro cam1;

    // cannot access these
    // all public, private and protected are inaccessible
    
    // cout << cam1.tires << endl;
    // cout << cam1.color << endl;
    // cout<< cam1.doors<< endl;

    return 0;
}