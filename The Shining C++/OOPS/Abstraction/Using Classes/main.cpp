#include <bits/stdc++.h>
using namespace std;

class area {

    // control the access of data members
    // such that they can be accesses only
    // inside the class
    // outside people can only utilize the
    // service
private:
    double radius = 0.0;
    double area = 0.0;

    // outside people can only
    // access the services available
    // to them
public:
    void setRadius(double radius) {
        this->radius = radius;
    }

    void getArea() {
        area = M_PI * radius * radius;
        cout << "Area of circle is: " << area << endl;
    }
};

int main() {

    area circle1;
    circle1.setRadius(10.1);
    circle1.getArea();

    return 0;
}

// Output
// Area of circle is: 320.474