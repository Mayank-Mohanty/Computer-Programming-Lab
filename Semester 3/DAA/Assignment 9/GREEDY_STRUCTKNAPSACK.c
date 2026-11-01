#include <stdio.h>
struct Item {
    float value;
    float weight;
    float ratio;
};
void GREEDYKNAPSACK(float W, int n, struct Item items[], float x[]) {
    int i;
    for (i = 0; i < n; i++) {
        x[i] = 0.0;
    }
    float U = W;
    for (i = 0; i < n; i++) {
        if (items[i].weight > U) {
            break;
        }
        x[i] = 1.0;
        U = U - items[i].weight;
    }
    if (i < n) {
        x[i] = U / items[i].weight;
    }
}
int main() {
    int n, i, j;
    float W;
    printf("Enter the number of items (n): ");
    scanf("%d", &n);
    printf("Enter the maximum capacity of knapsack (W): ");
    scanf("%f", &W);
    struct Item items[n];
    float x[n];
    for (i = 0; i < n; i++) {
        printf("Enter value and weight for item %d: ", i + 1);
        scanf("%f %f", &items[i].value, &items[i].weight);
        items[i].ratio = items[i].value / items[i].weight;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (items[i].ratio < items[j].ratio) {
                struct Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
    GREEDYKNAPSACK(W, n, items, x);
    float total_profit = 0.0;
    printf("\nSolution vector x[]:\n");
    for (i = 0; i < n; i++) {
        printf("Item %d (Weight: %.2f, Value: %.2f): %.2f\n", i + 1, items[i].weight, items[i].value, x[i]);
        total_profit += x[i] * items[i].value;
    }
    printf("\nMaximum value in Knapsack = %.2f\n", total_profit);
    return 0;
}

