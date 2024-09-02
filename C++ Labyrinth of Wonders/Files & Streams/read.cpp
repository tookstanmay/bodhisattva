#include <bits/stdc++.h>
using namespace std;

int main() {

    fstream file;

    file.open("file.txt", ios::in);

    // one way, reading character by character
    if (file.is_open()) {
        char ch;
        while (file.get(ch)) {
            cout << ch;
        }
        file.close();
    }

    cout << endl;

    // second way, reading line by line
    file.open("file.txt", ios::in);
    if (file.is_open()) {
        string str;
        while (getline(file, str)) {
            cout << str << endl;
        }
        file.close();
    }

    return 0;
}