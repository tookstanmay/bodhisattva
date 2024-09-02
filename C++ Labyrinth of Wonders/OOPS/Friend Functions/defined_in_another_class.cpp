#include <bits/stdc++.h>
using namespace std;

// declaration before to avoid error in another class
// as we're using it's object in display function
class base;

// another class definition
class another {
public:
    void display(base &obj);
};

// base class definition
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

    // declaration of display function
    friend void another::display(base &obj);
};

// definition of display function
// look we did defined it the way we define functions whose
// definition is outside
// class_name::function_name
void another::display(base &obj) {
    cout << endl
         << endl;

    cout << "Private variable: " << obj.private_variable << endl
         << "Public variable: " << obj.protected_variable << endl;

    cout << endl
         << endl;
}

int main() {

    base ball(101, 111);

    another game;
    game.display(ball);

    return 0;
}