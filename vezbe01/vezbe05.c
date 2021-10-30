#include <stdio.h>

#define T_CONST 0.555555556

int main() {
	printf("  F     C\n");
	for (int f = 0; f <= 200; f+=20) {
		double c = (f - 32) * T_CONST;
		printf("%3d %7.2f\n", f, c);
	}
}
