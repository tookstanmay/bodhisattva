#include <bits/stdc++.h>
using namespace std;

int main() {

    const int high = 100;
    const int *ptr = &high;
    cout << high << " " << *ptr << endl;

    const int low = 0;
    ptr = &low;
    cout << low << " " << *ptr << endl;

    return 0;
}