#include <bits/stdc++.h>
using namespace std;

void print(int a, int b) {
    cout << "Value from int: " << a << " " << b << endl;
}

void print(float a, float b) {
    cout << "values from float: " << a << " " << b << endl;
}

int main() {

    // this is considered ambiguous
    // because compiler treats 3.5 and 4.5 as
    // double and can't find double declaration for this
    // print function
    // print(3.5, 4.5);

    // this works correctly
    // as we specify float numbers
    // using the suffix 'f'
    print(3.5f, 4.5f);

    return 0;
}

// Output:
// values from float: 3.5 4.5