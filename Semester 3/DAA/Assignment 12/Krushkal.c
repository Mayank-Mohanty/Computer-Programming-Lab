#include <stdio.h>
// Structure to hold edge details
struct Edge {
    int u, v, weight;
};
// FIND-SET: Recursively finds the root representative of the set
int find(int parent[], int i) {
    if (parent[i] == i) {
        return i;
    }
    return find(parent, parent[i]);
}
// UNION: Connects two disjoint sets by making one root point to the other
void union_set(int parent[], int u, int v) {
    int root_u = find(parent, u);
    int root_v = find(parent, v);
    parent[root_u] = root_v;
}
int main() {
    int V, E;   
    // Take user input for vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    printf("Enter the number of edges: ");
    scanf("%d", &E);
    struct Edge edges[E];
    int parent[V];
    printf("Enter edges in format (source destination weight):\n");
    for (int i = 0; i < E; i++) {
        printf("Edge %d: ", i + 1);
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].weight);
    }
    // Step 1: Sort edges by weight in nondecreasing order using Bubble Sort
    for (int i = 0; i < E - 1; i++) {
        for (int j = 0; j < E - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
    // Step 2: MAKE-SET for each vertex (every vertex is its own parent initially)
    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }
    printf("\nEdges added to the Minimum Spanning Tree (A):\n");
    int minCost = 0;
    int edgeCount = 0;
    // Step 3: Iterate through sorted edges and apply Kruskal's logic
    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        // If FIND-SET(u) != FIND-SET(v), it's a safe edge (no cycle)
        if (find(parent, u) != find(parent, v)) {
            printf("Vertex %d -- Vertex %d == Weight: %d\n", u, v, edges[i].weight);
            minCost += edges[i].weight;
            // UNION(u, v)
            union_set(parent, u, v);
            edgeCount++;
            // A minimum spanning tree has exactly V-1 edges; stop early if reached
            if (edgeCount == V - 1) {
                break;
            }
        }
    }
    printf("\nTotal Cost of Minimum Spanning Tree: %d\n", minCost);
    return 0;
}

