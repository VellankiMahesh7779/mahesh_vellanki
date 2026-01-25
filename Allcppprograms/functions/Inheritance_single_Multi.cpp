#include <iostream>
using namespace std;

// Base class (Level 1)
class Vehicle {
public:
    void start() {
        cout << "Vehicle starts" << endl;
    }
};

// Derived class (Single Inheritance)
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car drives" << endl;
    }
};

// Derived class (Multilevel Inheritance)
class ElectricCar : public Car {
public:
    void charge() {
        cout << "Electric car is charging" << endl;
    }
};

int main() {
    ElectricCar e;
    e.start();   // From Vehicle
    e.drive();   // From Car
    e.charge();  // Own method
    return 0;
}
