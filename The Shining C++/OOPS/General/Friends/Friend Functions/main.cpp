#include <bits/stdc++.h>
using namespace std;

class base {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base(int prvt, int prtd) {
        this->private_variable = prvt;
        this->protected_variable = prtd;
    }

    friend void display(base &obj);
};

void display(base &obj) {
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable << endl;
}

int main() {

    base ball(100, 200);

    display(ball);

    return 0;
}

// Output
// Private Variable: 100
// Protected Variable: 200