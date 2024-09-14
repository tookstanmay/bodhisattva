#include <iostream>

class MyClass {
public:
    int x;

    MyClass(int val) : x(val) {}

    void display() {
        std::cout << "x: " << x << std::endl;
    }

    MyClass &add(int val) {
        x += val;
        return *this; // Returning a reference to the current object
    }
};

int main() {
    MyClass obj(10);
    obj.display(); // Output: x: 10

    // method chaining
    obj.add(5).add(2).display(); // Output: x: 17
    return 0;
}