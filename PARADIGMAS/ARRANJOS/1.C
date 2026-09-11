#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int tam = 10;
	int vet[tam], troca = 0;

	// ORDENA
	for (int i = 0; i < tam; i++) {
		scanf("%d", &vet[i]);
	}
	for (int j = 1; j <= tam; j++) {
		for (int i = 0; i < tam - j; i++) {

			if (vet[i] > vet[i + 1]) {
				troca = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = troca;
			}
		}
	}

	// REMOVE AS REPETIDAS
	int k = 0, cont = 0;
	for (k = 0; k < tam; k++) {
		if (vet[k] == vet[k + 1]) {
			for (k; k < tam; k++) {
				vet[k + 1] = vet[k + 2];
			}
			cont++;
		}
	}

	// PRINTA
	system("cls");
	for (int i = 0; i < tam - cont; i++) {

		printf("%d\n", vet[i]);
	}

	return 0;
}
