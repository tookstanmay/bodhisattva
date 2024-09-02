#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 12;
    int *addr = &a;
    int **b = &addr;

    cout << b << endl;
    cout << *b << endl;
    cout << **b << endl;

    cout << endl;
    cout << addr << endl;
    cout << *addr << endl;

    return 0;
}

// Output
// 0x61ff04     // address of b
// 0x61ff08     // address of addr, through b
// 12           // value of a, through b

// 0x61ff08     // address of addr
// 12           // value of a, through addr