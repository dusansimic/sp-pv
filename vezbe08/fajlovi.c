#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE* file = fopen ("ime_fajla.txt", "r");

	char c = getc (file);

	char* str = malloc (13 * sizeof (char));

	fgets (str, 13, file);

	int broj;
	fscanf (file, "%d", &broj);

	fclose (file);

	printf ("%c\n", c);
	printf ("%s\n", str);
	printf ("%d\n", broj);

	free (str);

	return 0;
}
