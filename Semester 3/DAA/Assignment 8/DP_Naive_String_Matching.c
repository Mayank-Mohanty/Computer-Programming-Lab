/*WAP to solve Naive String Matching by Dynamic Programming.
 Mayank Mohanty 25BCSG88 18 D1*/
#include <stdio.h>
#include <string.h>
void NAIVE_STRING_MATCHER(char T[], char P[]) {
    int n = strlen(T);
    int m = strlen(P);
    for (int s = 0; s <= n - m; s++) {
        int match = 1;
        for (int j = 0; j < m; j++) {
            if (P[j] != T[s + j]) {
                match = 0;
                break;
            }
        }       
        if (match == 1) {
            printf("Pattern occurs with Shift %d\n", s);
        }
    }
}
int main() {
    char T[1000], P[100];
    printf("Enter the text (T): ");
    scanf("%s", T);
    printf("Enter the pattern (P): ");
    scanf("%s", P);
    printf("\n");
    NAIVE_STRING_MATCHER(T, P);   
    return 0;
}