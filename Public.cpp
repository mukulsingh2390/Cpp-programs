#include <iostream>
using namespace std;

// Define a class
class Student {
public:
    // Public data members
    string name;
    int age;

    // Public member function
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of Student
    Student s1;

    // Access public members directly
    s1.name = "John";
    s1.age = 23;

    // Call public function
    s1.displayInfo();

    return 0;
}
