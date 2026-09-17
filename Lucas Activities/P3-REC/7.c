// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int QntDigit(int n) {
	if (n / 10 > 0) {
		return 1 + QntDigit(n / 10);
	}
}

int main() {
	system("cls");
	int n;
	scanf("%d", &n);

	printf("%d", QntDigit(n));
	return 0;
}
