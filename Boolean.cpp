#include <iostream>
using namespace std;

int main() {
    int number;
    bool isEven;  // Boolean variable declaration
    bool isOdd;   // Boolean variable declaration
    
    cout << "Enter an integer: ";
    cin >> number;

    // Check if number is even
    isEven = (number % 2 == 0);
    isOdd = !isEven;

    // Output result based on boolean value
    if (isEven) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    // Demonstrate boolean output directly
    cout << "Boolean value of is Even: " << boolalpha << isEven << endl;
    cout << "Boolean value of is Odd: " << boolalpha << isOdd<< endl;
    return 0;
}
