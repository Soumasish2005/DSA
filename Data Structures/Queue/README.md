# Queue Data Structure

A **queue** is a linear data structure that follows the **First In, First Out (FIFO)** principle. The element inserted first will be the first one to be removed, just like a queue in real life (e.g., people standing in line).

---

## Characteristics
1. **Linear Structure**: Elements are arranged sequentially.
2. **FIFO**: First element inserted is the first one to be removed.
3. **Two Ends**:
   - **Front**: Point of removal.
   - **Rear**: Point of insertion.
4. **Dynamic Size**: Can be implemented with arrays or linked lists.

---

## Real-World Examples
1. Printing jobs in a printer queue.
2. Call center systems where calls are attended in the order they are received.
3. Ticket booking systems.

---

## Basic Operations
1. **Enqueue**: Add an element to the rear of the queue.
2. **Dequeue**: Remove an element from the front of the queue.
3. **Peek/Front**: Retrieve the element at the front without removing it.
4. **IsEmpty**: Check if the queue is empty.
5. **Size**: Get the number of elements in the queue.

---

## Implementation
- [See array based Queue implementation](./linearQueue.c)
- [See Linked list based Queue implementation](./Queue(dynamic).c)
- [See circular Queue implementation](./circularQueue.c)
- Visualization of a linear queue:

  ![linearQueue](https://virtual-labs.github.io/exp-bfs-iiith/images/circular%20queue.gif)

- Visualization of a circular queue:

  ![circularQueue](https://velog.velcdn.com/images/llama/post/02da1f3c-fc3b-41d5-bc74-7c37da489b66/ezgif.com-gif-maker%20(5).gif)
  
---

## Differences Between Circular and Linear Queue
| Feature            | Linear Queue                    | Circular Queue                     |
|--------------------|----------------------------------|-------------------------------------|
| **Structure**      | Linear, one end for enqueue and the other for dequeue. | Circular, rear wraps around to the front. |
| **Space Utilization** | Can lead to unused spaces once the rear reaches the end. | Efficiently utilizes all available spaces. |
| **Overflow Condition** | Occurs when the rear reaches the end, even if space is available at the front. | Occurs only when the queue is truly full. |
| **Implementation Complexity** | Simpler to implement.                    | Slightly more complex due to wrapping logic. |
| **Use Case**       | Suitable for simple tasks with predictable queue sizes. | Ideal for systems requiring continuous, cyclic usage. |

---

## Advantages
### Linear Queue
- Easy to implement and understand.
- Suitable for small, simple applications where memory utilization is not a concern.

### Circular Queue
- Efficient memory utilization by reusing available spaces.
- Avoids the false overflow condition.
- Ideal for applications requiring continuous and cyclic data flow.
- Useful in BFS traversal of Graphs.

---

## Disadvantages
1. Fixed size in array implementation.
2. Overflow and underflow conditions in static implementations.
3. Inefficient memory use in array implementation when the queue is partially full.

---

## Applications
1. **CPU Scheduling**: Managing processes in a multi-tasking system.
2. **Data Buffering**: Streaming data, like in IO operations.
3. **Graph Traversal**: Breadth-First Search (BFS) uses queues.
4. **Resource Sharing**: Task scheduling in printers or servers.

---

## Complexity Analysis
| Operation   | Time Complexity |
|-------------|-----------------|
| Enqueue     | O(1)            |
| Dequeue     | O(1)            |
| Peek/Front  | O(1)            |
| IsEmpty     | O(1)            |

---

## Summary
Queues are fundamental data structures designed to manage ordered collections efficiently. They are widely used in real-world applications where order and timing are crucial. Understanding the implementation and characteristics of queues provides a solid foundation for solving more complex computational problems.

