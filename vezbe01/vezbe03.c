#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double x1, y1, x2, y2;
	printf("Unesite koordinate prve tace (razdvojene razmakom):\n");
	scanf("%lf %lf", &x1, &y1);

	printf("Unesite koordinate druge tace (razdvojene razmakom):\n");
	scanf("%lf %lf", &x2, &y2);

	double xd = abs(x1 - x2);
	double yd = abs(y1 - y2);
	double d = sqrt(xd * xd + yd * yd);
	printf("Rastojanje izmedju dve tacke: %.2f", d);
}
