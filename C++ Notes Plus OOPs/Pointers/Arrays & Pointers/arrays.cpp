#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array

    // Accessing elements:
    std::cout << arr[2] << std::endl;     // Array notation
    std::cout << *(ptr + 2) << std::endl; // Pointer arithmetic

    // Trying to modify the array name (invalid):
    // arr = new int[10]; // Error

    // Modifying the pointer:
    ptr = new int[10]; // Valid

    return 0;
}

// Output
// 3
// 3
