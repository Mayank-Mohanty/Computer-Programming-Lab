#include <stdio.h>
struct Item {
    int value;
    int weight;
};
void KNAPSACK01(int W, int n, struct Item items[], int x[]) {
    int dp[n + 1][W + 1];
    int i, w;
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (items[i - 1].weight <= w) {
                int val1 = items[i - 1].value + dp[i - 1][w - items[i - 1].weight];
                int val2 = dp[i - 1][w];
                dp[i][w] = (val1 > val2) ? val1 : val2;
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    int res = dp[n][W];
    w = W;
    for (i = 0; i < n; i++) {
        x[i] = 0;
    }
    for (i = n; i > 0 && res > 0; i--) {
        if (res == dp[i - 1][w]) {
            continue;
        } else {
            x[i - 1] = 1;
            res = res - items[i - 1].value;
            w = w - items[i - 1].weight;
        }
    }
}
int main() {
    int n, i, W;
    printf("Enter the number of items (n): ");
    scanf("%d", &n);
    printf("Enter the maximum capacity of knapsack (W): ");
    scanf("%d", &W);
    struct Item items[n];
    int x[n];
    for (i = 0; i < n; i++) {
        printf("Enter value and weight for item %d: ", i + 1);
        scanf("%d %d", &items[i].value, &items[i].weight);
    }
    KNAPSACK01(W, n, items, x);
    int total_profit = 0;
    printf("\nSolution vector x[]:\n");
    for (i = 0; i < n; i++) {
        printf("Item %d (Weight: %d, Value: %d): %d\n", i + 1, items[i].weight, items[i].value, x[i]);
        if (x[i] == 1) {
            total_profit += items[i].value;
        }
    }
    printf("\nMaximum value in Knapsack = %d\n", total_profit);
    return 0;
}
