// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	long long int x = 99999999999, maior, menor, maior_cont = 0, menor_cont = 0;
	double media = 0;
	int* vet = malloc(x * sizeof(int));
	clock_t fim, inicio;
	inicio = clock();

	srand(time(NULL));
	for (long long int i = 0; i < x; i++) {
		vet[i] = rand() % 20 + 1;
	}

	for (long long int i = 0; i < x; i++) {
		if (vet[i] > 16) {
			maior_cont++;

		} else {
			menor_cont++;
		}
		if (vet[i] > maior) {
			maior = vet[i];
		};
		if (vet[i] <= menor) {
			menor = vet[i];
		};
		media += vet[i];
	}

	printf("%d menores ou iguais a 16 anos,\n%d maiores que 16 anos,\n%.2f idade media, \n%d maior idade, \n%d menor idade\n", maior_cont, menor_cont, media /= x, maior, menor);
	printf("TEMPO: %f\n", (double)(fim = clock() - inicio) / CLOCKS_PER_SEC);
	free(vet);
	return 0;
}