#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int tam = 10;
	int vet[tam], troca = 0;

	for (int i = 0; i < sizeof(vet) / 4; i++) {
		scanf("%d", &vet[i]);
	}
	for (int j = 1; j <= sizeof(vet) / 4; j++) {
		for (int i = 0; i < (sizeof(vet) / 4) - j; i++) {

			if (vet[i] > vet[i + 1]) {
				troca = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = troca;
			} else if (vet[i] == vet[i + 1]) {
			}
		}
	}
	system("cls");
	for (int i = 0; i < sizeof(vet) / 4; i++) {

		printf("%d\n", vet[i]);
	}

	return 0;
}
