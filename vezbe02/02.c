#include <stdio.h>

int main() {
	int m, n, p;
	printf("n: ");
	scanf("%d", &n);
	printf("m: ");
	scanf("%d", &m);
	printf("p: ");
	scanf("%d", &p);

	int a[n][m], b[m][p];

	printf("Prva matrica:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("Druga matrica:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	int c[n][p];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			c[i][j] = 0;
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	printf("Rezultujuca matrica:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			printf(" %d", c[i][j]);
		}
		printf("\n");
	}
}
