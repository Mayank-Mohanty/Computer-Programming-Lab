#include <stdio.h>

#define MAX 20       // Maximum number of vertices to keep arrays simple
#define INF 999999   // Represents infinity instead of importing limits.h

// Function 1: EXTRACT-MIN - Finds the vertex with the minimum key value
int extractMin(int key[], int inQ[], int V) {
    int min = INF, min_index = -1;

    for (int v = 0; v < V; v++) {
        // Check if vertex v is still in Q (1) and has a smaller key
        if (inQ[v] == 1 && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function 2: Print the constructed Minimum Spanning Tree
void printMST(int parent[], int graph[MAX][MAX], int V) {
    printf("\nEdges added to the Minimum Spanning Tree (A):\n");
    int minCost = 0;
    
    // Start from 1 because 0 is the root and has no parent
    for (int i = 1; i < V; i++) {
        if (parent[i] != -1) {
            printf("Vertex %d -- Vertex %d == Weight: %d\n", parent[i], i, graph[parent[i]][i]);
            minCost += graph[parent[i]][i];
        }
    }
    printf("\nTotal Cost of Minimum Spanning Tree: %d\n", minCost);
}

// Function 3: Core Prim's Algorithm
void primMST(int graph[MAX][MAX], int V) {
    int parent[MAX]; // Represents v.pi (parent of v in the tree)
    int key[MAX];    // Represents v.key (minimum weight to connect to tree)
    int inQ[MAX];    // Represents the queue Q (1 means in Q, 0 means removed)

    // Step 1: Initialize all vertices
    for (int i = 0; i < V; i++) {
        key[i] = INF;    // u.key = infinity
        inQ[i] = 1;      // Q = G.V (all vertices start in Q)
        parent[i] = -1;  // u.pi = NIL
    }

    // Step 2: Set key of the arbitrary root (vertex 0) to 0
    key[0] = 0; 

    // Step 3: Loop to process vertices (V-1 edges are needed for MST)
    for (int count = 0; count < V - 1; count++) {
    
        // u = EXTRACT-MIN(Q)
        int u = extractMin(key, inQ, V);    
        // Remove u from Q
        inQ[u] = 0;
        // Step 4: Check all adjacent vertices v of u
        for (int v = 0; v < V; v++) {
            // graph[u][v] checks if an edge exists
            // inQ[v] checks if v is still in Q
            // graph[u][v] < key[v] checks if weight is less than current key
            if (graph[u][v] && inQ[v] == 1 && graph[u][v] < key[v]) {
                parent[v] = u;         // v.pi = u
                key[v] = graph[u][v];  // v.key = w(u, v)
            }
        }
    }
    // Call the print function
    printMST(parent, graph, V);
}
// Function 4: Main driver code to handle user input
int main() {
    int V, E;
    int graph[MAX][MAX] = {0}; // Initialize the fixed-size adjacency matrix with 0s
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    printf("Enter the number of edges: ");
    scanf("%d", &E);
    printf("Enter edges in format (source destination weight):\n");
    for (int i = 0; i < E; i++) {
        int u, v, w;
        printf("Edge %d: ", i + 1);
        scanf("%d %d %d", &u, &v, &w);     
        // Undirected graph, so populate both symmetric entries
        graph[u][v] = w;
        graph[v][u] = w;
    }
    // Execute the algorithm
    primMST(graph, V);
    return 0;
}
