#include <bits/stdc++.h>
using namespace std;

int main() {

    // gives me 5 block of size 4 each = 20 bytes (as per gcc)
    // since I'm storing character here, of 1 byte each
    // it only uses 1 byte
    char *ptr_calloc = (char *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++) {
        ptr_calloc[i] = 'a' + i;
    }

    for (int i = 0; i < 5; i++) {
        cout << ptr_calloc[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        printf("%p %d\n", (ptr_calloc + i), sizeof(ptr_calloc[i]));
    }
    cout << endl;

    free(ptr_calloc);

    return 0;
}