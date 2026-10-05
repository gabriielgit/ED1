#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	int cont = 0;
	bool repitiu = false;
	char str[20];
	fgets(str, 15, stdin);
	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);
	for (int j = 0; j < strlen(str); j++) {
		repitiu = false;
		for (int i = j + 1; i < strlen(str); i++) {
			if (str[j] == str[i] && str[j]) {
				repitiu = true;
			}
		}
		if (str[j] != ' ') {

			if (!repitiu) {
				cont++;
			}
		}
	}

	printf("\n%d", cont);
	return 0;
}