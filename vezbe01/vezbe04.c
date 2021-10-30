#include <stdio.h>

int main() {
	int n;
	printf("Unesite kolicinu novca: ");
	scanf("%d", &n);

	printf("100 - %d\n", n / 100);
	n %= 100;
	printf("50  - %d\n", n / 50);
	n %= 50;
	printf("20  - %d\n", n / 20);
	n %= 20;
	printf("10  - %d\n", n / 10);
	n %= 10;
	printf("5   - %d\n", n / 5);
	n %= 5;
	printf("2   - %d\n", n / 2);
	n %= 2;
	printf("1   - %d\n", n);
}

