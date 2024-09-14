#include <bits/stdc++.h>
using namespace std;

void computer(int n) {
    cout << "value of n: " << n << endl;
}

int main() {

    void (*ptr)(int) = &computer;

    ptr(10);    // either this way
    (*ptr)(11); // or this way both ways it works

    return 0;
}