#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string name;

    struct {
        int standard;
        char grade;
    };

    enum {
        EXEC = 1,
        READ = 2,
        WRITE = 4
    };

    union {
        int enroll;
        int rank;
    };
};

int main() {

    return 0;
}