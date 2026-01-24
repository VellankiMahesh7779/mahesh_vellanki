// Include the input-output stream library for console operations
#include <iostream>
// Use the standard namespace to avoid prefixing std::
using namespace std;

// 1. Call by Value: Function receives a copy of the argument
void callByValue(int a) {
    a = a + 10; // Modify the local copy of 'a'
    cout << "Inside callByValue a = " << a << endl; // Print the modified value of 'a'
}

// 2. Call by Reference: Function receives a reference to the argument
void callByReference(int &b) {
    b = b + 10; // Modify the original variable 'b' via reference
    cout << "Inside callByReference b = " << b << endl; // Print the modified value of 'b'
}

// 3. Call by Pointer: Function receives a pointer to the argument
void callByPointer(int *c) {
    *c = *c + 10; // Modify the value pointed to by 'c'
    cout << "Inside callByPointer *c = " << *c << endl; // Print the modified value pointed by 'c'
}

int main() {
    int x = 7, y = 7, z = 7; // Declare and initialize three integer variables

    cout << "Before: x = " << x << ", y = " << y << ", z = " << z << endl; // Print initial values

    callByValue(x);        // Pass copy of x to callByValue (x will not change)
    callByReference(y);    // Pass y by reference to callByReference (y will change)
    callByPointer(&z);     // Pass address of z to callByPointer (z will change)

    cout << "After: " << endl; // Print label for after modification
    cout << "pass by value x = " << x << endl;        // x remains unchanged after callByValue
    cout << "pass by reference y = " << y << endl;    // y is modified by callByReference
    cout << "pass by pointer z = " << z << endl;      // z is modified by callByPointer

    return 0; // Indicate successful program termination
}
/* 🔹 Call by Value:
A COPY of the variable is passed to the function.
Changes made inside the function do NOT affect the original variable.

🔹 Call by Reference:
The actual variable is passed using a reference (&).
Changes made inside the function directly affect the original variable.

🔹 Call by Pointer:
The ADDRESS of the variable is passed using a pointer (*).
By using the pointer, we can modify the original variable’s value.
*/