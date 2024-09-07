#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    // defining a virtual function
    virtual void makeSound() {
        cout << "Animal made sound!" << endl;
    }
};

class Dog : public Animal {
public:
    // overriding makeSound()
    void makeSound() override {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    // overriding makeSound()
    void makeSound() override {
        cout << "Cat meows!" << endl;
    }
};

class Lion : public Animal {
public:
    // overriding makeSound()
    void makeSound() override {
        cout << "Lion Roars!" << endl;
    }
};

int main() {

    Animal *animals[3] = {new Dog(), new Cat(), new Lion()};

    for (auto sound : animals) {
        sound->Animal::makeSound();
        // sound->makeSound();
    }

    return 0;
}