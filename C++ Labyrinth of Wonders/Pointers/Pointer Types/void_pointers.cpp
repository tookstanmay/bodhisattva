#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 12;
    void *ptr = &a;
    int *next = (int *)ptr;

    cout << ptr << " " << &ptr << " " << *next << endl;

    return 0;
}