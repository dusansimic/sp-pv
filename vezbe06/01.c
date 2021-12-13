#include <stdio.h>
#include <stdlib.h>

#define UMANJI 1
#define UVECAJ 2

int izdv;

void ucitaj_cene (double* m, int n) {
	for (int i = 0; i < n*n; i++) {
		scanf ("%lf", m + i);
	}
}

double** izdvoj (double* m, int n, double k, int (*cmp) (double, double)) {
	izdv = 0;
	for (int i = 0; i < n*n; i++) {
		if (cmp (*(m + i), k)) {
			izdv++;
		}
	}

	double** ret = malloc (sizeof(double) * izdv);
	double** retp = ret;
	for (int i = 0; i < n*n; i++) {
		if (cmp (*(m + i), k)) {
			*retp = m + i;
			retp++;
		}
	}

	return ret;
}

int veci_od (double b1, double b2) {
	if (b1 > b2)
		return 1;
	return 0;
}

int manji_od (double b1, double b2) {
	if (b1 < b2)
		return 1;
	return 0;
}

void uvecaj (double* b, double p) {
	*b += *b * p;
}

void umanji (double* b, double p) {
	*b -= *b * p;
}

void modifikuj_vrednost (double** n, double p, void (*mod) (double*, double)) {
	for (int i = 0; i < izdv; i++) {
		mod (*(n + i), p);
	}
}

int main () {
	int n;
	printf ("Unesite n: ");
	scanf ("%d", &n);

	double* m = malloc (sizeof (double) * n * n);

	ucitaj_cene (m, n);

	printf ("Odaberi opciju:\n");
	printf ("\t1) Umanji cene\n");
	printf ("\t2) Uvecaj cene\n");
	int opt;
	scanf ("%d", &opt);
	if (opt != UMANJI && opt != UVECAJ) {
		printf ("Nije validan unos!\n");
		return 1;
	}

	printf ("Postotak za modifikaciju: ");
	double postotak;
	scanf ("%lf", &postotak);

	if (opt == UMANJI) {
		printf ("Iznad koje sume ne treba da bude cena? ");
		double suma;
		scanf ("%lf", &suma);

		double** izdvojeni = izdvoj (m, n, suma, veci_od);
		modifikuj_vrednost (izdvojeni, postotak, umanji);

		free (izdvojeni);
	} else {
		printf ("Ispod koje sume ne treba da bude cena? ");
		double suma;
		scanf ("%lf", &suma);

		double** izdvojeni = izdvoj (m, n, suma, manji_od);
		modifikuj_vrednost (izdvojeni, postotak, uvecaj);

		free (izdvojeni);
	}

	for (int i = 0; i < n*n; i++) {
		printf ("%9lf", *(m + i));
		if (i % n == n - 1) {
			printf ("\n");
		}
	}

	free (m);
	return 0;
}
