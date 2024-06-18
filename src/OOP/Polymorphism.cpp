// Polymorphism: Shape* pointers (shape1, shape2) pointing to derived classes (Circle, Square) demonstrate polymorphic behavior 
// where draw methods are called based on the actual object type (Circle or Square).

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
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
    // Using polymorphism
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();  // Output: "Drawing a circle"
    shape2->draw();  // Output: "Drawing a square"

    delete shape1;
    delete shape2;

    return 0;
}
