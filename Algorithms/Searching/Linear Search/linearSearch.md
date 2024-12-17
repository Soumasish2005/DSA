# Linear Search Algorithm - Statistics, Advantages, Disadvantages, and Use Cases

---

## Introduction
**Linear Search** (or Sequential Search) is one of the simplest searching algorithms. It sequentially checks each element of a list or array until the target element is found or the entire structure is traversed.

---

## Algorithm
### Pseudocode
```plaintext
LinearSearch(arr, target):
    for i = 0 to length(arr) - 1:
        if arr[i] == target:
            return i  // Index where target is found
    return -1  // Target not found
```

---

## Implementation
   [View Linear Search Implementation](./linearSearch.c)


---

## Time Complexity
| **Case**       | **Time Complexity** |
|----------------|---------------------|
| Best Case      | O(1)                |
| Average Case   | O(n)                |
| Worst Case     | O(n)                |

- **n**: Size of the input array.
- **Best Case**: The element is found at the first position.
- **Worst Case**: The element is at the last position or not in the array.

---

## Space Complexity
- **O(1)** (Constant Space)
    - No additional data structures are used, and the algorithm operates in place.

---

## Advantages
1. **Simple to Implement**: The algorithm is easy to understand and implement.
2. **Works on Any Data Structure**: Linear search can be used on arrays, linked lists, or any sequential collection.
3. **No Preprocessing Required**: It doesn't require the data to be sorted.
4. **Useful for Small Datasets**: Performs well for small datasets where overhead is minimal.
5. **Handles Unsorted Data**: Can search through unsorted collections.

---

## Disadvantages
1. **Inefficient for Large Datasets**: For large datasets, linear search is much slower compared to other algorithms like binary search.
2. **High Time Complexity**: In the worst case, the algorithm requires O(n) comparisons.
3. **Lacks Optimization**: No way to skip elements or reduce the number of comparisons.
4. **Not Suitable for Sorted Data**: Other algorithms like binary search outperform linear search for sorted collections.

---

## Optimal Use Cases
Linear Search is optimal in the following scenarios:

1. **Small Datasets**: When the collection size is small, the overhead of more complex algorithms isn't justified.
2. **Unsorted Data**: Linear search works seamlessly when the data is unordered.
3. **Searching in Linked Lists**: Linear search is often used in linked lists where elements are not directly accessible by index.
4. **Sparse Data or Specific Conditions**: If you are searching for a value based on custom criteria that other algorithms cannot handle.
5. **When Preprocessing is Prohibitive**: When sorting data or creating indices (e.g., for binary search) is not feasible.

---

## Comparison with Other Search Algorithms
| **Algorithm**      | **Time Complexity (Worst Case)** | **Optimal for**           |
|---------------------|----------------------------------|---------------------------|
| **Linear Search**   | O(n)                            | Small/Unsorted Data       |
| **Binary Search**   | O(log n)                        | Sorted Arrays             |
| **Hashing**         | O(1) (Average), O(n) (Worst)    | Fast Lookups in Hash Maps |

---

## Summary Table
| **Characteristic**       | **Details**                   |
|--------------------------|-------------------------------|
| **Algorithm Type**       | Search Algorithm              |
| **Time Complexity**      | O(n)                         |
| **Space Complexity**     | O(1)                         |
| **Best for**             | Small or Unsorted Data        |
| **Preprocessing Needed** | No                           |
| **Data Structures**      | Arrays, Lists, Sequential DS |

---

## Conclusion
Linear Search is a simple and versatile search algorithm suitable for small or unsorted datasets. However, it is inefficient for large datasets, where alternative algorithms like binary search or hash-based lookups are preferred. It remains a fundamental algorithm for understanding basic searching techniques.
