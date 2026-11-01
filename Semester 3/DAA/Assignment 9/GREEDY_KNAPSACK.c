#include <stdio.h>
void GREEDYKNAPSACK(float W, int n, float w[], float x[]) {
    int i;
    for (i = 0; i < n; i++) {
        x[i] = 0.0;
    }
    float U = W;
    for (i = 0; i < n; i++) {
        if (w[i] > U) {
            break;
        }
        x[i] = 1.0;
        U = U - w[i];
    }
    if (i < n) {
        x[i] = U / w[i];
    }
}
int main() {
    int n, i, j;
    float W;
    printf("Enter the number of items (n): ");
    scanf("%d", &n);
    printf("Enter the maximum capacity of knapsack (W): ");
    scanf("%f", &W);
    float v[n], w[n], x[n], ratio[n];
    for (i = 0; i < n; i++) {
        printf("Enter value and weight for item %d: ", i + 1);
        scanf("%f %f", &v[i], &w[i]);
        ratio[i] = v[i] / w[i];
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                float temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;
                temp = w[i];
                w[i] = w[j];
                w[j] = temp;
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    GREEDYKNAPSACK(W, n, w, x);
    float total_profit = 0.0;
    printf("\nSolution vector x[] (Fractions of items taken):\n");
    for (i = 0; i < n; i++) {
        printf("Item %d (Weight: %.2f, Value: %.2f): %.2f\n", i + 1, w[i], v[i], x[i]);
        total_profit += x[i] * v[i];
    }
    printf("\nMaximum value in Knapsack = %.2f\n", total_profit);
    return 0;
}

