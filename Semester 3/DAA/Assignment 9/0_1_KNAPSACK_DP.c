#include <stdio.h>
void KNAPSACK_01(int W, int n, int v[], int w[], int x[]) {
    int K[n + 1][W + 1];
    int i, wt;
    for (i = 0; i <= n; i++) {
        for (wt = 0; wt <= W; wt++) {
            if (i == 0 || wt == 0) {
                K[i][wt] = 0;
            } else if (w[i - 1] <= wt) {
                int val1 = v[i - 1] + K[i - 1][wt - w[i - 1]];
                int val2 = K[i - 1][wt];
                K[i][wt] = (val1 > val2) ? val1 : val2;
            } else {
                K[i][wt] = K[i - 1][wt];
            }
        }
    }
    int res = K[n][W];
    wt = W;
    for (i = 0; i < n; i++) {
        x[i] = 0;
    }
    for (i = n; i > 0 && res > 0; i--) {
        if (res == K[i - 1][wt]) {
            continue;
        } else {
            x[i - 1] = 1;
            res = res - v[i - 1];
            wt = wt - w[i - 1];
        }
    }
}
int main() {
    int n, i, W;
    printf("Enter the number of items (n): ");
    scanf("%d", &n);
    printf("Enter the maximum capacity of knapsack (W): ");
    scanf("%d", &W);
    int v[n], w[n], x[n];
    for (i = 0; i < n; i++) {
        printf("Enter value and weight for item %d: ", i + 1);
        scanf("%d %d", &v[i], &w[i]);
    }
    KNAPSACK_01(W, n, v, w, x);
    int total_profit = 0;
    printf("\nSolution vector x[] (Items taken):\n");
    for (i = 0; i < n; i++) {
        printf("Item %d (Weight: %d, Value: %d): %d\n", i + 1, w[i], v[i], x[i]);
        if (x[i] == 1) {
            total_profit += v[i];
        }
    }
    printf("\nMaximum value in Knapsack = %d\n", total_profit);
    return 0;
}
