#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char* naziv;
	int cena;
	int kolicina;
} voce;

typedef struct cvor {
	voce* voce;
	struct cvor* next;
} lista;

voce* new_voce (char* naziv, int cena, int kolicina) {
	voce* v = (voce*) malloc (sizeof (voce));

	v->naziv = naziv;
	v->cena = cena;
	v->kolicina = kolicina;

	return v;
}

struct cvor* new_cvor (voce* voce, struct cvor* next) {
	struct cvor* c = (struct cvor*) malloc (sizeof (struct cvor));

	c->voce = voce;
	c->next = next;

	return c;
}

void add_element (lista** l, struct cvor* e, int i) {
	if (i <= 0 || *l == NULL) {
		e->next = *l;
		*l = e;
		return;
	}

	struct cvor* curr = *l;
	int j = 1;
	while (j < i && curr->next != NULL) {
		j++;
		curr = curr->next;
	}

	e->next = curr->next;
	curr->next = e;
}

void free_voce (voce* v) {
	if (v->naziv != NULL) {
		free (v->naziv);
	}
	free (v);
}

void free_cvor (struct cvor* c) {
	if (c->voce != NULL) {
		free_voce (c->voce);
	}
	free (c);
}

void oslobodi_memoriju (lista* l) {
	struct cvor* curr = l;
	while (curr != NULL) {
		struct cvor* next = curr->next;
		free_cvor (curr);
		curr = next;
	}
}

lista* ucitaj () {
	FILE* f = fopen ("voce.txt", "r");

	int n;
	fscanf (f, "%d", &n);

	lista* l = NULL;

	for (int i = 0; i < n; i++) {
		char* naziv = malloc (32 * sizeof (char));
		int cena;
		int kolicina;
		int i;

		fscanf (f, "%s %d %d %d", naziv, &cena, &kolicina, &i);

		voce* v = new_voce (naziv, cena, kolicina);
		struct cvor* c = new_cvor (v, NULL);
		add_element (&l, c, i);
	}

	fclose (f);

	return l;
}

void stampaj (lista* l) {
	struct cvor* curr = l;
	for (; curr != NULL; curr = curr->next) {
		printf ("%s %d %d\n", curr->voce->naziv, curr->voce->cena, curr->voce->kolicina);
	}
}

void rasprodaja (lista* l) {
	struct cvor* curr = l;
	for (; curr != NULL; curr = curr->next) {
		if (curr->voce->kolicina < 30) {
			curr->voce->cena *= 0.8;
		}
	}
}

int izracunaj_zaradu (lista* l) {
	int sum = 0;

	struct cvor* curr = l;
	for (; curr != NULL; curr = curr->next) {
		sum += curr->voce->kolicina * curr->voce->cena;
	}

	return sum;
}

int main () {
	lista* l = ucitaj ();

	rasprodaja (l);
	int sum = izracunaj_zaradu (l);

	printf("Zarada: %d\n", sum);

	stampaj (l);

	oslobodi_memoriju (l);

	return 0;
}
