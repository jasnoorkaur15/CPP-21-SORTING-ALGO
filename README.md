# CPP-21-SORTING-ALGO
## Aim

To implement and understand Selection Sort, Insertion Sort, and Quick Sort in C++ and analyze their working, complexity, and differences.

## Objective

Learn different sorting algorithms.

Understand algorithm design techniques (comparison-based sorting).

Compare performance and use cases of each sorting algorithm.

Implement sorting algorithms in C++ with arrays and vectors.

## Theory
### Selection Sort

Concept: Selection Sort finds the minimum element from the unsorted part of the array and swaps it with the first unsorted element.

Complexity:

Worst-case: O(n²)

Best-case: O(n²)

Use case: Small arrays or when memory writes are costly (fewer swaps).

### Insertion Sort

Concept: Builds a sorted portion of the array one element at a time by inserting each new element at its correct position.

Complexity:

Worst-case: O(n²)

Best-case (already sorted): O(n)

Use case: Small or nearly sorted arrays.

### Quick Sort

Concept: A divide-and-conquer algorithm.

Pick a pivot.

Partition array so elements smaller than pivot go left, larger go right.

Recursively sort left and right subarrays.

Complexity:

Average: O(n log n)

Worst-case: O(n²)

Use case: Large arrays, general-purpose sorting.

## Comparison Table
| Feature              | Selection Sort  | Insertion Sort  | Quick Sort       |
| -------------------- | --------------- | --------------- | ---------------- |
| Method               | Selection-based | Insertion-based | Divide & Conquer |
| Complexity (Worst)   | O(n²)           | O(n²)           | O(n²)            |
| Complexity (Average) | O(n²)           | O(n²)           | O(n log n)       |
| Space                | In-place        | In-place        | In-place         |
| Stability            | No              | Yes             | No (standard)    |
| Best use case        | Small arrays    | Nearly sorted   | Large arrays     |

## Algorithm

### Selection Sort

Loop through array from start to end.

Find the minimum element in unsorted part.

Swap it with the first unsorted element.

Repeat until array is sorted.

### Insertion Sort

Start from the second element.

Compare with sorted portion and insert at the correct position.

Repeat for all elements until the array is sorted.

### Quick Sort

Choose a pivot (usually last element).

Partition array so that elements < pivot go left, > pivot go right.

Recursively apply Quick Sort to left and right subarrays.

## Program Description

Selection Sort: Implemented using pointers and loops. Swaps minimum elements sequentially.

Insertion Sort: Takes an array, iterates through elements, and inserts them in the sorted portion.

Quick Sort: Uses recursion, partitioning, and swapping to sort arrays efficiently.

## Concepts Used

Arrays and Vectors in C++.

Pointers (Selection Sort version).

Recursion (Quick Sort).

Loops and Conditional Statements.

Operator Overloading and Classes (from previous OOP programs).

## Conclusion

Sorting algorithms are fundamental in programming and data manipulation.

Selection Sort is simple but inefficient for large arrays.

Insertion Sort is efficient for nearly sorted data.

Quick Sort is fast for large datasets due to its divide-and-conquer approach.

Understanding these algorithms improves problem-solving and algorithmic thinking.
