#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    // Adding elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    // Printing elements
    cout << "Vector elements are: ";

    for (int num : numbers) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}