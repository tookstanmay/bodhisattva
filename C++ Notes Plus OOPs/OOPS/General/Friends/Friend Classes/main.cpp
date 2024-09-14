#include <bits/stdc++.h>
using namespace std;

class base;

class another {
public:
    void display(base &obj);
};

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

    friend void another::display(base &obj);
};

void another::display(base &obj) {
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable << endl;
}

int main() {

    base ball(100, 200);

    another game;
    game.display(ball);

    return 0;
}

// Output
// Private Variable: 100
// Protected Variable: 200