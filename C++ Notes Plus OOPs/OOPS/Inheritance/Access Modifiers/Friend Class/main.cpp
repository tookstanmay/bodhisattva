#include <bits/stdc++.h>
using namespace std;

class Base {
private:
    int private_variable;

public:
    Base(int value) {
        this->private_variable = value;
    }

    friend class DerivedOne; // method one
    friend class DerivedTwo; // method two
};

// method one class
class DerivedOne : public Base {
public:
    DerivedOne(int value) : Base(value) {};

    void displayValue() {
        cout << private_variable << endl;
    }
};

// method two class
class DerivedTwo {
public:
    void displayValue(Base &obj) {
        cout << obj.private_variable << endl;
    }
};

int main() {

    // method one
    DerivedOne obj1(120);
    obj1.displayValue();

    // method two
    Base ball(121);
    DerivedTwo obj2;
    obj2.displayValue(ball);

    return 0;
}

// Output:
// 120
// 121