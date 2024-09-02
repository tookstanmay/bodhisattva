#include <iostream>
using namespace std;

class MyException : public exception {
public:
    const char *what() const noexcept override {
        return "This is a custom exception";
    }
};

int main() {
    try {
        throw MyException();
    } catch (MyException &e) {
        cerr << "Caught custom exception: " << e.what() << endl;
    }

    return 0;
}

// Output
// Caught custom exception: This is a custom exception