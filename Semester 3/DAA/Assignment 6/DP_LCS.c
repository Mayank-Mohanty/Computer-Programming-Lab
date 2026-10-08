/*WAP to solve LCS by Dynamic Programming
 Mayank Mohanty 18 D1*/
#include<stdio.h>
#include<string.h>
void PRINT_LCS(char X[], char Y[], int L[][20], int m, int n, int len) {
	char lcs[len + 1];
	lcs[len] = '\0';
	int i = m, j = n;
	while ( i > 0 && j > 0) {
		if (X[i - 1] == Y[j - 1]) {
			lcs[len - 1] = X[i -1];
			i--;
			j--;
			len--;
		}
		else if (L[i - 1][j] > L[i][j - 1]) i--;
		else j--;
	}
	printf("LCS: %s\n", lcs);
}
void LCS_LENGTH(char X[], char Y[], int L[][20], int m, int n) {
	for (int i = 0 ; i <= m ; i++) {
		for (int j = 0 ; j <= n ; j++) {
			if (i == 0 || j == 0) L[i][j] = 0;
			else if (X[i - 1] == Y[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;
			else
				L[i][j] = (L[i - 1][j] > L[i][j - 1]) ? L[i - 1][j] : L[i][j - 1];

		}
	}
	printf("Length of LCS: %d\n", L[m][n]);
	PRINT_LCS(X, Y, L, m, n, L[m][n]);
}
void main() {
	char X[20], Y[20];
	int L[20][20];
	printf("Enter the first string: ");
	scanf("%[^\n]s", X);
	printf("Enter the second string: ");
	scanf(" %[^\n]s", Y);
	LCS_LENGTH(X, Y, L, strlen(X), strlen(Y));
}

