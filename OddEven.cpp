#include <iostream>
using namespace std;

int main() {
    int number;

    // Input the number
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
