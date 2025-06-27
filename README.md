# Leetcode
This repository contains all the leetcode must solve problems.

## HOW TO APPROACH A PROBLEM?

## ✅ 1. Understand the Problem First

Before jumping into coding:

- Read the problem twice.
- Identify input and output formats.
- Clarify constraints (e.g., input size, time limits).
- Restate the problem in your own words.
- Think of examples manually.

**Key Questions to Ask:**
- What exactly do I need to find/return?
- Are the inputs sorted, unique, or repetitive?
- Do I care about time/memory efficiency?

---

## 🔍 2. Classify the Problem Type

| Problem Type       | Hints for Data Structures/Algorithms        |
|--------------------|---------------------------------------------|
| Searching          | Binary Search, Hash Maps, Trees             |
| Sorting            | Merge Sort, Quick Sort                      |
| String Manipulation| Two Pointers, Stack, Sliding Window         |
| Dynamic Programming| Arrays, Recursion + Memoization             |
| Graph Problems     | BFS, DFS, Dijkstra, Union-Find              |
| Range Queries      | Segment Trees, Fenwick Trees                |
| Combinatorics      | Recursion, Backtracking                     |

---

## 🧰 3. Learn the Core Data Structures

| Data Structure | Use When You Need To...                        |
|----------------|------------------------------------------------|
| Array/List     | Store a sequence; access by index              |
| HashMap        | Quick lookup by key (O(1) avg. time)           |
| Set            | Store unique items quickly                     |
| Stack          | LIFO behavior; backtracking, parsing           |
| Queue          | FIFO behavior; BFS, task scheduling            |
| Heap           | Get min/max quickly; priority queues           |
| Graph          | Represent connections/networks                 |
| Tree           | Hierarchical data, faster search (BST, Trie)   |

---

## ⚙️ 4. Learn Algorithmic Patterns (KEY!)

| Pattern        | Description                 | Common Problems              |
|----------------|-----------------------------|-------------------------------|
| Two Pointers   | Iterate from both ends      | Palindromes, Sorted Arrays    |
| Sliding Window | Subarrays with conditions   | Max sum subarray              |
| Binary Search  | Divide and conquer search   | Search in rotated array       |
| DFS/BFS        | Graph/tree traversal        | Path finding                  |
| Backtracking   | Try all options and undo    | Sudoku, N-Queens              |
| Greedy         | Choose best option locally  | Activity selection            |
| Dynamic Prog.  | Break into subproblems      | Fibonacci, Knapsack           |

---

## 🧩 5. Solve Problems Step-by-Step

### Problem: Find the First Non-Repeating Character in a String

- **Input**: `"leetcode"`
- **Output**: `"l"`

### Step-by-Step Plan:

1. **Understand**: Return the first character that appears only once.
2. **Example**: `"loveleetcode"` → `"v"`
3. **Constraints**: Only lowercase letters.
4. **Approach**: Use a HashMap to count frequencies.

### Plan:
- Traverse string, count frequency.
- Traverse again, return first character with frequency 1.

---

## 💻 Code (C++)

```cpp
#include <iostream>
#include <unordered_map>
#include <string>

char firstNonRepeatingChar(const std::string& s) {
    std::unordered_map<char, int> freq;

    // Count frequencies
    for (char ch : s) {
        freq[ch]++;
    }

    // Find first non-repeating
    for (char ch : s) {
        if (freq[ch] == 1) {
            return ch;
        }
    }

    return '\0'; // or a special char like '_' if no such character
}

int main() {
    std::string input = "loveleetcode";
    char result = firstNonRepeatingChar(input);

    if (result != '\0')
        std::cout << "First non-repeating character: " << result << std::endl;
    else
        std::cout << "No non-repeating character found." << std::endl;

    return 0;
}
````

---

## 📌 Summary

This README serves as a cheat-sheet and includes:

* Problem understanding checklist ✅
* Classification of problem types 🔍
* Key data structures and patterns 🧰
* Real example solved step-by-step with C++ 💻

---


<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/aryaaa324/Leetcode/tree/master/0001-two-sum) |
| [0015-3sum](https://github.com/aryaaa324/Leetcode/tree/master/0015-3sum) |
| [0026-remove-duplicates-from-sorted-array](https://github.com/aryaaa324/Leetcode/tree/master/0026-remove-duplicates-from-sorted-array) |
| [0035-search-insert-position](https://github.com/aryaaa324/Leetcode/tree/master/0035-search-insert-position) |
| [0048-rotate-image](https://github.com/aryaaa324/Leetcode/tree/master/0048-rotate-image) |
| [0053-maximum-subarray](https://github.com/aryaaa324/Leetcode/tree/master/0053-maximum-subarray) |
| [0054-spiral-matrix](https://github.com/aryaaa324/Leetcode/tree/master/0054-spiral-matrix) |
| [0073-set-matrix-zeroes](https://github.com/aryaaa324/Leetcode/tree/master/0073-set-matrix-zeroes) |
| [0075-sort-colors](https://github.com/aryaaa324/Leetcode/tree/master/0075-sort-colors) |
| [0088-merge-sorted-array](https://github.com/aryaaa324/Leetcode/tree/master/0088-merge-sorted-array) |
| [0118-pascals-triangle](https://github.com/aryaaa324/Leetcode/tree/master/0118-pascals-triangle) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/aryaaa324/Leetcode/tree/master/0121-best-time-to-buy-and-sell-stock) |
| [0136-single-number](https://github.com/aryaaa324/Leetcode/tree/master/0136-single-number) |
| [0152-maximum-product-subarray](https://github.com/aryaaa324/Leetcode/tree/master/0152-maximum-product-subarray) |
| [0169-majority-element](https://github.com/aryaaa324/Leetcode/tree/master/0169-majority-element) |
| [0189-rotate-array](https://github.com/aryaaa324/Leetcode/tree/master/0189-rotate-array) |
| [0268-missing-number](https://github.com/aryaaa324/Leetcode/tree/master/0268-missing-number) |
| [0283-move-zeroes](https://github.com/aryaaa324/Leetcode/tree/master/0283-move-zeroes) |
| [0485-max-consecutive-ones](https://github.com/aryaaa324/Leetcode/tree/master/0485-max-consecutive-ones) |
| [0540-single-element-in-a-sorted-array](https://github.com/aryaaa324/Leetcode/tree/master/0540-single-element-in-a-sorted-array) |
| [0560-subarray-sum-equals-k](https://github.com/aryaaa324/Leetcode/tree/master/0560-subarray-sum-equals-k) |
| [0792-binary-search](https://github.com/aryaaa324/Leetcode/tree/master/0792-binary-search) |
| [1878-check-if-array-is-sorted-and-rotated](https://github.com/aryaaa324/Leetcode/tree/master/1878-check-if-array-is-sorted-and-rotated) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/aryaaa324/Leetcode/tree/master/0001-two-sum) |
| [0013-roman-to-integer](https://github.com/aryaaa324/Leetcode/tree/master/0013-roman-to-integer) |
| [0073-set-matrix-zeroes](https://github.com/aryaaa324/Leetcode/tree/master/0073-set-matrix-zeroes) |
| [0169-majority-element](https://github.com/aryaaa324/Leetcode/tree/master/0169-majority-element) |
| [0205-isomorphic-strings](https://github.com/aryaaa324/Leetcode/tree/master/0205-isomorphic-strings) |
| [0242-valid-anagram](https://github.com/aryaaa324/Leetcode/tree/master/0242-valid-anagram) |
| [0268-missing-number](https://github.com/aryaaa324/Leetcode/tree/master/0268-missing-number) |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [0560-subarray-sum-equals-k](https://github.com/aryaaa324/Leetcode/tree/master/0560-subarray-sum-equals-k) |
| [1890-sum-of-beauty-of-all-substrings](https://github.com/aryaaa324/Leetcode/tree/master/1890-sum-of-beauty-of-all-substrings) |
## String
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/aryaaa324/Leetcode/tree/master/0005-longest-palindromic-substring) |
| [0008-string-to-integer-atoi](https://github.com/aryaaa324/Leetcode/tree/master/0008-string-to-integer-atoi) |
| [0013-roman-to-integer](https://github.com/aryaaa324/Leetcode/tree/master/0013-roman-to-integer) |
| [0014-longest-common-prefix](https://github.com/aryaaa324/Leetcode/tree/master/0014-longest-common-prefix) |
| [0151-reverse-words-in-a-string](https://github.com/aryaaa324/Leetcode/tree/master/0151-reverse-words-in-a-string) |
| [0205-isomorphic-strings](https://github.com/aryaaa324/Leetcode/tree/master/0205-isomorphic-strings) |
| [0242-valid-anagram](https://github.com/aryaaa324/Leetcode/tree/master/0242-valid-anagram) |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [0812-rotate-string](https://github.com/aryaaa324/Leetcode/tree/master/0812-rotate-string) |
| [1078-remove-outermost-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1078-remove-outermost-parentheses) |
| [1737-maximum-nesting-depth-of-the-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1737-maximum-nesting-depth-of-the-parentheses) |
| [1890-sum-of-beauty-of-all-substrings](https://github.com/aryaaa324/Leetcode/tree/master/1890-sum-of-beauty-of-all-substrings) |
| [2032-largest-odd-number-in-string](https://github.com/aryaaa324/Leetcode/tree/master/2032-largest-odd-number-in-string) |
## Stack
|  |
| ------- |
| [1078-remove-outermost-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1078-remove-outermost-parentheses) |
| [1737-maximum-nesting-depth-of-the-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1737-maximum-nesting-depth-of-the-parentheses) |
## Two Pointers
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/aryaaa324/Leetcode/tree/master/0005-longest-palindromic-substring) |
| [0015-3sum](https://github.com/aryaaa324/Leetcode/tree/master/0015-3sum) |
| [0026-remove-duplicates-from-sorted-array](https://github.com/aryaaa324/Leetcode/tree/master/0026-remove-duplicates-from-sorted-array) |
| [0075-sort-colors](https://github.com/aryaaa324/Leetcode/tree/master/0075-sort-colors) |
| [0088-merge-sorted-array](https://github.com/aryaaa324/Leetcode/tree/master/0088-merge-sorted-array) |
| [0151-reverse-words-in-a-string](https://github.com/aryaaa324/Leetcode/tree/master/0151-reverse-words-in-a-string) |
| [0189-rotate-array](https://github.com/aryaaa324/Leetcode/tree/master/0189-rotate-array) |
| [0283-move-zeroes](https://github.com/aryaaa324/Leetcode/tree/master/0283-move-zeroes) |
## Math
|  |
| ------- |
| [0013-roman-to-integer](https://github.com/aryaaa324/Leetcode/tree/master/0013-roman-to-integer) |
| [0048-rotate-image](https://github.com/aryaaa324/Leetcode/tree/master/0048-rotate-image) |
| [0189-rotate-array](https://github.com/aryaaa324/Leetcode/tree/master/0189-rotate-array) |
| [0268-missing-number](https://github.com/aryaaa324/Leetcode/tree/master/0268-missing-number) |
| [2032-largest-odd-number-in-string](https://github.com/aryaaa324/Leetcode/tree/master/2032-largest-odd-number-in-string) |
## Greedy
|  |
| ------- |
| [2032-largest-odd-number-in-string](https://github.com/aryaaa324/Leetcode/tree/master/2032-largest-odd-number-in-string) |
## Trie
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/aryaaa324/Leetcode/tree/master/0014-longest-common-prefix) |
## String Matching
|  |
| ------- |
| [0812-rotate-string](https://github.com/aryaaa324/Leetcode/tree/master/0812-rotate-string) |
## Sorting
|  |
| ------- |
| [0015-3sum](https://github.com/aryaaa324/Leetcode/tree/master/0015-3sum) |
| [0075-sort-colors](https://github.com/aryaaa324/Leetcode/tree/master/0075-sort-colors) |
| [0088-merge-sorted-array](https://github.com/aryaaa324/Leetcode/tree/master/0088-merge-sorted-array) |
| [0169-majority-element](https://github.com/aryaaa324/Leetcode/tree/master/0169-majority-element) |
| [0242-valid-anagram](https://github.com/aryaaa324/Leetcode/tree/master/0242-valid-anagram) |
| [0268-missing-number](https://github.com/aryaaa324/Leetcode/tree/master/0268-missing-number) |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
## Heap (Priority Queue)
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
## Bucket Sort
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
## Counting
|  |
| ------- |
| [0169-majority-element](https://github.com/aryaaa324/Leetcode/tree/master/0169-majority-element) |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [1890-sum-of-beauty-of-all-substrings](https://github.com/aryaaa324/Leetcode/tree/master/1890-sum-of-beauty-of-all-substrings) |
## Dynamic Programming
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/aryaaa324/Leetcode/tree/master/0005-longest-palindromic-substring) |
| [0053-maximum-subarray](https://github.com/aryaaa324/Leetcode/tree/master/0053-maximum-subarray) |
| [0118-pascals-triangle](https://github.com/aryaaa324/Leetcode/tree/master/0118-pascals-triangle) |
| [0121-best-time-to-buy-and-sell-stock](https://github.com/aryaaa324/Leetcode/tree/master/0121-best-time-to-buy-and-sell-stock) |
| [0152-maximum-product-subarray](https://github.com/aryaaa324/Leetcode/tree/master/0152-maximum-product-subarray) |
## Binary Search
|  |
| ------- |
| [0035-search-insert-position](https://github.com/aryaaa324/Leetcode/tree/master/0035-search-insert-position) |
| [0268-missing-number](https://github.com/aryaaa324/Leetcode/tree/master/0268-missing-number) |
| [0540-single-element-in-a-sorted-array](https://github.com/aryaaa324/Leetcode/tree/master/0540-single-element-in-a-sorted-array) |
| [0792-binary-search](https://github.com/aryaaa324/Leetcode/tree/master/0792-binary-search) |
## Bit Manipulation
|  |
| ------- |
| [0136-single-number](https://github.com/aryaaa324/Leetcode/tree/master/0136-single-number) |
| [0268-missing-number](https://github.com/aryaaa324/Leetcode/tree/master/0268-missing-number) |
## Divide and Conquer
|  |
| ------- |
| [0053-maximum-subarray](https://github.com/aryaaa324/Leetcode/tree/master/0053-maximum-subarray) |
| [0169-majority-element](https://github.com/aryaaa324/Leetcode/tree/master/0169-majority-element) |
## Matrix
|  |
| ------- |
| [0048-rotate-image](https://github.com/aryaaa324/Leetcode/tree/master/0048-rotate-image) |
| [0054-spiral-matrix](https://github.com/aryaaa324/Leetcode/tree/master/0054-spiral-matrix) |
| [0073-set-matrix-zeroes](https://github.com/aryaaa324/Leetcode/tree/master/0073-set-matrix-zeroes) |
## Simulation
|  |
| ------- |
| [0054-spiral-matrix](https://github.com/aryaaa324/Leetcode/tree/master/0054-spiral-matrix) |
## Prefix Sum
|  |
| ------- |
| [0560-subarray-sum-equals-k](https://github.com/aryaaa324/Leetcode/tree/master/0560-subarray-sum-equals-k) |
<!---LeetCode Topics End-->
