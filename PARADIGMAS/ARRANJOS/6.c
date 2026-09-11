#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	system("cls");

	int x = 10, y = 5;
	int mat[x][y];
	double media_T = 0, media_A = 0;

	srand(time(NULL));
	for (int j = 0; j < x; j++) {
		for (int i = 0; i < y; i++) {
			mat[j][i] = rand() % 10 + 1;
		}
	};

	for (int j = 0; j < x; j++) {

		for (int i = 0; i < y; i++) {
			media_A += mat[j][i];
		}
		printf("Media aluno %d: %.2lf\n", j + 1, media_A /= y);
		media_A = 0;
	};
	printf("\n");
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			media_T += mat[i][j];
		}
		printf("Media Prova %d: %.2lf\n", i + 1, media_T /= x);
		media_T = 0;
	};

	return 0;
}
