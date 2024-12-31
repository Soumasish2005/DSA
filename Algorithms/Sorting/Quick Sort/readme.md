# Quick Sort Algorithm

Quick Sort is a highly efficient sorting algorithm that utilizes a divide-and-conquer strategy. Below is an overview of its statistics, advantages, disadvantages, and optimal use cases.

---

## Algorithm Statistics

### **Time Complexity**
| Case          | Complexity |
|---------------|------------|
| Best Case     | O(n log n)       |
| Average Case  | O(n log n)      |
| Worst Case    | O(n²)      |

### **Space Complexity**
- **Auxiliary Space**: O(1)

### **Stability**
- **Stable**: No, it does not maintain the relative order of equal elements.
- **In-place**: Yes, it does not require any extra space proportional to the input size.

---

## **Algorithm**
- **Input**: List of int (L)<L<sub>1</sub>,L<sub>2</sub>,L<sub>3</sub>,...,L<sub>n</sub>>
- **Output**:  List of int (L')<L<sub>1</sub>',L<sub>2</sub>',L<sub>3</sub>',...,L<sub>n</sub>'> where L' is a permutation of L and L<sub>i</sub> <= L<sub>i+1</sub> ∀ i = 1,2,3,...,n-1.
- **Steps/Pseudocode**:
  ```text
  function quickSort(arr, low, high)
    if ( low < high )
        pivotIndex = partition(arr, low, high)
        quickSort(arr, low, pivotIndex - 1)  // Sort left partition
        quickSort(arr, pivotIndex + 1, high) // Sort right partition

  function partition(arr, low, high)
      pivot = arr[high]  // Choose the last element as pivot
      i = low - 1
      FOR ( j in low to high - 1 )
          IF ( arr[j] < pivot )
              i += 1
              swap(arr[i], arr[j])
      swap(arr[i + 1], arr[high])
      return i + 1
  ```

---

## **Representation & Implementation**
  - Visual Representation<br />![qSort visualise](https://fullyunderstood.com/wp-content/uploads/2019/09/quicksort.gif)<br />
  - [View Quick Sort implementation in C code](./quickSort.c)

---

## Advantages

1. **Efficient on Average**: Quick Sort is faster in practice compared to many other algorithms, such as Merge Sort or Bubble Sort, due to its low overhead.
2. **In-place Sorting**: Requires minimal additional memory as it sorts in place.
3. **Divide-and-Conquer Approach**: Easy to implement recursively, which simplifies the problem-solving process.
4. **Cache-friendly**: Quick Sort's partitioning strategy leads to better cache performance. Hence works better on a multi-threaded CPU system.
5. **Tail Call Optimization**: Can be optimized further using tail-recursive calls, reducing stack depth.

---

## Disadvantages

1. **Worst-case Performance**: Quick Sort can degrade to O(n²) if the pivot is poorly chosen.
2. **Unstable Sort**: Equal elements may not retain their original order.
3. **Recursive Nature**: Excessive recursion may lead to stack overflow for large input sizes.
4. **Dependency on Pivot Selection**: Performance heavily relies on a good pivot choice.

---

## Optimal Use Cases

1. **Large Datasets**: Ideal for sorting large datasets due to its average-case efficiency.
2. **Arrays**: Works better on arrays compared to linked lists, as random access is fast.
3. **Internal Sorting**: Suitable for sorting in-memory data.
4. **When Memory is a Constraint**: Performs well with limited auxiliary memory compared to Merge Sort.

---

## Practical Tips for Using Quick Sort

- **Pivot Selection**: Use strategies like Median-of-Three or Randomized Pivot to avoid worst-case scenarios.
- **Hybrid Approaches**: Combine Quick Sort with Insertion Sort for small subarrays (e.g., less than 10 elements) to improve performance.
- **Tail Recursion**: Optimize recursive calls to prevent stack overflow.
- **Parallelization**: Quick Sort can be parallelized for even better performance on large datasets.

---

## Conclusion

Quick Sort is a powerful and versatile sorting algorithm when used in the right scenarios with proper optimizations.
