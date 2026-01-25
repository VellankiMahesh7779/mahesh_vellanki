#include <iostream>
using namespace std;
// Class demonstrating function overloading
class addition {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};
// Main function to demonstrate function overloading
int main() {
    addition m;
    cout << m.add(2, 3) << endl;
    cout << m.add(2.5, 3.5) << endl;
    return 0;
}
