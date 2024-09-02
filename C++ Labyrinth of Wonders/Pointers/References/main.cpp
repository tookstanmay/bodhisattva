#include <bits/stdc++.h>
using namespace std;

int find_val1(int n) {
    cout << "pass by value: " << n << endl;

    return 0;
}

int find_val2(int *n) {
    cout << "pass by reference, pointer: " << "address of n: " << n << " value of dereferenced n: " << *n << endl;

    return 0;
}

int find_val3(int &n) {
    cout << "pass by reference, reference argument: " << "address of n: " << &n << " value of n: " << n << endl;

    return 0;
}

int main() {

    int n = 12;

    find_val1(n);       // pass by value
    find_val2(&n);      // pass by pointer
    find_val3(n);       // pass by reference

    return 0;
}