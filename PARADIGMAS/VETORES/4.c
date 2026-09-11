#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 10, y = 15;
	int vet_1[x];
	int vet_2[y];
	int vet_3[x + y];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet_1[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < y; i++) {
		vet_2[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < x; i++) {
		if (i != x) {
			vet_3[i] = vet_1[i];
		}
	}
	for (int i = 0; i < y; i++) {
		vet_3[i + x + 1] = vet_2[i];
	}
	for (int i = 0; i < y; i++) {
		vet_3[i + x + 1] = vet_2[i];
	}
	for (int i = 0; i < y; i++) {
		vet_3[i + x + 1] = vet_2[i];
	}
	for (int i = 0; i < y; i++) {
		vet_3[i + x + 1] = vet_2[i];
	}

	return 0;
}