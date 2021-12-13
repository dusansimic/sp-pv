#include <stdio.h>
#include <stdlib.h>

void sort (int** p, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (**(p + j) < **(p + i)) {
				int* tmp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = tmp;
			}
		}
	}
}

int main () {
	int n;
	printf("Unesi n: ");
	scanf("%d", &n);
	int* arr = malloc (sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf ("%d", arr + i);
	}
	
	int** p = malloc (sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		*(p + i) = malloc (sizeof(int));
		*(p + i) = (arr + i);
	}

	sort (p, n);
	
	for (int i = 0; i < n; i++) {
		printf(" %d", **(p + i));
	}
	printf("\n");

	free(arr);
	free(p);
	return 0;
}
