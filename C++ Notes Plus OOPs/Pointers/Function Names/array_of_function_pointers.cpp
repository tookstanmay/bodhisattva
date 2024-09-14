#include <bits/stdc++.h>
using namespace std;

void add(int a, int b) {
    cout << "addition: " << (a + b) << endl;
}

void subtract(int a, int b) {
    cout << "subtraction: " << (a - b) << endl;
}

void multiply(int a, int b) {
    cout << "multiplication: " << (a * b) << endl;
}

int main() {

    void (*fun_ptr[])(int, int) = {&add, &subtract, &multiply};
    int a = 12, b = 5;
    (*fun_ptr[0])(a, b);
    (*fun_ptr[1])(a, b);
    (*fun_ptr[2])(a, b);

    return 0;
}

// Output
// addition: 17
// subtraction: 7
// multiplication: 60