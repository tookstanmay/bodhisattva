#include <bits/stdc++.h>
using namespace std;

class student {
private:
    string roll_no;

public:
    string name;
    int standard;
    char division;

    void set_roll(string); // declaring set_roll()
    void get_roll();       // declaring get_roll()
};

// defining set_roll() and get_roll()
// outside the scope of class student
void student::set_roll(string roll) {
    this->roll_no = roll;
}
void student::get_roll() {
    cout << "Roll no. is: " << this->roll_no << endl;
}

int main() {

    student s1;

    s1.name = "Tanmay";
    cout << s1.name << endl;

    s1.set_roll("ABCX1211");
    s1.get_roll();

    return 0;
}