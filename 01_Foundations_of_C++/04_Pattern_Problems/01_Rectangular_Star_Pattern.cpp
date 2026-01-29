/*
====================================================
File: 01_Rectangular_Star_Pattern.cpp
Pattern: Rectangular Star
Section: Pattern Problems
====================================================

Why this matters in DSA:
- Strengthens nested loop logic
- Helps visualize rows and column relationships
- Foundation for matrix & algorithmic pattern thinking
====================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Logic to print rectangular star pattern
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    /*
    Interview Notes:
    - Understand how outer and inner loops relate
    - Common pitfalls: off‑by‑one errors
    */

    return 0;
}
