#include <bits/stdc++.h>
using namespace std;

int main() {

    // gives me a memory block of 4 * 4 = 16 size (as per gcc)
    int *ptr_malloc = (int *)malloc(4 * sizeof(int));

    for (int i = 0; i < 4; i++) {
        ptr_malloc[i] = i + 1;
    }

    for (int i = 0; i < 4; i++) {
        cout << ptr_malloc[i] << " ";
    }
    cout << endl;

    return 0;
}