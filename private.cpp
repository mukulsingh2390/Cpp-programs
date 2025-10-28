#include <iostream>
using namespace std;

class Student {
private:
    // Private data members (cannot be accessed directly outside the class)
    string name;
    int age;

public:
    // Public function to set private values
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    // Public function to display private data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;

    // ❌ Not allowed: direct access to private members
    // s1.name = "John";   // Error
    // s1.age = 20;        // Error

    // ✅ Use public methods to modify and access private data
    s1.setData("John", 23);
    s1.displayData();

    return 0;
}
