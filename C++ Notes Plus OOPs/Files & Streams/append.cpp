#include <bits/stdc++.h>
using namespace std;

int main() {

    fstream filestream;

    filestream.open("file.txt", ios::app);

    if (filestream.is_open()) {
        filestream << endl
                   << "Hello, Tanmay Sharma!" << endl;

        filestream.close();
    }

    return 0;
}