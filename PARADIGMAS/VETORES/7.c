#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 10, maior, pos;
	;
	int vet[x];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet[i] = rand() % 10 + 1;
	}

	for (int i = 0; i <= x - 1; i++) {
		if (vet[i] > vet[i + 1]) {
			maior = vet[i];
			pos = i;
		};
	}

	for (int i = 0; i < x; i++) {
		printf("%d\n", vet[i]);
	}

	printf("\n");

	printf("Maior: %d\nPosicao: %d\n", maior, pos);

	return 0;
}