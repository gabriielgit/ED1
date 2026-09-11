#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 10, y = 10, z = 10;
	int vet_1[x];
	int vet_2[y];
	int vet_3[z];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet_1[i] = rand() % 201 - 100;
	}
	for (int i = 0; i < y; i++) {
		vet_2[i] = rand() % 201 - 100;
	}

	for (int i = 0; i < z; i++) {

		vet_3[i] = vet_1[i] + vet_2[i];
	}
	for (int i = 0; i < z; i++) {
		printf("vet 1: %3.d  vet 2: %3.d   vet 3: %3.d\n", vet_1[i], vet_2[i], vet_3[i]);
	}

	return 0;
}
