#include <bits/stdc++.h>
using namespace std;

class Enclosed {
public:
    int x = 10;
    static const int z = 22;

    class Nested1; // nested class declared here

    class Nested2 { // nested2 class defined here
    public:
        int xy = 111;
    };

    void enc_func(Nested2 *n) {
        cout << "Called from outside Nested2, inside Enclosed: " << n->xy << endl;
    }
};

// nested class defined
class Enclosed::Nested1 {
public:
    int y = 11;

    void func(Enclosed *e) {
        cout << "Called from inside Nested1: " << this->y << endl;
        cout << "Enclosed variable x: " << e->x << endl
             << endl;
    }
};

int main() {

    Enclosed e1;
    Enclosed::Nested1 n1;
    Enclosed::Nested2 n2;

    n1.func(&e1);
    e1.enc_func(&n2);

    return 0;
}

// Output
// Called from inside Nested1: 11
// Enclosed variable x: 10

// Called from outside Nested2, inside Enclosed: 111
