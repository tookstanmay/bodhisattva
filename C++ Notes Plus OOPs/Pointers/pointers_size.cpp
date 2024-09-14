#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 0;
    char b = 'a';
    long c = 1l;
    double d = 0.0;
    long long e = 0L;

    int *ptra = &a;
    char *ptrb = &b;
    long *ptrc = &c;
    double *ptrd = &d;
    long long *ptre = &e;

    cout << sizeof(ptra) << endl
         << sizeof(ptrb) << endl
         << sizeof(ptrc) << endl
         << sizeof(ptrd) << endl
         << sizeof(ptre) << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr_arr = arr;

    cout << sizeof(arr) << endl
         << sizeof(ptr_arr) << endl;

    return 0;
}