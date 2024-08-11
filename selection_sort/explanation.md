## Algorithm Explanation

### The selectionSort method implements the following steps:

    -Iterate through the array from index 0 to n-1 (where n is the array size).
    -For each iteration i, find the minimum element in the subarray from index i to n-1.
    -Swap the minimum element with the element at index i.

## Time Complexity

### The time complexity of Selection Sort is O(n^2), where n is the number of elements in the array. This is because:

    The outer loop runs n times
    The inner loop runs (n-1) times for the first iteration, (n-2) times for the second iteration, and so on
    Space Complexity
    The space complexity is O(1) as the sorting is done in-place, requiring only a constant amount of additional memory.