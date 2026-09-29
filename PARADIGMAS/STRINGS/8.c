#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	int cont = 0;
	char str[40];
	fgets(str, 40, stdin);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);
	printf("\n\n");
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 32) {
			printf("\n");
		} else {
			printf("%c", str[i]);
		}
	}
	return 0;
}