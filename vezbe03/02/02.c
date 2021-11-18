#include <stdio.h>

#define PI 3.14

float obim(float r) {
	return 2 * r * PI;
}

float povrsina(float r) {
	return r * r * PI;
}

int main() {
	printf("Obim: %.2f\n", obim(3.14));
	printf("Povrsina: %.2f\n", povrsina(3.14));

	return 0;
}
