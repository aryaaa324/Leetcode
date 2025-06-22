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
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/aryaaa324/Leetcode/tree/master/0001-two-sum) |
| [0205-isomorphic-strings](https://github.com/aryaaa324/Leetcode/tree/master/0205-isomorphic-strings) |
| [0242-valid-anagram](https://github.com/aryaaa324/Leetcode/tree/master/0242-valid-anagram) |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
## String
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/aryaaa324/Leetcode/tree/master/0014-longest-common-prefix) |
| [0151-reverse-words-in-a-string](https://github.com/aryaaa324/Leetcode/tree/master/0151-reverse-words-in-a-string) |
| [0205-isomorphic-strings](https://github.com/aryaaa324/Leetcode/tree/master/0205-isomorphic-strings) |
| [0242-valid-anagram](https://github.com/aryaaa324/Leetcode/tree/master/0242-valid-anagram) |
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
| [0812-rotate-string](https://github.com/aryaaa324/Leetcode/tree/master/0812-rotate-string) |
| [1078-remove-outermost-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1078-remove-outermost-parentheses) |
| [1737-maximum-nesting-depth-of-the-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1737-maximum-nesting-depth-of-the-parentheses) |
| [2032-largest-odd-number-in-string](https://github.com/aryaaa324/Leetcode/tree/master/2032-largest-odd-number-in-string) |
## Stack
|  |
| ------- |
| [1078-remove-outermost-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1078-remove-outermost-parentheses) |
| [1737-maximum-nesting-depth-of-the-parentheses](https://github.com/aryaaa324/Leetcode/tree/master/1737-maximum-nesting-depth-of-the-parentheses) |
## Two Pointers
|  |
| ------- |
| [0151-reverse-words-in-a-string](https://github.com/aryaaa324/Leetcode/tree/master/0151-reverse-words-in-a-string) |
## Math
|  |
| ------- |
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
| [0242-valid-anagram](https://github.com/aryaaa324/Leetcode/tree/master/0242-valid-anagram) |
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
| [0451-sort-characters-by-frequency](https://github.com/aryaaa324/Leetcode/tree/master/0451-sort-characters-by-frequency) |
<!---LeetCode Topics End-->
