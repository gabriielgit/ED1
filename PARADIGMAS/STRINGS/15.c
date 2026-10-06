#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	char str[20];
	bool verificador = false;
	int cont = 0, aux = 0;
	fgets(str, 15, stdin);

	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);

	for (int i = 0; i < strlen(str); i++) {
		verificador = false;
		while (str[aux] != ' ' && str[aux] != '\0') {
			aux++;
		}

		for (int j = aux + 2; j != 32; j++) {

			if (str[i] != str[j] && str[i] != ' ') {
				verificador = false;
			} else {
				verificador = true;
			}
		}
		if (verificador) {
			for (int j = aux + 1; j < strlen(str); j++) {

				printf("%c", str[j]);
			}
			cont++;
		}

		aux += 2;
	}

	printf("%d", cont);
	return 0;
}