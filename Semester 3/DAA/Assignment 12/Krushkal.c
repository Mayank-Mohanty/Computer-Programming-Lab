#include <stdio.h>
#define MAX 100
// Structure to represent an edge (u, v) with weight w
struct Edge {
    int u, v, w;
};
int parent[MAX]; // Array for Disjoint Set operations
// MAKE-SET(v): Creates a singleton set for vertex v
void MAKE_SET(int v) {
    parent[v] = v;
}
// FIND-SET(v): Returns the representative (root) of the set containing v
int FIND_SET(int v) {
    while (parent[v] != v) {
        v = parent[v];
    }
    return v;
}
// UNION(u, v): Merges the sets containing u and v
void UNION(int u, int v) {
    int root_u = FIND_SET(u);
    int root_v = FIND_SET(v);
    parent[root_u] = root_v;
}
// Step 4: Sort edges of E in increasing order of weight w (Bubble Sort)
void sortEdges(struct Edge E[], int m) {
    struct Edge temp;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (E[j].w > E[j + 1].w) {
                temp = E[j];
                E[j] = E[j + 1];
                E[j + 1] = temp;
            }
        }
    }
}
// MST-KRUSHKAL(G, w) implementation
void MST_KRUSKAL(struct Edge E[], int V, int m) {
    struct Edge A[MAX]; // Step 1: A <- empty set
    int edge_count = 0;
    int total_cost = 0;
    // Steps 2-3: for each vertex v in V[G], MAKE-SET(v)
    for (int v = 1; v <= V; v++) {
        MAKE_SET(v);
    }
    // Step 4: Sort the edges of E in increasing order of weight w
    sortEdges(E, m);
    // Step 5: for each edge (u, v) in E[G] taken in increasing order
    for (int i = 0; i < m; i++) {
        int u = E[i].u;
        int v = E[i].v;
        // Step 6: if FIND-SET(u) != FIND-SET(v)
        if (FIND_SET(u) != FIND_SET(v)) {
            A[edge_count++] = E[i]; // Step 7: A <- A U {(u, v)}
            UNION(u, v);            // Step 8: UNION(u, v)
        }
    }
    // Step 9: Return / Display A
    printf("\nEdges in Minimum Spanning Tree (Kruskal's):\n");
    for (int i = 0; i < edge_count; i++) {
        printf("(%d, %d) -> weight: %d\n", A[i].u, A[i].v, A[i].w);
        total_cost += A[i].w;
    }
    printf("Total MST Weight: %d\n", total_cost);
}
int main() {
    int V, m;
    struct Edge E[MAX];
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &V, &m);
    printf("Enter edges (u v weight):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &E[i].u, &E[i].v, &E[i].w);
    }
    MST_KRUSKAL(E, V, m);
    return 0;
}
