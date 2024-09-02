#include "myheader.h"
#include <iostream>

using namespace std;

int main() {

    double radius = 100.1;
    double area = calculateArea(radius);
    cout << "Area calculating from header files: " << area << endl;

    return 0;
}

// Commands
// 1. g++ -o main main.cpp myheader.cpp

// incase doesn't work
// 1. g++ -c main.cpp
// 2. g++ -c myheader.cpp
// 3. g++ -o main main.o myheader.o