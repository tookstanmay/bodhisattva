#include <bits/stdc++.h>
using namespace std;

class bank {
private:
    int acc_no;
    string name;

public:
    bank(int number, string name) {
        this->acc_no = number;
        this->name = name;
    }

    void setAcc(int number) {
        this->acc_no = number;
    }

    void getAcc() {
        cout << this->acc_no << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void getName() {
        cout << this->name << endl;
    }
};

int main() {

    bank acc1(12345, "Tanmay, Sharma");
    acc1.getAcc();
    acc1.getName();

    acc1.setAcc(121);
    acc1.setName("John, Wick");

    acc1.getAcc();
    acc1.getName();

    return 0;
}

// Output
// 12345
// Tanmay, Sharma
// 121
// John, Wick