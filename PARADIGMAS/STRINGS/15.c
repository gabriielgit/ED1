#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	system("cls");
	char str[20];
	bool verificador = false;
	int cont = 0, aux;
	fgets(str, 15, stdin);

	str[strcspn(str, "\n")] = '\0';
	fflush(stdin);

	for (int i = 0; i < strlen(str); i++) {
		aux = 0;
		while (str[aux] != ' ' && str[aux] != '\0') {
			aux++;
		}
		cont++;
	}

	printf("%d", cont);
	return 0;
}