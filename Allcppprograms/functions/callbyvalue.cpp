#include <iostream>
using namespace std;

void mahesh(int n) {
    n = 30;
    cout << n<<endl;
}
//mahesdh
int main() {
    int a = 7;
    cout << a<< " \n";   // 1st output
    mahesh(a);           // Function call (call by value)
    cout << a << endl;   // 3rd output
}
