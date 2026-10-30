/*WAP to solve Rabin-Karp String Matching by Dynamic Programming.
 Mayank Mohanty 25BCSG88 18 D1*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int calculate_h(int d, int m, int q) {
    int h = 1;
    for (int i = 1; i <= m - 1; i++) {
        h = (h * d) % q;
    }
    return h;
}
void RABIN_KARP_MATCHER(char T[], char P[], int d, int q) {
    int n = strlen(T);
    int m = strlen(P);
    int h = calculate_h(d, m, q);
    int p = 0;
    int t = 0; 
    for (int i = 0; i < m; i++) {
        p = (d * p + P[i]) % q;
        t = (d * t + T[i]) % q;
    }
    for (int s = 0; s <= n - m; s++) {
        if (p == t) {
            int match = 1;
            for (int j = 0; j < m; j++) {
                if (T[s + j] != P[j]) {
                    match = 0;
                    break;
                }
            }
            if (match == 1) {
                printf("Pattern P occurs with shift %d\n", s);
            }
        }
        if (s < n - m) {
            t = (d * (t - T[s] * h) + T[s + m]) % q;
            // We might get negative value of t, converting it to positive
            if (t < 0) {
                t = (t + q);
            }
        }
    }
}
int main() {
    char T[1000], P[100];
    int q, d;
    printf("Enter radix d (256 for ASCII, 10 for decimal): ");
    scanf("%d", &d);
    printf("Enter modulus q (a prime number): ");
    scanf("%d", &q);
    printf("Enter the text (T): ");
    scanf("%s", T);
    printf("Enter the pattern (P): ");
    scanf("%s", P);
    printf("\n");
    RABIN_KARP_MATCHER(T, P, d, q);   
    return 0;
}