#include <stdio.h>
#include <stdlib.h>

// IMPRIME DIAGONAL MATRIZ PRINCIPAL

int main() {
	system("cls");
	int x = 4, y = 4;
	int mat[x][y];

	for (int j = 0; j < x; j++) {
		for (int i = 0; i < y; i++) {
			scanf("%d", &mat[j][i]);
		}
		system("cls");
	};
	system("cls");
	for (int j = 0; j < x; j++) {
		for (int i = 0; i < y; i++) {
			if (j - 1 == i) {
				printf("%d\n", mat[j][i]);
			}
		}
	};

	return 0;
}