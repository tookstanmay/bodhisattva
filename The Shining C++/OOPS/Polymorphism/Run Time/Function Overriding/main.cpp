#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    // we didn't made virtual function
    // and hence no child function will be overridden
    void makeSound() {
        cout << "Animal made sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows!" << endl;
    }
};

class Lion : public Animal {
public:
    void makeSound() {
        cout << "Lion Roars!" << endl;
    }
};

int main() {

    Animal *animals[3] = {new Dog(), new Cat(), new Lion()};

    for (auto sound : animals) {
        sound->makeSound();
    }

    return 0;
}