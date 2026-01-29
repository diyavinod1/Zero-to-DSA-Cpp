/*
====================================================
File: 02_Data_Types.cpp
Concept: Data Types in C++
Section: Foundations of C++
====================================================

Why this matters in DSA:
- Choosing the correct data type avoids overflow bugs
- Impacts memory usage and performance
- Essential for constraints-based problem solving

Topics covered:
- Primitive data types
- Size of data types
- Signed vs unsigned
- Overflow basics
====================================================
*/

#include <iostream>
#include <climits>   // For INT_MAX, INT_MIN
#include <vector>
using namespace std;

int main() {

    // 1. Integer types
    int a = 10;
    long b = 100000;
    long long c = 10000000000LL;

    cout << "int: " << a << endl;
    cout << "long: " << b << endl;
    cout << "long long: " << c << endl;

    // 2. Floating point types
    float x = 3.14f;
    double y = 3.1415926535;

    cout << "float: " << x << endl;
    cout << "double: " << y << endl;

    // 3. Character type
    char ch = 'A';
    cout << "char: " << ch << endl;

    // 4. Boolean type
    bool isActive = true;
    cout << "bool: " << isActive << endl; // prints 1 for true, 0 for false

    // 5. String type
    string name = "C++";
    cout << "string: " << name << endl;

    // 6. Size of data types (important for memory understanding)
    cout << "\nSize of data types (in bytes):" << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;

    // 7. Signed vs Unsigned
    unsigned int u = 10;
    int s = -10;

    cout << "\nUnsigned int: " << u << endl;
    cout << "Signed int: " << s << endl;

    // 8. Integer limits (VERY important for constraints)
    cout << "\nInteger Limits:" << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;

    // 9. Overflow example
    int overflow = INT_MAX;
    overflow = overflow + 1; // overflow occurs

    cout << "\nOverflow example (INT_MAX + 1): " << overflow << endl;

    // 10. auto keyword (Type Inference)

    /*
    auto lets the compiler automatically deduce the data type
    from the initializer.

    Why important in DSA:
    - Commonly used with STL iterators
    - Makes code cleaner and less error-prone
    - Avoids long and complex type names
    */

    auto num = 10;            // int
    auto pi = 3.14159;        // double
    auto letter = 'Z';        // char
    auto isValid = false;     // bool
    auto text = "DSA";        // const char*

    cout << "\nUsing auto keyword:" << endl;
    cout << num << " " << pi << " " << letter << " "
         << isValid << " " << text << endl;

    // auto with STL (very common)
    vector<int> v = {1, 2, 3, 4};

    cout << "Vector elements: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    /*
    Common Interview Notes:
    - Use long long for large constraints (1e9+)
    - int may overflow silently
    - double preferred over float for precision
    - unsigned types avoid negatives but can cause logic bugs
    - auto requires initialization
    - auto cannot be used for function parameters (pre-C++20)
    - auto improves readability with iterators
    */
  
    return 0;
}
