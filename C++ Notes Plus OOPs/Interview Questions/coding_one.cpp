#include <iostream>

using namespace std;
class BaseClass1 {
public:
    BaseClass1() { cout << "BaseClass1 constructor called" << endl; }
};

class BaseClass2 {
public:
    BaseClass2() { cout << "BaseClass2 constructor called" << endl; }
};

class DerivedClass : public BaseClass1, public BaseClass2 {
public:
    DerivedClass() { cout << "DerivedClass constructor called" << endl; }
};

int main() {
    DerivedClass derived_class;
    return 0;
}

// Output
// BaseClass1 constructor called
// BaseClass2 constructor called
// DerivedClass constructor called