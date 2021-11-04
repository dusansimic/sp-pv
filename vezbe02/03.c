#include <stdio.h>
#include <string.h>

int main() {
	char str[128];
	gets(str);

	int len = strlen(str);
	char newstr[len * 2];

	int j = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == 'x') {
			newstr[j++] = 'k';
			newstr[j++] = 's';
		} else {
			newstr[j++] = str[i];
		}
	}
	newstr[j] = '\0';

	printf("%s\n", newstr);
}
