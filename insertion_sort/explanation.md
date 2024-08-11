# Algorithm Explanation

## The insertionSort function implements the following steps:

    -Start from the second element (index 1) to the last element of the array.
    -For each element (let's call it key):
    -Compare it with the elements before it.
    -Shift the larger elements one position ahead.
    -Insert the key element in its correct position.

## Time Complexity

Worst-case and Average-case time complexity: O(n^2), where n is the number of elements in the array.
Best-case time complexity: O(n), which occurs when the array is already sorted.

## Space Complexity

The space complexity is O(1) as the sorting is done in-place, requiring only a constant amount of additional memory.