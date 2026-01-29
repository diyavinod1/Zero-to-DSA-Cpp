/*
====================================================
File: 05_Functions.cpp
Concept: Functions in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- Breaks problems into smaller, manageable parts
- Improves code reusability and readability
- Essential for recursion and modular design

Topics covered:
- Function declaration and definition
- Parameters and return types
- Void functions
- Function calling
====================================================
*/

#include <iostream>
using namespace std;

// 1. Function declaration (prototype)
int add(int a, int b);

// 2. Void function
void printMessage();

// 3. Function with no parameters and return value
int getNumber();

int main() {

    // Calling add function
    int sum = add(10, 20);
    cout << "Sum: " << sum << endl;

    // Calling void function
    printMessage();

    // Calling function with return value
    int num = getNumber();
    cout << "Returned value: " << num << endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

void printMessage() {
    cout << "Learning Functions in C++" << endl;
}

int getNumber() {
    return 42;
}
