#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 20;
	double vet[x], S = 0;

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet[i] = rand() % 1000 + 1;
		vet[i] /= 10;
	}

	for (int i = 0; i < x; i++) {
		S += (vet[i] + vet[(x - 1) - i]) * (vet[i] + vet[(x - 1) - i]);
	}

	printf("%.2lf", S);

	return 0;
}