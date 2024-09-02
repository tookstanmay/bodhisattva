#include <bits/stdc++.h>
using namespace std;

class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base(int prvt, int prtc) {
        this->private_variable = prvt;
        this->protected_variable = prtc;
    }

    friend void display(base &obj);
};

void display(base &obj) {
    cout << endl
         << endl;

    cout << "Private variable: " << obj.private_variable << endl
         << "Public variable: " << obj.protected_variable << endl;

    cout << endl
         << endl;
}

int main() {

    base ball(101, 111);
    display(ball);

    return 0;
}