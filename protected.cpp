#include <iostream>
using namespace std;

class Person {
protected:
    // Protected data members (accessible in derived classes, but not outside)
    string name;
    int age;
};

class Student : public Person {
public:
    // Function to set protected data (accessible here because of inheritance)
    void setData(string n, int a) {
        name = n;  // allowed because 'name' is protected
        age = a;   // allowed because 'age' is protected
    }

    // Function to display data
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;

    // ❌ Not allowed: cannot access protected members directly
    // s1.name = "John";  // Error
    // s1.age = 20;       // Error

    // ✅ Allowed: access through public member functions
    s1.setData("John", 20);
    s1.displayData();

    return 0;
}
