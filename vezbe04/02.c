#include <stdio.h>
#include <stdlib.h>

void ucitaj (int* niz, int n) {
	// niz iako je pokazivac, u ovom kontekstu je lokalna promenljiva pa mozemo slobodno da je
	// menjamo bez da uticemo na onu iz main funckije
	for (; n > 0; n--) {
		scanf("%d", niz++);
	}
}

void ispisi_obrnuto (int* niz, int n) {
	niz += n;
	for (; n > 0; n--) {
		printf(" %d", *(--niz));
	}
	printf ("\n");
}

int main () {
	int n;
	printf ("Unesi n: ");
	scanf ("%d", &n);
	int* niz = malloc (sizeof(int) * n);

	ucitaj (niz, n);
	ispisi_obrnuto (niz, n);

	free(niz);
	return 0;
}
