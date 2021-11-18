#include <stdio.h>
#include <string.h>

int palindrom(char *s) {
	int l = strlen(s);
	for (int i = 0; i < l / 2; i++) {
		if (*(s + i) != *(s + l - i - 1)) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char s[128];
	scanf("%s", &s);
	printf("String %s palindrom.", palindrom(s) ? "jeste" : "nije");
	return 0;
}
