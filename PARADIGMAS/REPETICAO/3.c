#include <stdio.h>
#include <stdlib.h>

int fibo(int n, int soma, int a, int b) {

	if (n == 0) {
		return 0;
	} else {

		soma += a;
		printf("soma %d\n", soma);
		fibo(n - 1, soma, b, a + b);
		return 0;
	}
}

int main() {

	system("cls");
	int n, soma = 0, a = 0, b = 1;
	scanf("%d", &n);
	fibo(n, soma, a, b);

	return 0;
}