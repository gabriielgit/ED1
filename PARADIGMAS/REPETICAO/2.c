// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int x;

	do {
		int a = 0;
		scanf("%d", &x);

		if (x > 0) {
			for (int i = 1; i <= x; i++) {

				if (x % i == 0) {
					a++;
				}
			}

			if (a == 2) {
				printf("Primo\n");
			} else {
				printf("Nao Primo\n");
			}
		}
	} while (x > 0);

	return 0;
}
