# Stack Data Structure

A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle, where the last element added to the stack is the first one to be removed.

## Characteristics
- **LIFO Order**: Elements are added and removed from the same end.
- **Dynamic Size**: Can grow or shrink dynamically depending on the operations performed.
- **Operations**: Supports key operations like push, pop, peek, and isEmpty.

## Real-World Examples
- Undo functionality in text editors.
- Browser backtracking (back and forward navigation).
- Expression evaluation and syntax parsing.
- Call stack in programming languages.

## Basic Operations

### 1. `push(x)`
Adds an element `x` to the top of the stack.

### 2. `pop()`
Removes and returns the top element of the stack. Throws an error if the stack is empty.

### 3. `peek()` or `top()`
Returns the top element of the stack without removing it.

### 4. `isEmpty()`
Returns `true` if the stack is empty; otherwise, returns `false`.

### 5. `size()`
Returns the number of elements in the stack.

## Implementation
- [See Array based(static) stack implementation](./Stack(static).c)
- [See dynamic stack implementation with the help of linked list](./Stack(dynamic).c)
- Visualization of a stack:<br />

  <img src="https://files.codingninjas.in/article_images/stack-in-c-stl-0-1635236798.jpg" alt="stack visualization" width="200" height="250">
  
## Advantages
- Simple and easy to implement.
- Efficient for managing function calls and recursive algorithms.
- Suitable for scenarios requiring reversal of data.

## Disadvantages
- Limited access: Only the top element can be accessed.
- Fixed size if implemented using static arrays.

## Applications
1. **Expression Evaluation**:
   - Postfix (Reverse Polish Notation) and Prefix evaluation.
2. **Parsing**:
   - Balancing parentheses and syntax parsing.
3. **Backtracking**:
   - Navigating through states like in mazes, puzzles, or undo mechanisms.
4. **Function Call Management**:
   - Managing function calls using the call stack.

## Complexity Analysis
| Operation | Time Complexity |
|-----------|-----------------|
| Push      | O(1)            |
| Pop       | O(1)            |
| Peek      | O(1)            |
| isEmpty   | O(1)            |
| isFull    | O(1)            |

## Summary
A **stack** is an essential data structure with numerous applications in programming and real-world scenarios. Its simplicity and efficiency make it a foundational tool for solving a variety of computational problems.
