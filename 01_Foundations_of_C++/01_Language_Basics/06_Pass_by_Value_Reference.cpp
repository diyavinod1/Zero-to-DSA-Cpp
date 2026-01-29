/*
====================================================
File: 06_Pass_by_Value_Reference.cpp
Concept: Pass by Value and Pass by Reference in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- Determines whether data is copied or modified
- Critical for performance (avoiding unnecessary copies)
- Used heavily in arrays, recursion, and STL

Topics covered:
- Pass by Value
- Pass by Reference
- Using references
====================================================
*/

#include <iostream>
using namespace std;

// Pass by Value
void incrementByValue(int x) {
    x = x + 1;
}

// Pass by Reference
void incrementByReference(int &x) {
    x = x + 1;
}

// Swap using Pass by Value (will NOT work)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap using Pass by Reference (will work)
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int num = 10;

    cout << "Original num: " << num << endl;

    incrementByValue(num);
    cout << "After incrementByValue: " << num << endl;

    incrementByReference(num);
    cout << "After incrementByReference: " << num << endl;

    int a = 5, b = 10;

    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swapByValue: a = " << a << ", b = " << b << endl;

    swapByReference(a, b);
    cout << "After swapByReference: a = " << a << ", b = " << b << endl;

    /*
    Key Takeaways:
    - Pass by value creates a copy
    - Pass by reference modifies original data
    - Use references to optimize performance
    */

    /*
    Interview Tip:
    - Prefer pass by reference for large objects
    - Use const reference when modification is not needed
    */

    return 0;
}
