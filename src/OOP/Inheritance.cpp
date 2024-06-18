// Inheritance: Dog class inherits (public Animal) the sound method from the Animal class.
// Polymorphism: sound method in Dog class overrides the sound method in Animal class, demonstrating runtime polymorphism.

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class inheriting Animal
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    // Using inheritance
    Animal a;
    Dog d;

    a.sound();  // Output: "Animal makes a sound"
    d.sound();  // Output: "Dog barks"

    return 0;
}
