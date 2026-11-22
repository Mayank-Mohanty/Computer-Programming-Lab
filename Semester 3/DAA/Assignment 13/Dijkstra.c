#include <stdio.h>
#define MAX 20
#define INF 99999
int dist[MAX];
int parent[MAX];
int inS[MAX]; // 0 = vertex is in Q, 1 = vertex is in S
// Step 1: INITIALIZE-SINGLE-SOURCE(G, s)
void initializeSingleSource(int n, int s) {
    for (int v = 0; v < n; v++) {
        dist[v] = INF;
        parent[v] = -1;
        inS[v] = 0; // S is initially empty; all vertices belong to Q
    }
    dist[s] = 0;
}
// Step 5: EXTRACT-MIN(Q)
int extractMin(int n) {
    int min = INF;
    int u = -1;
    for (int v = 0; v < n; v++) {
        if (inS[v] == 0 && dist[v] < min) {
            min = dist[v];
            u = v;
        }
    }
    return u;
}
// Step 8: RELAX(u, v, w)
void relax(int u, int v, int weight) {
    if (dist[u] != INF && dist[u] + weight < dist[v]) {
        dist[v] = dist[u] + weight;
        parent[v] = u;
    }
}
// DIJKSTRA(G, w, s)
void dijkstra(int w[MAX][MAX], int n, int s) {
    // 1. INITIALIZE-SINGLE-SOURCE(G, s)
    initializeSingleSource(n, s);
    // 2. S <- empty set (inS[] initialized to 0)
    // 3. Q <- V[G] (all n vertices are in Q)
    int qCount = n;
    // 4. while Q != empty
    while (qCount > 0) {
        // 5. u <- EXTRACT-MIN(Q)
        int u = extractMin(n);
        if (u == -1) {
            break; // Remaining vertices in Q are unreachable
        }
        // 6. S <- S U {u}
        inS[u] = 1;
        qCount--;
        // 7. for each vertex v in Adj[u]
        for (int v = 0; v < n; v++) {
            if (w[u][v] != 0) { // Check if edge (u, v) exists
                // 8. RELAX(u, v, w)
                relax(u, v, w[u][v]);
            }
        }
    }
}
int main() {
    int n, s;
    int w[MAX][MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter weighted adjacency matrix (0 if no edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &w[i][j]);
        }
    }
    printf("Enter source vertex (0 to %d): ", n - 1);
    scanf("%d", &s);
    dijkstra(w, n, s);
    printf("\nVertex\tShortest Distance\tParent\n");
    for (int i = 0; i < n; i++) {
        if (dist[i] == INF)
            printf("%d\tINF\t\t\t-\n", i);
        else
            printf("%d\t%d\t\t\t%d\n", i, dist[i], parent[i]);
    }
    return 0;
}
