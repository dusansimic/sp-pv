#include <stdio.h>
#include <stdlib.h>

int main() {
	int* ip; // Zauzeta memorija za jedan blok velicine int
	int a = 5;
	ip = &a;

	int* ip2 = malloc(sizeof(int)); // Zauzeta memorija za jedan blok velicine int
	free(ip2);

	int niz1[3] = {1, 2, 3};
	int* prvi_el = &niz1[0];
	int* niz2 = niz1;
	printf("Prvi element iz niza je %d\n", *prvi_el);

	int* niz3 = malloc(sizeof(int) * 3);
	niz3[0] = 2;
	*(niz3 + 1) = 3;
	*(niz3 + 2) = 4;

	for (int i = 0; i < 3; i++) {
		printf("%d. element niza 3 je %d\n", i, *(niz3 + i));
	}

	free(niz3);

	int mat1[2][3];
	int** mat2 = malloc(sizeof(int*) * 2);
	for (int i = 0; i < 2; i++) {
		*(mat2 + i) = malloc(sizeof(int) * 3);
	}

	for (int i = 0; i < 2; i++) {
		free(*(mat2 + i));
	}
	free(mat2);

	int* mat3 = malloc(sizeof(int) * 2 * 3);
	free(mat3);

	return 0;
}
