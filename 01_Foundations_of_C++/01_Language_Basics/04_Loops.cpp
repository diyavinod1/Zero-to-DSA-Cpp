/*
====================================================
File: 04_Loops.cpp
Concept: Loops in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- Used for array traversal, pattern problems, brute force solutions
- Foundation for recursion and nested logic
- Efficiency and correctness depend on loop control

Loop Selection Guide:
- for loop     -> When number of iterations is known
- while loop   -> When iterations depend on a condition
- do-while     -> When code must run at least once
====================================================
*/

#include <iostream>
using namespace std;

int main() {

    // 1. for loop
    cout << "For loop example:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. while loop
    cout << "\nWhile loop example:" << endl;
    int n = 5;
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << endl;

    // 3. do-while loop
    cout << "\nDo-while loop example:" << endl;
    int x = 0;
    do {
        cout << x << " ";
        x++;
    } while (x < 3);
    cout << endl;

    // 4. Infinite loop example (commented to avoid execution)
    /*
    while (true) {
        cout << "Infinite Loop" << endl;
    }
    */

    // 5. Loop control statements

    // break example
    cout << "\nBreak statement example:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // exits the loop
        }
        cout << i << " ";
    }
    cout << endl;

    // continue example
    cout << "\nContinue statement example:" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // skips current iteration
        }
        cout << i << " ";
    }
    cout << endl;

    // 6. Nested loops (important for pattern problems)
    cout << "\nNested loop example:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    /*
    Common Mistakes:
    - Off-by-one errors (i <= n vs i < n)
    - Forgetting to update loop variable
    - Infinite loops due to wrong condition
    */

    /*
    Interview Tip:
    - Choose loop type wisely
    - Be careful with boundaries
    - Understand time complexity from loop nesting
    */

    return 0;
}
