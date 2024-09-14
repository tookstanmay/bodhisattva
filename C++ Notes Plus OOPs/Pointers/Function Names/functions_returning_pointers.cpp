#include <bits/stdc++.h>
using namespace std;

// instead make x static or global
int *func() {
    int x = 100;
    int *ptr = &x;

    return ptr;
}
int main() {
    int *addr = func();
    fflush(stdin);

    printf("%p\n", addr);

    return 0;
}

// Output
// 0061FEF0
