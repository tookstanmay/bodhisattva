#include <bits/stdc++.h>
using namespace std;

int main() {

    fstream file;
    file.open("file.txt", ios::out);

    // putting a character
    if (file.is_open()) {
        file.put('A');
        file.close();
    }

    file.open("file.txt", ios::out);

    // putting a line
    if (file.is_open()) {
        file << "Ghostbusters!!" << endl;
        file << 66 << endl;
        file.close();
    }

    return 0;
}