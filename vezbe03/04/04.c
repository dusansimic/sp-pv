#include <stdio.h>

#define DIST 'a' - 'A';

void uvecaj(char* s) {
	for (char* i = s; *i; i++) {
		if (*i >= 'a' && *i <= 'z') {
			*i -= DIST;
		}
	}
}

int main() {
	char s[128];
	scanf("%s", s);
	uvecaj(s);
	printf("%s\n", s);

	return 0;
}
