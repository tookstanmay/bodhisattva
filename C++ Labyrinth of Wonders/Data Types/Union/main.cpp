#include<bits/stdc++.h>
using namespace std;

union myunion {
public:
    int data;
    int age;
    char grade;


    myunion(int d, int a, char g) {
        this->age = a;
        this->data = d;
        this->grade = g;
    }
};


int main(){

    return 0;
}