#include <stdio.h>

int main() {
	int d;
	printf("Unesite broj dana: ");
	scanf("%d", &d);

	printf("Godina: %d\n", d / 365);
	d %= 365;
	printf("Nedelja: %d\n", d / 7);
	d %= 7;
	printf("Dana: %d\n", d);
}
