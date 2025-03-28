#include <stdio.h>

int main() {
	int n, cont = 0;
	printf("Insira o tamanho de fibonacci: ");
	scanf("%d", &n);
	int x[n];
	x[1] = 2;
	x[0] = 1;
	for (int i = 0; i < n; i++) {
		x[i] = x[i] + (x[i - 1]);
		printf("%d\n", x[i]);
	}
	return 0;
}