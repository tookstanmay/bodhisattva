#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    int ID;
    float salary;
};

class Developer : public Employee {
public:
    float bonus;

    Developer(float salary, float bonus) {
        this->salary = salary;
        this->bonus = bonus;
    }
};

int main() {

    Developer dv1(20000, 1000);

    cout << "Salary: " << dv1.salary << endl
         << "Bonus: " << dv1.bonus << endl;

    return 0;
}

// output
// Salary: 20000
// Bonus: 1000