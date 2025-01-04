# Insertion Sort Algorithm Statistics

## Overview
Insertion Sort is a simple and intuitive sorting algorithm. It builds the sorted array one item at a time, with the principle of placing each element in its appropriate position relative to the already sorted part of the array.

---

## Algorithm Statistics

### Time Complexity

| Case        | Time Complexity |
|-------------|-----------------|
| Best Case   | O(n)            |
| Average Case| O(n²)           |
| Worst Case  | O(n²)           |

- **Best Case:** When the input array is already sorted, only one comparison per element is needed.
- **Worst Case:** When the input array is sorted in reverse order, the maximum number of comparisons and shifts occur.

### Space Complexity
- **Auxiliary Space:** O(1) (in-place sorting)
### **Stability**
- **Stable**: Yes, it maintains the relative order of equal elements.

---

## Algorithm
- **Input**: List of int (L)<L<sub>1</sub>,L<sub>2</sub>,L<sub>3</sub>,...,L<sub>n</sub>>
- **Output**:  List of int (L')<L<sub>1</sub>',L<sub>2</sub>',L<sub>3</sub>',...,L<sub>n</sub>'> where L' is a permutation of L and L<sub>i</sub> <= L<sub>i+1</sub> ∀ i = 1,2,3,...,n-1.
- **Steps/Pseudocode**:
```text
    FOR i in 2 to n:
        key = arr[i]
        j = i - 1
        # Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        WHILE (j >= 0 and key < arr[j])
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr
```

---

## **Representation & Implementation**
  - Visual Representation<br />![insertionSort](https://www.doabledanny.com/static/92b034385c440e08bc8551c97df0a2e3/2.gif)<br />
  - [View insertion Sort implementation in C code](./insertionSort.c)

---

## Advantages
1. Simple to implement and understand.
2. Efficient for small data sets or nearly sorted arrays.
3. Stable sort (does not change the relative order of equal elements).
4. In-place sorting algorithm (requires no extra memory).

---

## Disadvantages
1. Inefficient for large data sets due to its O(n²) average and worst-case time complexity.
2. Performance degrades significantly as the size of the input grows.

---

## Optimal Use Cases
1. **Small data sets:** Insertion Sort performs exceptionally well for arrays with a small number of elements.
2. **Nearly sorted arrays:** It is very efficient when the input array is already sorted or nearly sorted.
3. **Online sorting:** Useful when new elements are continually added, and they need to be sorted on the fly.

---

## Example Analysis
### Input
```text
[5, 2, 9, 1, 5, 6]
```
### Output
```text
[1, 2, 5, 5, 6, 9]
```
**Step-by-Step Process:**
1. Consider the second element (2) and compare it with the first element (5). Place it before 5.
2. Move to the third element (9). It remains in place as it is larger than 5.
3. Process continues, shifting elements as necessary to maintain the sorted order.

---

## Conclusion
Insertion Sort is a fundamental algorithm that serves as a foundation for understanding more complex sorting techniques. While not suitable for large datasets, it is a go-to choice for scenarios involving small or nearly sorted arrays.
