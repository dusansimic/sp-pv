#include <stdio.h>
#include <stdlib.h>

void stat(int* niz, int n, int* min, int* max, int* avg) {
	*min = *niz;
	*max = *niz;
	int acc = *niz;
	for (int i = 1; i < n; i++) {
		if (*(niz + i) > *max) {
			*max = *(niz + i);
		} else if (*(niz + i) < *min) {
			*min = *(niz + i);
		}
		acc += *(niz + i);
	}
	*avg = acc / n;
}

int main() {
	int n;
	scanf("%d", &n);
	int* niz = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", niz + i);
	}

	int* min = malloc(sizeof(int));
	int* max = malloc(sizeof(int));
	int* avg = malloc(sizeof(int));

	stat(niz, n, min, max, avg);

	printf("min: %d, max: %d, avg: %d\n", *min, *max, *avg);

	free(niz);
	free(min);
	free(max);
	free(avg);

	return 0;
}
