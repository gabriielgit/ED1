// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Soma_Dresc(int n) {
	if (n == 1) {
		return n + n;
	}

	if (n > 2) {
		return n + Soma_Dresc(n - 1);
	}
	return 0;
}

int main() {
	system("cls");
	int n, i = 1;
	scanf("%d", &n);

	printf("%d", Soma_Dresc(n));

	return 0;
}