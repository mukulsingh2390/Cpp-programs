#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op) {
        case '+': cout << "Result = " << a + b; break;
        case '-': cout << "Result = " << a - b; break;
        case '*': cout << "Result = " << a * b; break;
        case '/': 
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero not allowed!";
            break;
        default: cout << "Invalid operator!";
    }
    cout << endl;
    return 0;
}
