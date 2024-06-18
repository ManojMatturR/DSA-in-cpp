// Class (Car): Represents a blueprint for creating Car objects. It encapsulates data (brand and year) and methods (displayInfo).
// Object (car1, car2): Instances of the Car class created using the constructor (Car(string b, int y)).
// Constructor: Initializes the object when it's created (Car(string b, int y)).
// Method (displayInfo): Member function of the Car class that displays the details of the car object.

#include <iostream>
using namespace std;

// Class declaration
class Car {
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Method to display details
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    // Creating objects of the Car class
    Car car1("Toyota", 2020);
    Car car2("BMW", 2022);

    // Calling method on objects
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
