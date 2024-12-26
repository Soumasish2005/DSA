# Graph Data Structure

## Definition
A graph is a non-linear data structure consisting of nodes (vertices) and edges, where edges connect pairs of vertices. Graphs can represent relationships between objects, making them a powerful tool in computer science and mathematics.

---

## Characteristics
- **Vertices (Nodes):** Fundamental units of a graph.
- **Edges (Links):** Connections between pairs of vertices.
- **Directed Graph (Digraph):** Edges have directions.
- **Undirected Graph:** Edges do not have directions.
- **Weighted Graph:** Edges have weights or costs.
- **Unweighted Graph:** Edges have no weights.
- **Connected Graph:** There is a path between every pair of vertices.
- **Disconnected Graph:** Some vertices are not connected.
- **Cyclic Graph:** Contains at least one cycle.
- **Acyclic Graph:** Does not contain any cycle.

---

## Types of Graphs
1. **Directed Graph:**
   - Edges have a specific direction.
   - Example: Road networks with one-way streets.

2. **Undirected Graph:**
   - Edges have no direction.
   - Example: Social networks.

3. **Weighted Graph:**
   - Edges have associated weights.
   - Example: Flight networks with distances.

4. **Unweighted Graph:**
   - Edges are uniform and have no weight.
   - Example: Friendship connections in a social network.

5. **Simple Graph:**
   - No loops or multiple edges.
   - Example: Basic network diagrams.

6. **Multi-Graph:**
   - Allows multiple edges between vertices.
   - Example: Multiple flight routes between cities.

7. **Cyclic Graph:**
   - Contains cycles.
   - Example: Electrical circuits.

8. **Acyclic Graph:**
   - No cycles.
   - Example: Family tree (DAG in specific cases).

9. **Connected Graph:**
   - All vertices are reachable from any vertex.
   - Example: Fully connected network.

10. **Disconnected Graph:**
    - Contains isolated vertices or components.
    - Example: Clustered network.

---

## Real-World Examples
- **Social Networks:** Representing friendships or follower relationships.
- **Road Maps:** Cities as vertices and roads as edges.
- **Web Links:** Web pages as vertices and hyperlinks as edges.
- **Airline Routes:** Airports as vertices and flights as edges.
- **Electrical Circuits:** Components as vertices and wires as edges.

---

## Basic Operations
- **Add Vertex:** Add a new vertex to the graph.
- **Add Edge:** Connect two vertices with an edge.
- **Remove Vertex:** Delete a vertex and associated edges.
- **Remove Edge:** Delete an edge between two vertices.
- **Search:** Traverse the graph using BFS or DFS.
- **Check Connectivity:** Verify if all vertices are reachable.
- **Find Path:** Determine a path between two vertices.

---

## Implementation
- **Adjacency Matrix:**
   - 2D array where `matrix[i][j]` indicates the presence or weight of an edge.
   - Space complexity: \(O(V^2)\).

- **Adjacency List:**
   - Array of lists where each list represents adjacent vertices.
   - Space complexity: \(O(V + E)\).

- **Edge List:**
   - List of all edges with their vertices and weights.
   - Space complexity: \(O(E)\).

- [See implementation using C](./graph.c)
---

## Advantages
- Models complex relationships intuitively.
- Suitable for dynamic networks.
- Supports various algorithms (shortest path, spanning tree, etc.).

---

## Disadvantages
- Can be memory-intensive (especially adjacency matrix).
- Traversal can be time-consuming for large graphs.
- Complex algorithms can have high computational costs.

---

## Applications
- **Computer Networks:** Routing and data flow analysis.
- **AI and Machine Learning:** Knowledge graphs, recommendation systems.
- **Transportation:** Route optimization, traffic flow analysis.
- **Biology:** Protein interaction networks.
- **Game Development:** Pathfinding algorithms.

---

## Complexity Analysis
### For \(V\) vertices and \(E\) edges:
- **Adjacency Matrix:**
  - Space: \(O(V^2)\)
  - Add Edge: \(O(1)\)
  - Remove Edge: \(O(1)\)
  - Search: \(O(V)\)

- **Adjacency List:**
  - Space: \(O(V + E)\)
  - Add Edge: \(O(1)\)
  - Remove Edge: \(O(E)\)
  - Search: \(O(V + E)\)

- **Edge List:**
  - Space: \(O(E)\)
  - Add Edge: \(O(1)\)
  - Remove Edge: \(O(E)\)
  - Search: \(O(E)\)

---

## Summary
Graphs are a versatile data structure used to model relationships and solve real-world problems. By understanding their characteristics, operations, and applications, one can choose the right graph representation and algorithm to optimize solutions efficiently.
