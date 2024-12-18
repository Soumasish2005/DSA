# Bubble Sort Algorithm

Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process continues until the list is sorted.

---

## **Algorithm Statistics**

### **Time Complexity**
| Case          | Complexity |
|---------------|------------|
| Best Case     | O(n)       |
| Average Case  | O(n²)      |
| Worst Case    | O(n²)      |

### **Space Complexity**
- **Auxiliary Space**: O(1) (In-place sorting algorithm)

### **Stability**
- **Stable**: Yes, it maintains the relative order of equal elements.

---

## **Advantages**
1. **Simplicity**: Easy to understand and implement.
2. **Stable**: Maintains the relative order of equal elements.
3. **In-place Sorting**: Does not require additional memory beyond the input list.

---

## **Disadvantages**
1. **Inefficient**: Performs poorly on large datasets due to O(n²) time complexity in the average and worst cases.
2. **Redundant Comparisons**: Even for partially sorted lists, it may still perform unnecessary comparisons.

---

## **Optimal Use Cases**
- **Small Datasets**: Works well for datasets with a small number of elements.
- **Nearly Sorted Data**: Performs optimally when the input list is already or nearly sorted, achieving O(n) in the best case.
- **Educational Purposes**: Useful for teaching the basics of sorting algorithms.
