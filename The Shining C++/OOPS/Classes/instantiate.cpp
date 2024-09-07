#include <bits/stdc++.h>
using namespace std;

class student {
private:
    string roll_no;

public:
    string name;
    int standard;
    char division;

    void set_roll(string);
    void get_roll();

    student() {
        cout << "Hey student entry created!" << endl;
    }

    // destructor
    ~student() {
        cout << "destructor called!" << endl;
    }

} student_one; // object instantiated

int main() {

    student s1;

    // explicit destructor calling
    s1.~student();

    return 0;
}