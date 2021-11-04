#include <stdio.h>

int main() {
	int v1[3], v2[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &v1[i]);
	}
	for (int i = 0; i < 3; i++) {
		scanf("%d", &v2[i]);
	}

	int p = 0;
	for (int i = 0; i < 3; i++) {
		p += v1[i]*v2[i];
	}

	printf("proizvod: %d\n", p);

	return 0;
}

