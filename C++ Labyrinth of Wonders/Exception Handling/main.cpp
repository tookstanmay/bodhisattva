#include <exception>
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    try {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        if (num2 == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }

        int result = num1 / num2;
        cout << "Result: " << result << endl;
    } catch (runtime_error &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

// Output
// Enter two numbers: 12 0
// Error: Division by zero is not allowed.