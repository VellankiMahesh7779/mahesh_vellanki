#include <iostream>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string1: ";
    cin >> str;

    string rev = "";

    for(int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    cout << "Reversed string1: " << rev << endl;

    return 0;
}
