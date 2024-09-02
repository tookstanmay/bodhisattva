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

    // realloc code
    ptr_malloc = (int *)realloc(ptr_malloc, 10 * sizeof(int));

    for (int i = 4; i < 10; i++) {
        ptr_malloc[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << ptr_malloc[i] << " ";
    }
    cout << endl;

    return 0;
}