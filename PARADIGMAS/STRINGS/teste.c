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

	// RODA TODA A FRASE
	for (int j = 0; j < strlen(str); j++) {
		verificador = false;
		// VERIFICA TAMANHO DA PRIMEIRA PALAVRA
		while (str[aux] != ' ' && str[aux] != '\0') {
			aux++;
			aux = j;
		}
		// COMPARARA PRIMEIRA PALAVRA COM O RESTANTE DA FRASE VERIFICANDO SE HÁ IGUALDADE
		for (int i = aux + 2; i < strlen(str); i++) {
			if (str[j] == str[i]) {
				if (str[i] == 32) {
					break;
				}
				verificador = true;
			} else {
				verificador = false;
				break;
			}
		}
		// SENDO IGUAL PRINTARA A FRASE QUE FOI USADA PARA COMPARAR
		if (verificador) {
			cont++;
			for (int i = 0; i <= strlen(str); i++) {

				if (str[j] == 32) {
					break;
				}
				printf("%c", str[j]);
			}
		}

		/*if (str[j] != ' ') {

			if (verificador) {
				cont++;
			}
		}*/
		aux += 2;
	}

	printf("\n%d", cont);
	return 0;
}