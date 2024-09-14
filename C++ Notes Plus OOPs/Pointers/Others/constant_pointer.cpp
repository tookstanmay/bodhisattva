#include <bits/stdc++.h>
using namespace std;

int main() {

    int high = 100;
    int *const ptr = &high;

    cout << high << " " << *ptr << endl;

    int low = 0;
    // ptr = &low; // gives error, read-only variable 'ptr'
    cout << low << " " << *ptr << endl;

    *ptr = 1000;
    cout << *ptr << endl
         << ptr << endl;

    return 0;
}