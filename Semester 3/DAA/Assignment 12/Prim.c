#include <stdio.h>
#include <limits.h>
#define MAX 50
#define INF INT_MAX
#define NIL -1
int w[MAX][MAX];   // Adjacency matrix for edge weights w(u, v)
int key[MAX];      // Minimum edge weight to connect each vertex
int pi[MAX];       // Parent array (π)
int inQ[MAX];      // 1 if vertex is in Q, 0 if removed
int q_size = 0;    // Number of vertices currently in Q
// Finds and removes the vertex in Q with the smallest key
int EXTRACT_MIN(int V) {
    int min = INF, u = -1;
    for (int i = 1; i <= V; i++) {
        if (inQ[i] == 1 && key[i] < min) {
            min = key[i];
            u = i;
        }
    }
    if (u != -1) {
        inQ[u] = 0; // Remove u from Q
        q_size--;
    }
    return u;
}
// PRIM(G, w, r)
void PRIM(int V, int r) {
    // Lines 1-3: Initialize key[u] <- ∞ and π[u] <- NIL
    for (int u = 1; u <= V; u++) {
        key[u] = INF;
        pi[u] = NIL;
    }
    // Line 4: key[r] <- 0
    key[r] = 0;
    // Line 5: Q <- V[G]
    q_size = V;
    for (int u = 1; u <= V; u++) {
        inQ[u] = 1;
    }
    // Line 6: while Q != Φ
    while (q_size > 0) {
        // Line 7: u <- EXTRACT-MIN(Q)
        int u = EXTRACT_MIN(V);
        if (u == -1) break; // Stop if remaining vertices are unreachable
        // Line 8: for each v ∈ Adj[u]
        for (int v = 1; v <= V; v++) {
            // Line 9: if v ∈ Q and w(u, v) < key[v]
            if (w[u][v] != 0 && inQ[v] == 1 && w[u][v] < key[v]) {
                // Line 10: π[v] <- u
                pi[v] = u;
                // Line 11: key[v] <- w(u, v)
                key[v] = w[u][v];
            }
        }
    }
    // Print the Minimum Spanning Tree
    int total_weight = 0;
    printf("\nEdges in Minimum Spanning Tree:\n");
    for (int v = 1; v <= V; v++) {
        if (pi[v] != NIL) {
            printf("(%d, %d) -> weight: %d\n", pi[v], v, key[v]);
            total_weight += key[v];
        }
    }
    printf("Total MST Weight: %d\n", total_weight);
}
int main() {
    int V, E, u, v, weight, r;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &V, &E);
    for (int i = 1; i <= V; i++)
        for (int j = 1; j <= V; j++)
            w[i][j] = 0;
    printf("Enter edges (u v weight):\n");
    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &u, &v, &weight);
        w[u][v] = weight;
        w[v][u] = weight; // Undirected graph
    }
    printf("Enter starting root vertex r: ");
    scanf("%d", &r);
    PRIM(V, r);
    return 0;
}
