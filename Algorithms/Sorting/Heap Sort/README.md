# Heap Sort Algorithm

## Overview
Heap Sort is a comparison-based sorting technique based on a binary heap data structure. It is an in-place sorting algorithm but is not stable. The algorithm builds a max heap (or min heap) and then iteratively extracts the largest (or smallest) element to sort the array.

## Algorithm Steps
1. Build a max heap from the input data.
2. Extract the maximum element (root of the heap) and swap it with the last element of the heap.
3. Reduce the size of the heap by one and heapify the root element.
4. Repeat steps 2 and 3 until the heap size is 1.

---

## Statistics

### Time Complexity
- **Best Case:** \( O(n \log n) \)
- **Average Case:** \( O(n \log n) \)
- **Worst Case:** \( O(n \log n) \)

### Space Complexity
- \( O(1) \): Heap Sort is an in-place algorithm.

### Stability
- Heap Sort is **not stable** because the order of equal elements may not be preserved during the heapify operations.

---

## Advantages

1. **Time Efficiency:** Heap Sort has a guaranteed time complexity of \( O(n \log n) \) for all cases.
2. **Space Efficiency:** The algorithm is in-place, requiring no additional memory.
3. **Deterministic Behavior:** Unlike Quick Sort, Heap Sort does not rely on pivot selection, making it less prone to performance degradation due to poor pivot choices.

---

## Disadvantages

1. **Not Stable:** Equal elements may not retain their relative order.
2. **Cache Performance:** Heap Sort often has poor cache performance due to irregular memory access patterns.
3. **Complex Implementation:** Building and maintaining the heap structure is more complex compared to simpler sorting algorithms like Insertion Sort.

---

## Optimal Use Cases

1. **Fixed Memory Environments:** When memory usage is a concern, Heap Sort's in-place nature is advantageous.
2. **Guaranteed Performance:** In scenarios where \( O(n \log n) \) performance is required irrespective of input data distribution.
3. **Embedded Systems:** Where deterministic time complexity is more critical than average performance.

---

## Example Code (Python)
```python
def heapify(arr, n, i):
    largest = i  # Initialize largest as root
    left = 2 * i + 1  # Left child
    right = 2 * i + 2  # Right child

    # Check if left child exists and is greater than root
    if left < n and arr[largest] < arr[left]:
        largest = left

    # Check if right child exists and is greater than root
    if right < n and arr[largest] < arr[right]:
        largest = right

    # Change root if needed
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]  # Swap
        heapify(arr, n, largest)  # Recursively heapify the affected subtree

def heap_sort(arr):
    n = len(arr)

    # Build a max heap
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    # Extract elements one by one
    for i in range(n - 1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]  # Swap
        heapify(arr, i, 0)

# Example Usage
array = [4, 10, 3, 5, 1]
heap_sort(array)
print("Sorted array:", array)
