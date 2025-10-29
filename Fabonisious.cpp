#include <iostream>
using namespace std;

int main() {
    int n;  // number of terms
    int first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << first << " ";

        // calculate next term
        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
