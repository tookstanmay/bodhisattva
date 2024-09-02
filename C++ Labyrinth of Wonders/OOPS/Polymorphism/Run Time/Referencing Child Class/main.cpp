#include <bits/stdc++.h>
using namespace std;

class base {
public:
    int x = 10;
    int y = 11;

    void print() {
        cout << "Value of X: " << this->x << endl;
    }
};

class child : public base {
public:
    child() {};

    void print() {
        cout << "Value of X and Y: " << this->x << " , " << this->y << endl;
    }
};

int main() {

    child c1;
    c1.print();

    // creating reference won't give function overriding
    base b1 = child();
    b1.print();

    return 0;
}