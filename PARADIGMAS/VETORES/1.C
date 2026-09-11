#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 15, y = 15, z = 15;
	int vet_1[x];
	int vet_2[y];
	int vet_3[z];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet_1[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < y; i++) {
		vet_2[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < z; i++) {
		if (vet_1[i] == vet_2[i]) {
			vet_3[i] = 1;
		} else {
			vet_3[i] = 0;
		}
	}
	for (int i = 0; i < z; i++) {
		printf("vet 1: %2d   vet 2: %2d   vet 3: %2d\n", vet_1[i], vet_2[i], vet_3[i]);
	}

	return 0;
}
