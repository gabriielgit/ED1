// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double eNesimo(int n) {
	if (n == 1) {
		return 2;
	}

	if (n == 2) {
		return 3;
	}

	if (2 < n) {

		return (5 * n) + pow(eNesimo(n - 1), n);
	}
}

int main() {
	system("cls");
	int n, i = 1;
	scanf("%d", &n);

	printf("%.2lf", eNesimo(n));

	return 0;
}