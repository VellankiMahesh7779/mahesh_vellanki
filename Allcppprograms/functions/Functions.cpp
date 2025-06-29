#include <iostream>
using namespace std;

void mahesh(int n) {
    n = 30;
    cout << n;
}

int main() {
    int a = 5;
    cout << a << endl;   // 1st output
    mahesh(a);           // Function call (call by value)
    cout << a << endl;   // 3rd output
}
