# Selection Sort Algorithm - Overview and Statistics

## Algorithm Overview
Selection Sort is a comparison-based sorting algorithm. It divides the array into two parts: the sorted part and the unsorted part. The algorithm repeatedly selects the smallest (or largest) element from the unsorted part and moves it to the sorted part.

---



## Key Statistics

| **Metric**              | **Value**                         |
|--------------------------|------------------------------------|
| **Time Complexity**      |                                   |
| - Best Case             | O(n²)                            |
| - Average Case          | O(n²)                            |
| - Worst Case            | O(n²)                            |
| **Space Complexity**     | O(1) (In-place sorting)          |
| **Stable**            | No                               |

---

## Algorithm
- **Input**: List of int (L)<L<sub>1</sub>,L<sub>2</sub>,L<sub>3</sub>,...,L<sub>n</sub>>
- **Output**:  List of int (L')<L<sub>1</sub>',L<sub>2</sub>',L<sub>3</sub>',...,L<sub>n</sub>'> where L' is a permutation of L and L<sub>i</sub> <= L<sub>i+1</sub> ∀ i = 1,2,3,...,n-1.
- **Steps/Pseudocode**:
    ```text
    for i = 1 to n-1:
        min_index = i
        for j = i+1 to n:
            if (array[j] < array[min_index])
                min_index = j
        if ( i != min_index )
            Swap(array[i], array[min_index])
    ```
---

**Representation & Implementation**
  - Visual Representation<br />![https://markbowman.org/LCC/SortSelection.gif](https://2.bp.blogspot.com/-BstD1kiDAJE/WCREElHbqhI/AAAAAAAAF2Q/smmmK2nntsIK-YKDuJeFxPi6mVYC2zyQQCLcB/s1600/selection%2Bsort%2Bblog%2Bjonarendra.gif)<br />
  - [View selection Sort implementation in C code](./SelectionSort.c)

---
## Advantages
1. Simple and easy to implement.
2. Performs well on small datasets.
3. Does not require additional memory as it is in-place.

---

## Disadvantages
1. Inefficient for large datasets due to O(n²) time complexity.
2. Not a stable sorting algorithm (relative order of equal elements is not maintained).
3. Comparatively slower than other algorithms like Merge Sort and Quick Sort.

---

## Optimal Use Cases
- **Small datasets**: Performs reasonably well for small arrays.
- **Memory-constrained environments**: Requires constant O(1) space.
- **Situations with minimal swapping overhead**: As the number of swaps is low, it might be preferable when swaps are expensive.
