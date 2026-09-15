#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 10;
	int vet_1[x];
	int vet_2[x];
	int vet_3[x * 2];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet_1[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < x; i++) {
		vet_2[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < x * 2; i++) {
		if (x % 2 == 0) {
			vet_3[i] = vet_1[i];
		} else {
			vet_3[i] = vet_2[i];
		}
	}
	return 0;
}