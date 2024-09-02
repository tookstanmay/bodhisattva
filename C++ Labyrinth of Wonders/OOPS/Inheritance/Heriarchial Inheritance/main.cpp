#include <iostream>
using namespace std;
class Shape {
public:
    int a;
    int b;
    void get_data(int n, int m) {
        a = n;
        b = m;
    }
};

class Rectangle : public Shape {
public:
    int rect_area() {
        int result = a * b;
        return result;
    }
};

class Triangle : public Shape {
public:
    int triangle_area() {
        float result = 0.5 * a * b;
        return result;
    }
};

int main() {

    Rectangle r;
    Triangle t;

    int length = 10, breadth = 10, base = 10, height = 10;

    r.get_data(length, breadth);
    int m = r.rect_area();
    cout << "Area of Rectangle: " << m << endl;

    t.get_data(base, height);
    float n = t.triangle_area();
    cout << "Area of Triangle: " << n << endl;
    return 0;
}

// Output
// Area of Rectangle: 100
// Area of Triangle: 50