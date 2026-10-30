/*WAP to solve Matrix Chain Multiplication by Dynamic Programming.
 Mayank Mohanty 25BCSG88 18 D1*/
#include <stdio.h>
#define MAX 100
void MATRIX_CHAIN_ORDER(int p[], int n, int m[MAX][MAX], int s[MAX][MAX]) {
    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = 9999999;       
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}
void PRINT_OPTIMAL_PARENS(int s[MAX][MAX], int i, int j) {
    if (i == j) {
        printf("A%d ", i);
    } 
    else {
        printf("(");
        PRINT_OPTIMAL_PARENS(s, i, s[i][j]);
        PRINT_OPTIMAL_PARENS(s, s[i][j] + 1, j);
        printf(")");
    }
}
int main() {
    int n;   
    printf("Enter the number of matrices (n): ");
    scanf("%d", &n);
    int p_size = n + 1;
    int p[MAX];
    printf("Enter the %d elements of the dimension array p: \n", p_size);
    for (int i = 0; i < p_size; i++) {
        scanf("%d", &p[i]);
    }
    int m[MAX][MAX] = {0};
    int s[MAX][MAX] = {0};
    MATRIX_CHAIN_ORDER(p, n, m, s);
    printf("\nOptimal Parenthesization: ");
    PRINT_OPTIMAL_PARENS(s, 1, n);
    printf("\n--- m table (Minimum Costs) ---\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i <= j) {
                printf("%8d ", m[i][j]);
            } else {
                printf("%8s ", "");
            }
        }
        printf("\n");
    }
    printf("\n--- s table (Split Markers) ---\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i <= j) {
                printf("%8d ", s[i][j]);
            } else {
                printf("%8s ", "");
            }
        }
        printf("\n");
    }
    return 0;
}