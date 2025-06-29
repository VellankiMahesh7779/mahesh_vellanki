#include <iostream>
using namespace std;

// Function 1: Adds two integers
int add(int a, int b) {
    // Adds two int values and returns the result
    return a + b;
}

// Function 2: Adds two floating-point numbers
float add(float a, float b) {
    // Adds two float values and returns the result
    return a + b;
}

// Function 3: Adds three double-precision numbers
double add(double a, double b, double c) {
    // Adds three double values and returns the result
    return a + b + c;
}

int main() {
    // Call the add() function with different argument types and counts

    int intResult = add(10, 20);                    // Matches Function 1
    float floatResult = add(5.5f, 2.3f);            // Matches Function 2
    double doubleResult = add(1.1, 2.2, 3.3);       // Matches Function 3

    // Output results
    cout << "Sum of two integers: " << intResult << endl;
    cout << "Sum of two floats: " << floatResult << endl;
    cout << "Sum of three doubles: " << doubleResult << endl;

    return 0;
}
