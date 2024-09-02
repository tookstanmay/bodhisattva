#include <bits/stdc++.h>
using namespace std;

void tanmay() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << "accessing using normal method: " << endl;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl
         << endl;

    // pointer to arr
    int *ptr = arr;

    cout << "accessing using pointer name dereferencing: " << endl;
    cout << *ptr << " " << *(ptr + 1) << " " << *(ptr + 2) << endl
         << endl;

    cout << "accessing using normal method for pointer name: " << endl;
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << endl
         << endl;
    cout << "accessing using array name dereferencing: " << endl;
    cout << *(arr) << " " << *(arr + 1) << " " << *(arr + 2) << endl;
}

int main() {

    tanmay();

    return 0;
}

// Output

// accessing using normal method: 
// 1 2 3

// accessing using pointer name dereferencing:
// 1 2 3

// accessing using normal method for pointer name:
// 1 2 3

// accessing using array name dereferencing:
// 1 2 3