/*WAP to solve LCS by Dynamic Programming.
 Mayank Mohanty 25BCSG88 18 D1*/
#include <stdio.h>
#include <string.h>
#define MAX 1000
int C[MAX][MAX];
char B[MAX][MAX];
int LCS_LENGTH(char X[], char Y[])
{
    int m = strlen(X + 1);
    int n = strlen(Y + 1);
    int i, j;
    for (i = 1; i <= m; i++)
        C[i][0] = 0;
    for (j = 0; j <= n; j++)
        C[0][j] = 0;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (X[i] == Y[j])
            {
                C[i][j] = C[i - 1][j - 1] + 1;
                B[i][j] = 'D';
            }
            else if (C[i - 1][j] >= C[i][j - 1])
            {
                C[i][j] = C[i - 1][j];
                B[i][j] = 'U';
            }
            else
            {
                C[i][j] = C[i][j - 1];
                B[i][j] = 'L';
            }
        }
    }
    return C[m][n];
}
void PRINT_LCS(char X[], int i, int j)
{
    if (i == 0 || j == 0)
        return;
    if (B[i][j] == 'D')
    {
        PRINT_LCS(X, i - 1, j - 1);
        printf("%c", X[i]);
    }
    else if (B[i][j] == 'U')
    {
        PRINT_LCS(X, i - 1, j);
    }
    else
    {
        PRINT_LCS(X, i, j - 1);
    }
}
int main()
{
    char X[MAX], Y[MAX];
    int m, n, i, j, length;
    printf("Enter the first string (X): ");
    scanf("%s", X + 1);
    printf("Enter the second string (Y): ");
    scanf("%s", Y + 1);
    m = strlen(X + 1);
    n = strlen(Y + 1);
    length = LCS_LENGTH(X, Y);
    printf("\nLength of LCS = %d\n", length);
    printf("Longest Common Subsequence = ");
    PRINT_LCS(X, m, n);
    printf("\n");
    printf("\nC Matrix:\n");
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    printf("\nB Matrix:\n");
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                printf("%c ", '-');
            else
                printf("%c ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
