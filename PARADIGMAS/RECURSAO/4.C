// GABRIEL FIALHO, D27724
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MDC(int m, int n) {
	// printf("%d %d\n", m, n);
	if (m % n != 0) {

		return MDC(n, m % n);
	}
	return n;
}

int main() {
	system("cls");
	int m, n;
	scanf("%d %d", &m, &n);

	printf("%d", MDC(m, n));
	return 0;
}
