#include <stdio.h>

int main() {
	int br;
	scanf("%d", &br);

	while (br != 0) {
		printf("%d", br % 10);
		br /= 10;
	}

	printf("\n");
}
