// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int QntDigit(int n, int x) {
	if (n <= 9) {
		return 1;
	} else {
		return 1 + QntDigit(n / 10, x);
	}
}

int main() {
	system("cls");
	int n, x;
	scanf("%d%d", &n, &x);

	printf("%d", QntDigit(n, x));
	return 0;
}
