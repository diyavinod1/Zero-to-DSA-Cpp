/*
====================================================
File: 02_Vectors_Basics.cpp
Concept: Vectors (dynamic arrays) in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- STL container, dynamic sizing
- Frequently used in coding interviews
- Supports algorithms and iterators
- Basis for dynamic programming and graph adjacency lists
====================================================
*/

#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, max_element, min_element
using namespace std;

int main() {

    // 1. Declaring a vector
    vector<int> v = {1, 2, 3, 4, 5};

    // 2. Accessing elements
    cout << "First element: " << v[0] << endl;
    cout << "Last element: " << v[v.size() - 1] << endl;

    // 3. Traversal
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 4. Adding elements
    v.push_back(6);    // Add at end
    v.insert(v.begin() + 2, 10); // Insert 10 at index 2

    // 5. Removing elements
    v.pop_back();       // Remove last
    v.erase(v.begin() + 1); // Remove element at index 1

    // 6. Size and capacity
    cout << "Vector size: " << v.size() << endl;
    cout << "Vector capacity: " << v.capacity() << endl;

    // 7. Clearing vector
    // v.clear();
    // cout << "Size after clear(): " << v.size() << endl;

    // 8. Iterators
    cout << "Vector using iterators: ";
    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

    // 9. Range-based for loop
    cout << "Range-based loop: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 10. Sorting
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 11. Reverse
    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 12. Max and Min
    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;

    // 13. 2D vector (matrix)
    vector<vector<int>> mat(3, vector<int>(4, 0)); // 3x4 matrix of zeros
    mat[1][2] = 5;
    cout << "2D Vector element mat[1][2]: " << mat[1][2] << endl;

    // Traversal of 2D vector
    cout << "2D Vector elements:\n";
    for(auto row : mat){
        for(int val : row) cout << val << " ";
        cout << endl;
    }

    // 14. Swap vectors
    vector<int> a = {1,2,3};
    vector<int> b = {4,5,6};
    a.swap(b);
    cout << "After swap, a: ";
    for(int x : a) cout << x << " ";
    cout << endl;

    // 15. Check empty
    cout << "Is vector a empty? " << (a.empty() ? "Yes" : "No") << endl;

    /*
    Interview Notes:
    - Prefer vectors over arrays for dynamic size
    - Use iterators for STL algorithms
    - Know differences: size(), capacity(), empty(), max_size()
    - 2D vectors = adjacency lists, DP tables
    - insert(), erase() = important for middle element operations
    - push_back() and pop_back() are O(1) amortized
    */

    return 0;
}
