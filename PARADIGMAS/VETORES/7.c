#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 10;
	int vet[x];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet[i] = rand() % 10 + 1;
	}

	return 0;
}