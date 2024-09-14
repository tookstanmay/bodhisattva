#include <bits/stdc++.h>
using namespace std;

enum permission {
    EXECUTE = 1,
    WRITE = 2,
    READ = 4
};

int main() {

    int permission = EXECUTE | READ | WRITE;
    cout << permission << endl;

    // chmod u=rwx,g=rx,o=r myfile
    // example "sudo chmod +777 etc/file.network"

    return 0;
}

// output
// 7