#include <stdio.h>
#include <stdlib.h>

#define MAX_EDGES 100

// Structure to represent an edge
typedef struct {
    int u, v, weight;
} Edge;

// Comparator function for sorting edges
int compare(const void *a, const void *b) {
    return ((Edge *)a)->weight - ((Edge *)b)->weight;
}

// Find the representative (root) of a set
int find(int parent[], int i) {
    if (parent[i] != i)
        parent[i] = find(parent, parent[i]); // Path compression
    return parent[i];
}

// Union of two sets
void unionSets(int parent[], int rank[], int u, int v) {
    int rootU = find(parent, u);
    int rootV = find(parent, v);

    if (rootU != rootV) {
        if (rank[rootU] < rank[rootV])
            parent[rootU] = rootV;
        else if (rank[rootU] > rank[rootV])
            parent[rootV] = rootU;
        else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

// Function to find MST using Kruskal's Algorithm
void kruskalMST(Edge edges[], int V, int E) {
    qsort(edges, E, sizeof(Edge), compare); // Sort edges by weight

    int parent[V], rank[V];
    for (int i = 0; i < V; i++)
        parent[i] = i, rank[i] = 0;

    int minCost = 0, edgeCount = 0;

    printf("Edge \tWeight\n");
    for (int i = 0; i < E && edgeCount < V - 1; i++) {
        int u = edges[i].u, v = edges[i].v, weight = edges[i].weight;

        if (find(parent, u) != find(parent, v)) {
            unionSets(parent, rank, u, v);
            printf("%d - %d \t%d\n", u, v, weight);
            minCost += weight;
            edgeCount++;
        }
    }

    printf("Minimum Cost: %d\n", minCost);
}

// Driver function
int main() {
    Edge edges[] = { {0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4} };
    int V = 4, E = 5; // Number of vertices and edges

    kruskalMST(edges, V, E);

    return 0;
}
