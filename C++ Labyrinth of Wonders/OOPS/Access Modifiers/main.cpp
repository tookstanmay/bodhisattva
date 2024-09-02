#include <bits/stdc++.h>
using namespace std;

class student {
private:
    string roll_no;

public:
    string name;
    int standard;
    char division;

    void set_roll(string roll) {
        this->roll_no = roll;
    }

    void get_roll() {
        cout << "Roll no. is: " << this->roll_no << endl;
    }
};

int main() {

    student s1;

    // cannot access as it's private and
    // can be accessed inside the class only
    // that's why set_roll() and get_roll() are
    // able to access and manipulate it
    // s1.roll_no;

    return 0;
}