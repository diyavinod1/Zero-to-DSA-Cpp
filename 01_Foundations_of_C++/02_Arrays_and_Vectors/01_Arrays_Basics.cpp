/*
====================================================
File: 01_Arrays_Basics.cpp
Concept: Arrays in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- Core data structure for storing sequential elements
- Fundamental for traversal, sorting, searching
- Basis for 2D arrays and matrices
- std::array provides safer and more functional alternative
====================================================
*/

#include <iostream>
#include <array>    // For std::array
using namespace std;

// 7. Pass array to function example
void printArray(int arr[], int n) {
    cout << "Printing array from function: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {

    // 1. Declaring primitive arrays
    int arr[5] = {1, 2, 3, 4, 5};

    // 2. Accessing elements
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;

    // 3. Loop traversal
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Modifying elements
    arr[2] = 10; 
    cout << "Modified 3rd element: " << arr[2] << endl;

    // 5. Size of array
    cout << "Size of array: " << sizeof(arr)/sizeof(arr[0]) << "\n";

    // 6. Accessing elements using pointers
    int* ptr = arr;
    cout << "Array elements via pointer: ";
    for(int i = 0; i < 5; i++)
        cout << *(ptr+i) << " ";
    cout << endl;

    // 7. Pass array to function
    printArray(arr, 5);

    // 8. Operations using std::array (C++ STL) (ARRAY CLASS)
    cout << "\n--- std::array Operations ---\n";

    array<int,5> a = {1,2,3,4,5};

    // Accessing elements
    cout << "a[2]: " << a[2] << endl;
    cout << "a.at(2): " << a.at(2) << endl;  // safer: throws exception if out-of-bounds

    // Front and back
    cout << "Front element: " << a.front() << endl;
    cout << "Back element: " << a.back() << endl;

    // Size and max_size
    cout << "Size: " << a.size() << endl;
    cout << "Max size: " << a.max_size() << endl;

    // Check if empty
    cout << "Is empty? " << (a.empty() ? "Yes" : "No") << endl;

    // Swapping arrays
    array<int,5> b = {5,4,3,2,1};
    a.swap(b);
    cout << "After swap, a: ";
    for(int x : a) cout << x << " ";
    cout << endl;

    // Filling array
    a.fill(0);
    cout << "After fill(0), a: ";
    for(int x : a) cout << x << " ";
    cout << endl;

    // Iterators
    cout << "Using iterators: ";
    for(auto it = a.begin(); it != a.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Using range-based for loop
    cout << "Range-based for loop: ";
    for(int x : b) cout << x << " ";
    cout << endl;

    /*
    Common Mistakes:
    - Index out of bounds
    - Forgetting that array size is fixed
    - Confusing primitive arrays with std::array
    - Using out-of-bounds index
    - Forgetting .at() throws exception (safe method)
    - Using sizeof incorrectly for dynamic arrays
    */

    /*
    Interview Notes:
    - Prefer std::array over primitive arrays when size known
    - Use .at() for safe access
    - Use .begin()/.end() for iterators and STL algorithms
    - fill(), swap(), front(), back() are commonly asked
    */

    return 0;
}
