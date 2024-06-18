// Abstraction: Shape class contains a pure virtual function (draw() = 0;) that makes it an abstract class, 
// which cannot be instantiated directly but can be used to define a common interface for derived classes (Circle, Square).

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

// Derived classes
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    // Using abstraction
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();  // Output: "Drawing a circle"
    shape2->draw();  // Output: "Drawing a square"

    delete shape1;
    delete shape2;

    return 0;
}
