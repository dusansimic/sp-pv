#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define _HINTS

int main() {
	srand(time(0));

	int br = rand() % 51;

	int unos;

	do {
		printf("Pogadjajte broj: ");
		scanf("%d", &unos);

#ifdef _HINTS

		if (unos < br) {
			printf("Unet broj je manji od zamisljenog!\n");
		} else {
			printf("Unet broj je veci od zamisljenog!\n");
		}

#endif
	} while (unos != br);
}
