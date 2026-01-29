/*
====================================================
File: 03_If_Else.cpp
Concept: Conditional Statements in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- Decision making is the core of algorithm logic
- Used in branching, edge case handling, and constraints
- Almost every problem relies on condition checks

Topics covered:
- if
- if-else
- if-else-if ladder
- Nested conditions
- Logical operators
- switch case
====================================================
*/

#include <iostream>
using namespace std;

int main() {

    // 1. Simple if statement
    int x = 10;

    if (x > 0) {
        cout << "x is positive" << endl;
    }

    // 2. if-else statement
    int n = -5;

    if (n >= 0) {
        cout << "n is non-negative" << endl;
    } else {
        cout << "n is negative" << endl;
    }

    // 3. if-else-if ladder
    int marks = 85;

    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 75) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: D" << endl;
    }

    // 4. Nested if statements
    int age = 20;
    bool hasID = true;

    if (age >= 18) {
        if (hasID) {
            cout << "Eligible to enter" << endl;
        } else {
            cout << "ID required" << endl;
        }
    } else {
        cout << "Underage" << endl;
    }

    // 5. Logical operators (&&, ||, !)
    int a = 5, b = 10;

    if (a > 0 && b > 0) {
        cout << "Both a and b are positive" << endl;
    }

    if (a > 0 || b < 0) {
        cout << "At least one condition is true" << endl;
    }

    if (!(a < 0)) {
        cout << "a is not negative" << endl;
    }

    // 6. switch-case statement

    /*
    switch-case is used when:
    - Multiple conditions depend on a single variable
    - The variable has discrete values (int, char, enum)

    Advantages:
    - Cleaner than multiple if-else
    - Easier to read and maintain

    Limitations:
    - Works only with constant expressions
    - Cannot use ranges or conditions like x > 5
    */

    int day = 3;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }

    /*
    Common Mistakes:
    - Using = instead of == in conditions
    - Missing braces in multi-line if blocks
    - Overusing nested if instead of else-if
    - Forgetting break - causes fall-through (in switch case)
    - Using non-constant expressions in case labels (in switch case)
    */

    /*
    Interview Tip:
    - Keep conditions simple and readable
    - Handle edge cases explicitly
    - Order conditions from most restrictive to least
    - Prefer switch-case over if-else when checking
      equality against fixed values
    */

    return 0;
}
