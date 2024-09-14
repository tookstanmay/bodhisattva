#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 12;
    int *addr = &a;

    cout << addr << endl;
    cout << *addr << endl;

    return 0;
}

// output
// 0x61ff08
// 12