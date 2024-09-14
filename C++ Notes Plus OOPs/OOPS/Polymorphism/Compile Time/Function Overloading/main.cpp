#include <bits/stdc++.h>
using namespace std;

class mathematics {
public:
    // function to add two variables
    int add(int a, int b) {
        return a + b;
    }

    // function to add three variables
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {

    mathematics m1;
    cout << "Call from two variable function: " << m1.add(5, 3) << endl;
    cout << "Call from three variable function: " << m1.add(8, 11, 11) << endl;

    return 0;
}

// output
// Call from two variable function: 8
// Call from three variable function: 30
