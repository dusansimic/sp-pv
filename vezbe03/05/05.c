#include <stdio.h>
#include "operacije.h"

int main() {
	int a = 53;
	int b = 12;
	printf("a + b = %d\n", saberi(a, b));
	printf("a - b = %d\n", oduzmi(a, b));
	printf("a * b = %d\n", pomnozi(a, b));
	printf("a / b = %d\n", podeli(a, b));
	printf("a %% b = %d\n", modulo(a, b));

	return 0;
}
