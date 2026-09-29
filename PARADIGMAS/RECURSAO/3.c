// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MathPow(int n, int i) {

	if (n > 1) {
		return i * MathPow(n - 1, i);
	}
	return i;
}

int main() {
	system("cls");
	int n, i;
	scanf("%d %d", &n, &i);

	printf("%d", MathPow(n, i));
	return 0;
}
