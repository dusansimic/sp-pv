#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);

	int* niz = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", niz + i);
	}

	int* mat = malloc(n * n * sizeof(int));
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			*(mat + j*n + i) = niz[j] * niz[i];
		}
	}

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			printf("%3d", *(mat + j*n + i));
		}
		printf("\n");
	}

	free(niz);
	free(mat);

	return 0;
}
