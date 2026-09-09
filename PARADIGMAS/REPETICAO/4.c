#include <stdio.h>
#include <stdlib.h>

double SomaFracao(int S, double soma, double a, double b) {

	if (S != 0) {
		soma += (a / b);
		// printf("%.2lf\n", soma);
		SomaFracao(S - 1, soma, a + 2, b + 1);
	} else {
		return soma;
	}
}

int main() {
	system("cls");
	int S;
	double soma = 0, a = 1, b = 1;
	scanf("%d", &S);
	printf("Soma :%.2lf\n", SomaFracao(S, soma, a, b));
	return 0;
}
