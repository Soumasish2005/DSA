# Bubble Sort Algorithm

Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly travels through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process continues until the list is sorted.

---

## **Algorithm Statistics**

### **Time Complexity**
| Case          | Complexity |
|---------------|------------|
| Best Case     | O(n)       |
| Average Case  | O(n²)      |
| Worst Case    | O(n²)      |

### **Space Complexity**
- **Auxiliary Space**: O(1)

### **Stability**
- **Stable**: Yes, it maintains the relative order of equal elements.
- **In-place**: Yes, it does not require any extra space proportional to the input size.

---

## **Algorithm**
- **Input**: List of int (L)<L<sub>1</sub>,L<sub>2</sub>,L<sub>3</sub>,...,L<sub>n</sub>>
- **Output**:  List of int (L')<L<sub>1</sub>',L<sub>2</sub>',L<sub>3</sub>',...,L<sub>n</sub>'> where L' is a permutation of L and L<sub>i</sub> <= L<sub>i+1</sub> ∀ i = 1,2,3,...,n-1.
- **Steps/Pseudocode**:
  ```text
  FOR i=1 to n-1
  {
    FOR j=1 to n-i
    {
      IF ( L[j] > L[j+1] )
      {
        swap( L[j], L[j+1] )
      }
    }
  }
  ```
---

## **Representation & Implementation**
  - Visual Representation<br />![Visual Representation](https://i.pinimg.com/originals/92/b0/34/92b034385c440e08bc8551c97df0a2e3.gif)<br />
  - [View bubble Sort implementation in C code](./BubbleSort.c)

---

## **Advantages**
1. **Simplicity**: Easy to understand and implement.
2. **Stable**: Maintains the relative order of equal elements.
3. **In-place Sorting**: Does not require additional memory beyond the input list.

---

## **Disadvantages**
1. **Inefficient**: Performs poorly on large datasets due to O(n²) time complexity in the average and worst cases.
2. **Redundant Comparisons**: Even for partially sorted lists, it may still perform unnecessary comparisons. It can be optimized by introducing a swapped flag(for optimization check the code).

---

## **Optimal Use Cases**
- **Small Datasets**: Works well for datasets with a small number of elements.
- **Nearly Sorted Data**: Performs optimally when the input list is already or nearly sorted, achieving O(n) in the best case.
- **Educational Purposes**: Useful for teaching the basics of sorting algorithms.
