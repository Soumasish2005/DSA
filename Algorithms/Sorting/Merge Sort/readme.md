# Merge Sort Algorithm

## Overview
Merge Sort is a popular divide-and-conquer sorting algorithm that splits the input array into smaller subarrays, sorts them, and then merges them back together in sorted order.

---

## Algorithm Statistics
- **Algorithm Type:** Divide and Conquer
- ### **Time Complexity**
    | Case          | Complexity |
    |---------------|------------|
    | Best Case     | O(n logn)       |
    | Average Case  | O(n logn)      |
    | Worst Case    | O(n logn)      |
- **Space Complexity:** O(n) ( NOT in-place algorithm )
- **Stable:** Yes (preserves the order of equal elements)
- **Recursive or Iterative:** Primarily implemented recursively

---

## **Algorithm**
- **Input**: List of int (L)<L<sub>1</sub>,L<sub>2</sub>,L<sub>3</sub>,...,L<sub>n</sub>>
- **Output**:  List of int (L')<L<sub>1</sub>',L<sub>2</sub>',L<sub>3</sub>',...,L<sub>n</sub>'> where L' is a permutation of L and L<sub>i</sub> <= L<sub>i+1</sub> ∀ i = 1,2,3,...,n-1.
- **Steps**:

    1. Divide the array into two halves until each subarray contains only one element.
    2. Recursively sort each half.
    3. Merge the sorted halves back together into a single sorted array.
    
- **Pseudocode**:
```text
MERGE_SORT(arr[], int Left, int Right):
    #Declare mid variable and initialize it to 0
    IF (Left < Right)
        Mid = Floor( (Left + Right)/2 )
        MERGE_SORT(arr[], Left, Mid)
        MERGE_SORT(arr[],Mid+1,Right)
    MERGE(arr[], Left, Mid, Right)

MERGE(left, mid, right):
    n1 = Mid - Left + 1
    n2 = Right - Mid

    Create leftArr[] array of size n1
    Create right[] array of size n2

    FOR i in 1 to n1
        leftArr[i] = arr[left + i - 1]

    FOR j in 1 to n2
        rightArr[i] = arr[mid + i]

    i=1,j=1,k=left

    while ( i <= n1 AND j <= n2 )
        if (leftArr[i] <= rightArr[j]
            arr[k] = leftArr[i]
            i = i+1
        else:
            arr[k] = rightArr[i]
            j = j+1
        k++
    
    while ( i <= n1 )
        arr[k] = leftArr[i]
        i = i + 1
        k = k + 1

    while ( j <= n2 )
        arr[k] = rightArr[i]
        j = j + 1
        k = k + 1

```

---

## **Representation & Implementation**
  - Visual Representation<br />![mergeSort](https://blog.javascripttoday.com/images/merge-sort.gif)<br />
  - [View merge Sort implementation in C code](./MergeSort.c)

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

