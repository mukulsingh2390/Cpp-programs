#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    cout << n << "! Expression: ";

    // Display the factorial expression
    for (int i = n; i >= 1; --i) {
        cout << i;
        if (i > 1)
            cout << " * ";   // print the multiplication sign between numbers
        fact *= i;           // calculate factorial
    }

    cout << endl;  // move to next line

    cout << "Result of " << n << "! = " << fact << endl;

    return 0;
}
