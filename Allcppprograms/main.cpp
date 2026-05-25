#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (str.length() >= 3) {
        char temp = str[0];
        str[0] = str[2];
        str[2] = temp;
    }

    cout << "Result: " << str << endl;

    return 0;
}