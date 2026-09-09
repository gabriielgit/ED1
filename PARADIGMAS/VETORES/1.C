#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int tam = 10;
	int vet[tam], troca = 0;

	for (int i = 0; i < tam; i++) {
		scanf("%d", &vet[i]);
	}
	for (int j = 0; j < tam; j++) {
		for (int i = 0; i < tam - 1; i++) {
			if (vet[j] > vet[i]) {
				troca = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = troca;
			}
		}
	}
	for (int i = 0; i < tam; i++) {
		printf("%d\n", vet[i]);
	}

	return 0;
}
