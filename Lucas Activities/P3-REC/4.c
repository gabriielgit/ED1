// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int toBibary(int n) {
	if (n >= 2) {
		toBibary(n / 2);
		printf("%d", n % 2);
	}
	if (n == 1) {
		printf("%d", n);
	}
}

int main() {
	system("cls");
	int n;
	scanf("%d", &n);

	toBibary(n);

	return 0;
}