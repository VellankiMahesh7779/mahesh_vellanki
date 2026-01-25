#include <iostream>
using namespace std;

class addition {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    addition m;
    cout << m.add(2, 3) << endl;
    cout << m.add(2.5, 3.5) << endl;
    return 0;
}
