#include <iostream>
using namespace std;

long long fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        cout << "Not defined";
    else
        cout << "Factorial is: " << fact(n);

    return 0;
}
