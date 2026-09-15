#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 5, maior = 0;
	int vet[x];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet[i] = rand() % 10 + 1;
	}

	for (int j = 0; j < x; j++) {
		for (int i = 0; i < x - j; i++) {
			if (vet[i] > vet[i + 1]) {
				maior = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = maior;
			}
		}
	}

	for (int i = 0; i < x; i++) {
		printf("%d\n", vet[i]);
	}

	return 0;
}