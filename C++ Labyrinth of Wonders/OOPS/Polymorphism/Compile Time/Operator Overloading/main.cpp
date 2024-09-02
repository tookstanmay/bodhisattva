#include <bits/stdc++.h>
using namespace std;

class coordinates {
public:
    int x;
    int y;

    coordinates(int inp_x, int inp_y) {
        this->x = inp_x;
        this->y = inp_y;
    }

    coordinates() {}; // default constructor

    // real operator overloading
    coordinates operator+(coordinates const &temp) {
        coordinates res;
        res.x = this->x + temp.x;
        res.y = this->y + temp.y;
        return res;
    }

    void print() {
        cout << "X: " << this->x << ", Y: " << this->y << endl;
    }
};

int main() {

    coordinates cd1(10, 12);
    coordinates cd2(11, 13);

    // we're overloading + here
    // and utilizing it to perform
    // addition for two objects
    coordinates cd3 = cd1 + cd2;
    cd3.print();

    return 0;
}