# Linked List Data Structure

A linked list is a linear data structure where elements, called nodes, are connected by pointers. Each node contains two components:
- **Data**: The value stored in the node.
- **Link Pointer**: A reference to the next node in the sequence.

---

## Characteristics
- **Dynamic Size**: Can grow or shrink at runtime.
- **Efficient Insertions/Deletions**: Performed in constant time if the pointer to the node is known.
- **Non-contiguous Memory**: Nodes are not stored in contiguous memory locations.
- **Traversal**: Requires sequential access, starting from the head node.

---

## Types of Linked Lists
1. **Singly Linked List**:
   - Each node has one pointer pointing to the next node.
   - Last node points to `null`.
   - Example: `A -> B -> C -> null`

2. **Doubly Linked List**:
   - Each node has two pointers: one pointing to the next node and the other pointing to the previous node.
   - Example: `null <- A <-> B <-> C -> null`

3. **Circular Linked List**:
   - The last node points back to the first node, forming a circle.
   - Can be singly or doubly linked.
   - Example (Singly): `A -> B -> C -> A`

4. **Circular Doubly Linked List**:
   - Combines features of both circular and doubly linked lists.
   - Example: `A <-> B <-> C <-> A`

---

## Real-World Examples
- Music playlists (next and previous songs).
- Navigation systems (circular route tracking).
- Image viewer (next and previous images).

---

## Basic Operations
1. **Traversal**:
   - Visit each node in the linked list.
2. **Insertion**:
   - **At Head**: Add a new node at the beginning of the list.
   - **At Last Node**: Add a new node at the end of the list.
   - **At Random Position**: Add a new node at a specific position in the list.
3. **Deletion**:
   - **At Head**: Remove the first node of the list.
   - **At Last Node**: Remove the last node of the list.
   - **At Random Position**: Remove a node from a specific position in the list.
4. **Search**:
   - Find a node containing a specific value.
5. **Update**:
   - Modify the value of a node.

---

## Implementation

- [See the implementation of singly linked list in C](./linkedList.c)
-  Visualization of different types of linked lists:
   - Singly linked list:

     ![singly linked list](https://media.geeksforgeeks.org/wp-content/uploads/singly-linkedlist.png)

   - Doubly linked list:

     ![Doubly Linked List](https://media.geeksforgeeks.org/wp-content/uploads/20240223174514/Doubly-Linked-List-in-Data-Structure.webp)

   - Circular linked list:

     ![Circular Linked List](https://th.bing.com/th/id/R.f6e11ef242b3fb956cb1ebb0e8917daf?rik=qV7XfRPI%2btFC1w&riu=http%3a%2f%2fwww.btechsmartclass.com%2fdata_structures%2fds_images%2fCircular_Linked_List_Example.png&ehk=MeeU45UpPgBK3Uj6QDdhhCPD9JbnfBjO48NcVf0G3Rk%3d&risl=&pid=ImgRaw&r=0)     

---

## Advantages
- **Dynamic Memory Usage**: Efficient for unpredictable sizes.
- **Efficient Insertions/Deletions**: Especially in scenarios where array resizing is costly.

---

## Disadvantages
- **Sequential Access**: Slower than arrays for random access.
- **Extra Memory Usage**: Requires additional storage for pointers.
- **Complexity in Operations**: Implementation and debugging can be more challenging.

---

## Applications
- Dynamic memory allocation.
- Implementation of stacks and queues.
- Graph adjacency lists.
- Undo functionality in editors.
- Hash table chaining.

---

## Complexity Analysis
| Operation                 | Singly Linked List | Doubly Linked List | Circular Linked List |
|---------------------------|--------------------|--------------------|-----------------------|
| Insertion (Head)          | O(1)               | O(1)               | O(1)                 |
| Insertion (Tail)          | O(n)               | O(1)               | O(1)                 |
| Insertion (Random)        | O(n)               | O(n)               | O(n)                 |
| Deletion (Head)           | O(1)               | O(1)               | O(1)                 |
| Deletion (Tail)           | O(n)               | O(1)               | O(n)                 |
| Deletion (Random)         | O(n)               | O(n)               | O(n)                 |
| Search                    | O(n)               | O(n)               | O(n)                 |

---

## Summary

Linked lists are a versatile data structure that provide dynamic memory allocation and efficient insertions/deletions. However, they require additional memory for pointers and are less efficient for random access compared to arrays. Understanding linked lists is fundamental for mastering advanced data structures and algorithms.
