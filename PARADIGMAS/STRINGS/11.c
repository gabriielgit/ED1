#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	int cont = 0;
	char str[20], str1[20];
	fgets(str, 15, stdin);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);
	fgets(str1, 20, stdin);
	fflush(stdin);

	for (int j = 0; j < strlen(str); j++) {
		for (int i = 0; i < strlen(str); i++) {
			if (str[j] != str[i]) {
				cont++;
			} else {
				str[i] = '\0';
			}
		}
	}

	printf("\n%d", cont);
	return 0;
}