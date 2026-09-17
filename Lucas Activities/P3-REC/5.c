// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MathMulti(int n, int i) {

	if (n > 1) {
		return i + MathMulti(n - 1, i);
	}
	return i;
}

int main() {
	system("cls");
	int n, i;
	scanf("%d %d", &n, &i);

	printf("%d", MathMulti(n, i));
	return 0;
}
