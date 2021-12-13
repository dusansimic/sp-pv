#include <stdio.h>
#include <stdlib.h>

#define SABERI 1
#define ODUZMI 2

void ucitaj (int n, double* mat) {
	for (int i = 0; i < n*n; i++) {
		scanf ("%lf", mat + i);
	}
}

void izdvoj (double* mat, int n, double** izdvojeni, int* len) {
	*len = 0;
	for (int i = 0; i < n*n; i++) {
		if (*(mat + i) > 20.0)
			(*len)++;
	}

	*izdvojeni = malloc (sizeof (double) * *len);
	double* p = *izdvojeni;

	for (int i = 0; i < n*n; i++) {
		if (*(mat + i) > 20.0) {
			*(p++) = *(mat + i);
		}
	}
}

double saberi (double a, double b) {
	return a + b;
}

double oduzmi (double a, double b) {
	return a - b;
}

double operacija (double* niz, int len, double (*op) (double, double)) {
	double rez = 0;
	for (int i = 0; i < len; i++) {
		rez = op (rez, *(niz + i));
	}

	return rez;
}

int main () {
	int n;
	printf ("Unesite velicinu matrice: ");
	scanf ("%d", &n);

	double* m = malloc(sizeof (double) * n*n);
	ucitaj (n, m);

	double* izdvojeno;
	int izdvojLen;
	izdvoj (m, n, &izdvojeno, &izdvojLen);

	printf ("Odaberite operaciju:\n");
	printf ("\t1) Saberi\n");
	printf ("\t2) Oduzmi\n");
	int op;
	scanf ("%d", &op);

	if (op != SABERI && op != ODUZMI) {
		printf ("Nevalidan unos.");
		return 1;
	}

	double res;
	switch (op) {
	case SABERI:
		res = operacija (izdvojeno, izdvojLen, saberi);
		break;
	case ODUZMI:
		res = operacija (izdvojeno, izdvojLen, oduzmi);
	}

	printf ("Rezultat operacije je %lf\n", res);

	free (izdvojeno);
	free (m);

	return 0;
}
