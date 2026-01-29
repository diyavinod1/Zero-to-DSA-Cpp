/*
====================================================
File: 01_Input_Output.cpp
Concept: Input and Output in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- Almost every DSA problem starts with input
- Efficient input/output is crucial for large constraints
- Understanding I/O avoids silly bugs in contests & interviews

Topics covered:
- cout (output)
- cin (input)
- Multiple inputs
- Basic formatting
====================================================
*/

#include <iostream>
using namespace std;

int main() {

    // 1. Basic Output
    cout << "Hello, World!" << endl;

    // 2. Declaring variables
    int age;
    double salary;
    string name;

    // 3. Taking input using cin
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your salary: ";
    cin >> salary;

    // NOTE:
    // cin >> name reads only a single word - stops at space
    cout << "Enter your name: ";
    cin >> name;

    // 4. Printing multiple values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << "\n";
    cout << "Salary: " << salary << endl;

    // 5. Taking full line input using getline
    cin.ignore(); // clears input buffer
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Full Name: " << fullName << endl;

    /*
    Common Mistakes:
    - Forgetting cin.ignore() before getline
    - Expecting cin >> string to read spaces
    - Missing endl or '\n' in outputs
    */

    return 0;
}
