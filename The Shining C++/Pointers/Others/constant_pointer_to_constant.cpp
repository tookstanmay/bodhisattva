#include <bits/stdc++.h>
using namespace std;

int main() {

    const int high = 100;
    const int low = 0;

    const int *const ptr = &high;
    cout << high << " " << *ptr << endl;

    // ptr = &low;  // gives error, read-only variable 'ptr'
    // *ptr = 1000; // assignment of read-only location error

    return 0;
}