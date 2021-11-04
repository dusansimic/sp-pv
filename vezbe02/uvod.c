#include <stdio.h>

int main() {
	int niz[3];
	for (int i = 0; i < 3; i++) {
		printf(" %d", niz[i]);
	}
	printf("\n");

	int niz2[] = {1, 2, 3};
	for (int i = 0; i < 3; i++) {
		printf(" %d", niz2[i]);
	}
	printf("\n");

	int niz3[] = {1, 2};
	for (int i = 0; i < 3; i++) {
		printf(" %d", niz3[i]);
	}
	printf("\n");

	int niz4[3] = {1, 2, 3, 4};
	for (int i = 0; i < 4; i++) {
		printf(" %d", niz4[i]);
	}
	printf("\n");

	int duzina = sizeof(niz2) / sizeof(int);
	printf("Duzina niza niz2: %d\n", duzina);

	int mat1[3][4] = {
		{1, 1, 1, 1},
		{2, 2, 2, 2},
		{3, 3, 3, 3}
	};

	int mat2[3][4] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};
	
	printf("Matrica 1:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d", mat1[i][j]);
		}
		printf("\n");
	}

	printf("Matrica 2:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d", mat2[i][j]);
		}
		printf("\n");
	}

	char str[] = "Hello world";
	char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", str);
	printf("%s\n", str2);

	char str3[20];
	printf("Unesite string: ");
	gets(str3);
	printf("Uneti string: %s\n", str3);

	char str4[20];
	printf("Unesite string: ");
	scanf("%s", str4);
	printf("Uneti string: %s\n", str4);

	return 0;
}
