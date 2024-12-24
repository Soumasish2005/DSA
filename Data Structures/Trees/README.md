# Tree Data Structure

A **tree** is a non-linear data structure consisting of nodes, where each node has a value and a list of child nodes. It is used to represent hierarchical relationships between elements.

---

## Characteristics and Terminologies
1. **Root Node**: The topmost node in a tree.
2. **Parent Node**: A node that has child nodes.
3. **Child Node**: A node that is derived from a parent node.
4. **Leaf Node**: A node with no children.
5. **Edge**: A connection between one node and another.
6. **Depth**: The number of edges from the root to a specific node.
7. **Height**: The number of edges on the longest path from a node to a leaf.
8. **Degree**: The number of children a node has.
9. **Subtree**: A tree formed by any node and its descendants.

---

## Types of Trees
1. **Binary Tree**: A tree where each node has at most two children (left and right).
   - **Full Binary Tree**: Every node has 0 or 2 children.
   - **Complete Binary Tree**: All levels are filled except possibly the last, which is filled from left to right.
   - **Perfect Binary Tree**: All internal nodes have two children, and all leaf nodes are at the same level.
2. **Binary Search Tree (BST)**: A binary tree where the left child is smaller than the parent, and the right child is greater.
3. **AVL Tree**: A self-balancing BST where the height difference between left and right subtrees is at most 1.
4. **Red-Black Tree**: A self-balancing BST with specific coloring and balancing rules.
5. **B-Tree**: A self-balancing tree used for database and file systems.
6. **N-ary Tree**: A tree where each node can have at most N children.
7. **Trie**: A tree used for efficient retrieval of strings.
8. **Heap**: A tree used in heap sort and priority queues.
   - **Max-Heap**: Parent node is greater than its children.
   - **Min-Heap**: Parent node is smaller than its children.
9. **Threaded Binary Tree**: A binary tree in which null pointers are replaced by pointers to the in-order predecessor or successor. This facilitates in-order traversal without using recursion or a stack.
10. **Threaded Binary Search Tree**: A **Threaded Binary Search Tree (TBST)** is a variation of a binary search tree. In a TBST:
    - Threads replace NULL pointers in the tree to point to the in-order predecessor or successor.
    - Traversal is more efficient since it eliminates the need for stack or recursion.

---

## Real-World Examples
- **File Systems**: Represent directories and files.
- **HTML/DOM Trees**: Represent structure of web pages.
- **Organizational Hierarchies**: Represent management levels.
- **Trie**: Represent dictionaries for autocomplete.

---

## Basic Operations
1. **Insertion**: Adding a new node.
2. **Deletion**: Removing a node.
3. **Traversal**: Visiting nodes in a specific order.
   - Preorder: Root, Left, Right
   - Inorder: Left, Root, Right
       - ***Note*** : An inorder traversal gives sorted sequence in binary search trees.
   - Postorder: Left, Right, Root
   - Level Order: Breadth-first traversal
4. **Searching**: Finding a specific node.
5. **Height Calculation**: Finding the longest path from root to leaf.
6. **Finding Ancestors/Descendants**: Retrieving parent or child nodes.

---

## Implementation
- [See implementation of binary search tree in C](./bst.c)
- [See implementation of threaded binary search tree in C](./threaded_bst.c)

---

## Advantages
1. Reflects hierarchical relationships naturally.
2. Supports efficient operations like searching, insertion, and deletion.
3. Can be easily implemented using recursion.

---

## Disadvantages
1. Complex to manage due to pointers.
2. Requires careful balancing for efficient operations.
3. Memory overhead for storing pointers.

---

## Applications
1. **Search Operations**: BST for efficient searching.
2. **Priority Queues**: Heap for managing priorities.
3. **Routing Algorithms**: Tries in networking.
4. **Expression Parsing**: Expression trees for arithmetic evaluations.
5. **Databases**: B-trees for indexing.

---

## Complexity Analysis
| Operation         | Binary Tree | Binary Search Tree | Balanced BST | Threaded BST |
|-------------------|-------------|--------------------|--------------|--------------|
| Insertion         | O(n)       | O(h)              | O(log n)     | O(log n)     |
| Deletion          | O(n)       | O(h)              | O(log n)     | O(log n)     |
| Search            | O(n)       | O(h)              | O(log n)     | O(log n)     |
| Traversal         | O(n)       | O(n)              | O(n)         | O(n)         |

- `h`: Height of the tree (can be O(log n) for balanced trees, O(n) for skewed trees).

---

## Summary
Trees are fundamental data structures that support hierarchical representation and efficient algorithms. Understanding their types, operations, and applications is crucial for solving complex computational problems efficiently.
