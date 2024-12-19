# Merge Sort Algorithm

## Overview
Merge Sort is a popular divide-and-conquer sorting algorithm that splits the input array into smaller subarrays, sorts them, and then merges them back together in sorted order.

---

## Characteristics
- **Algorithm Type:** Divide and Conquer
- **Best Case Time Complexity:** O(n log n)
- **Average Case Time Complexity:** O(n log n)
- **Worst Case Time Complexity:** O(n log n)
- **Space Complexity:** O(n)
- **Stable:** Yes (preserves the order of equal elements)
- **Recursive or Iterative:** Primarily implemented recursively

---

## Steps of Merge Sort
1. Divide the array into two halves until each subarray contains only one element.
2. Recursively sort each half.
3. Merge the sorted halves back together into a single sorted array.

---

## Pseudocode
```
MERGE_SORT(array):
    if length of array <= 1:
        return array
    
    mid = length of array // 2
    left_half = array[0:mid]
    right_half = array[mid:]

    left_sorted = MERGE_SORT(left_half)
    right_sorted = MERGE_SORT(right_half)

    return MERGE(left_sorted, right_sorted)

MERGE(left, right):
    result = []
    while left is not empty and right is not empty:
        if left[0] <= right[0]:
            append left[0] to result
            remove left[0] from left
        else:
            append right[0] to result
            remove right[0] from right

    while left is not empty:
        append left[0] to result
        remove left[0] from left

    while right is not empty:
        append right[0] to result
        remove right[0] from right

    return result
```

---

## Advantages
1. **Consistent Time Complexity:** Performs consistently in O(n log n) for best, average, and worst cases.
2. **Stability:** Maintains the relative order of equal elements.
3. **Efficient for Linked Lists:** Performs well with linked lists due to efficient merging without random access.
4. **Parallelizability:** The divide-and-conquer approach allows for parallel processing.
5. **Works Well on Large Data:** Suitable for sorting large datasets that cannot fit entirely in memory (e.g., external sorting).

---

## Disadvantages
1. **Space Complexity:** Requires additional memory for temporary arrays, making it less efficient for large datasets.
2. **Recursive Overhead:** May lead to stack overflow for very large arrays unless implemented iteratively.
3. **Not Adaptive:** Does not adapt to partially sorted arrays to reduce sorting time.
4. **High Memory Usage for Arrays:** Significant memory overhead for in-memory sorting of large datasets.

---

## Optimal Use Cases
1. **Large Datasets in External Storage:** Merge Sort is ideal for datasets stored on external devices, as it works sequentially.
2. **Linked Lists:** Performs better than quicksort for sorting linked lists.
3. **Stable Sorting Requirements:** When maintaining the relative order of equal elements is crucial.
4. **Parallel Processing:** Applications that can leverage parallelism benefit from the divide-and-conquer approach of Merge Sort.
5. **Consistent Performance Needs:** Suitable when consistent performance is a priority, regardless of input distribution.

---

## Implementation
  [View mergeSort implementation](./MergeSort.c)
