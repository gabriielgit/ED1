// GABRIEL FIALHO, D27724
#include <stdio.h>
#include <stdlib.h>

int main() {
	system("cls");
	int x, par = 0, impar = 0;

	do {
		scanf("%d", &x);
		if (x >= 0) {
			if (x % 2 == 0) {
				par++;
			} else {
				impar++;
			}
		}

	} while (x >= 0);

	printf("par %d\n", par);
	printf("impar %d\n", impar);
	printf("total %d", impar + par);

	return 0;
}
