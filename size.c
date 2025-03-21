#include <stdio.h>

int contarCaracteres(char str[]) {
	int count = 0;
	while (str[count] != '\0') {
		count++;
	}
	return count;
}

int main() {
	char str[100];

	while (1) {
		printf("Digite uma string (ou 'sair' para encerrar): ");
		fgets(str, sizeof(str), stdin);

		int tamanho = contarCaracteres(str);
		if (str[tamanho - 1] == '\n') {
			str[tamanho - 1] = '\0';
		}

		if (str[0] == 's' && str[1] == 'a' && str[2] == 'i' && str[3] == 'r' && str[4] == '\0') {
			break;
		}

		int tamanhoReal = contarCaracteres(str);
		printf("String: \"%s\" | Tamanho: %d\n", str, tamanhoReal);
	}

	return 0;
}
