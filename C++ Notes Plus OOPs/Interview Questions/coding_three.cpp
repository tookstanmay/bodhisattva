#include <iostream>
using namespace std;

class ClassA {
public:
    ClassA(int ii = 0) : i(ii) {}
    void show() { cout << "i = " << i << endl; }

private:
    int i;
};

class ClassB {
public:
    ClassB(int xx) : x(xx) {}
    operator ClassA() const { return ClassA(x); }

private:
    int x;
};

void g(ClassA a) { a.show(); }

int main() {
    ClassB b(10);
    g(b);
    g(20);

    return 0;
}

// Output
// i = 10
// i = 20
