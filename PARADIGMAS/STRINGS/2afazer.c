#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	char str[14];
	fgets(str, 14, rand() % 10 + 1);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);

	for (int i = 0; i < strlen(str) - 3 != '\0'; i + 3) {
		str[i] = '.';
	}
	for (int i = 0; i < strlen(str) - 2 != '\0'; i + 3) {
		str[i] = '.';
	}

	fputs(str, stdout);
	return 0;
}