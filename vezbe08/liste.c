#include <stdio.h>

typedef struct {
	char* ime;
	char* prezime;
} osoba;

typedef struct {
	int staz;
	osoba* osoba;
} radnik;

typedef struct cvor {
	radnik* radnik;
	struct cvor* sledeci;
} lista;

int main () {
	return 0;
}
