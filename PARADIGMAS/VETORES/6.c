#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");
	int x = 10, j = 0, k = 0;
	int vet_1[x];
	int vet_2[x];
	int vet_3[x * 2];

	srand(time(NULL));
	for (int i = 0; i < x; i++) {
		vet_1[i] = rand() % 10 + 1;
		vet_2[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < x * 2; i += 2) {
		vet_3[i] = vet_1[j];
		j++;
	}
	for (int i = 1; i <= x * 2; i += 2) {
		vet_3[i] = vet_2[k];
		k++;
	}
	for (int i = 0; i < x; i++) {
		printf("VET 1 :  %d     VET 2 :  %d\n", vet_1[i], vet_2[i]);
	}
	printf("\n");
	for (int i = 0; i < x * 2; i++) {
		printf("VET_3:   %d\n", vet_3[i]);
	}

	return 0;
}