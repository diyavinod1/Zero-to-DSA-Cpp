# Time and Space Complexity – Foundations for DSA

## Why this matters
- Efficiency is key in coding interviews and contests
- Helps avoid TLE (Time Limit Exceeded) errors
- Core concept for analyzing algorithms and choosing the right approach
- Impacts memory usage, especially in recursion and large datasets

---

## 1️⃣ Time Complexity

### Big O Notation
- O(1) → Constant time  
- O(log n) → Logarithmic (e.g., Binary Search)  
- O(n) → Linear (e.g., Single loop)  
- O(n log n) → Linearithmic (e.g., Merge Sort, Heap Sort)  
- O(n²) → Quadratic (e.g., Nested loops)  
- O(2^n), O(n!) → Exponential / Factorial (e.g., recursion in backtracking)

### Examples

| Code Snippet                  | Complexity |
|-------------------------------|------------|
| `for(int i=0;i<n;i++)`        | O(n)       |
| `for(int i=0;i<n;i++) for(int j=0;j<n;j++)` | O(n²) |
| Binary search (`while` loop)  | O(log n)   |
| Merge Sort / Quick Sort        | O(n log n) |

### Rules / Tips
- Sum Rule → O(f + g) = max(O(f), O(g))  
- Product Rule → Nested loops: multiply complexities  
- Drop constants → O(2n) = O(n)  

---

## 2️⃣ Space Complexity

### Definition
- Extra memory used by the algorithm (stack, heap, temporary storage)

### Examples
- Array of size n → O(n)  
- Recursive factorial / Fibonacci → O(n) stack space  
- Iterative approach → O(1) extra space

---

## 3️⃣ Common Patterns in DSA

| Problem Type               | Time Complexity Guide |
|----------------------------|---------------------|
| Linear search              | O(n)                |
| Binary search              | O(log n)            |
| Sorting (merge/quick)      | O(n log n)          |
| Nested loops               | O(n²) or O(n*m)     |
| Recursion / backtracking   | Usually exponential |

---

## 4️⃣ Tips for Interviews

1. **Always estimate before coding** – helps avoid TLE  
2. **Check constraints** – n ≤ 10^5 → O(n log n) solution is safe, O(n²) may fail  
3. **Recursive space** – remember the call stack!  
4. **Use STL wisely** – sorting algorithms, maps, and sets have known complexities  
5. **Nested loops** – multiply complexities, watch for hidden loops (like string substrings)

---

## 5️⃣ Quick Reference

- Single loop → O(n)  
- Double loop → O(n²)  
- Loop with halving → O(log n)  
- Nested loop + recursive call → multiply complexities  
- Space: only count extra memory, ignore input size (except in some problems)
