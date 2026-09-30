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

	if (strlen(str) != strlen(str1)) {
		printf("nao e permutacao");
		return 0;
	} else {

		for (int j = 0; j < strlen(str); j++) {
			for (int i = 0; i < strlen(str); i++) {
				if (str[j] == str1[i]) {
					cont++;
					str1[i] = '\0';
					break;
				}
			}
		}
	}

	if (cont == strlen(str)) {
		printf("e permutacao");
	} else {
		printf(" nao e permutacao");
	}

	// fputs(str, stdout);
	return 0;
}