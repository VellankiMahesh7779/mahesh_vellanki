#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a strings: ";
    cin >> str;

    if (str.length() >= 3) {
        // Reverse first 3 characters
        swap(str[0], str[2]);
    }

    cout << "Result: " << str << endl;

    return 0;
}
