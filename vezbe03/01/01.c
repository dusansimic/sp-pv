#include <stdio.h>
#include <string.h>

int prebroj(char* str) {
	int c = 0;
	char* i = str;
	while(*i) {
		if (*i++ == 'a') {
			c++;
		}
	}
	return c;
}

int main() {
	char str[256];
	scanf("%s", str);
	int res = prebroj(str);
	printf("%d\n", res);

	return 0;
}